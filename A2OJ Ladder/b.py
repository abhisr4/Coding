import math

#take input
n,x,k=map(int,input().split())
s=input()

k-=1
blocks=[]
for i in range(1,n+1):
	start,end=((i-1)*x+1),min(n,(i*x))
	if start> n:
		break;
	blocks.append(list(set(s[start-1:end])))
	blocks[-1].sort()

blocks_length=len(blocks)

suffix=[1]*blocks_length
nxt=nxtSuffix=1
for i in range(blocks_length-1,-1,-1):
	suffix[i]=nxt*nxtSuffix
	nxt=len(blocks[i])
	nxtSuffix=suffix[i]

value=''
for i in range(blocks_length):
	cur,curLen=blocks[i],len(blocks[i])
	position=k//suffix[i]
	value+=blocks[i][position]
	k%=suffix[i]
print(value)