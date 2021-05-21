n=int(input())
for i in range(0,n):
  s=input()
  s=s.lower()
  if len(s)<=10:
    print(s)
  else:
    l=len(s)
    first=s[0]
    last=s[l-1]
    new1=s[1:l-1]
    l2=len(new1)
    print(first+"{}".format(l2)+last)