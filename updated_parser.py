import tornado.ioloop, tornado.web, json, sys
from colorama import *

class MainHandler(tornado.web.RequestHandler):
    def post(self):
        data=json.loads(self.request.body)
        createDirectory(data)

def make_app():
    return tornado.web.Application([
        (r"/", MainHandler),
    ])

def createDirectory(data):
    current_dir=os.getcwd()
    problem_dir=current_dir+'/'+data['name']
    try:
        os.mkdir(problem_dir)
    except FileExistsError:
        print(Fore.RED+"An error in creating directory"+data['name'])
        print(Style.RESET_ALL)
    problem_file=problem_dir+'/'+data['name']+'.cpp'
