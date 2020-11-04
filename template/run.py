import sys,os,getopt

def main(file):
    cpp_file=file+".cpp"
    exe_file="a.exe"
    run(cpp_file,exe_file)

def run(cpp_file,exe_file):
    os.system("echo Compiling "+cpp_file)
    sysRun=os.system("g++ "+cpp_file +" -o" +exe_file)
    if sysRun==0:
        os.system("echo running "+exe_file)
        os.system("echo --------")
        os.system(exe_file)
    else:
        print("Fuck Shit Error sucks")
        print(sysRun)

if __name__=="__main__":
    print("Enter the file name")
    file=input()
    while file=="":
        print("Enter again you dickhead")
        file=input()
    main(file)

