x=['b','e','i','c','a','f','i','e','h','a','d','f','b','d','g','c','g','i','j','h','j']
y=[1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0]
def printarr():
    for i in y:
        print(i,end="")
    print()    
score1=0
score2=0
player=1
while True:
    if(player==1):
        print("player1_","score",score1)
        a=int(input())
        b=int(input())
        player=2
    elif(player==2):
        print("player2_","score",score2)
        a=int(input())
        b=int(input())
        player=1
    if x[a]!=x[b]:
        temp1=y[a]
        temp2=y[b]
        y[a]=x[a]
        y[b]=x[b]
        printarr()
        y[a]=temp1
        y[b]=temp2
    else:
        y[a]='*'
        y[b]='*'
        printarr()
        if (player==2):
            score1 +=1
        else:
            score2 +=1
