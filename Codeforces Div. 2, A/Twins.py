t=int(input())
x=list(map(int,input().split()))
s=sum(x)
c=0
v=0
x.sort(reverse=True)
for i in range(t):
    c=c+x[i]
    s=s-x[i]
    if c<s or c==s:
        v+=1
    else:
        v+=1
        break
print(v)
    
