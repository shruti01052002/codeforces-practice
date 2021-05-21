#https://codeforces.com/gym/301895/problem/A

s = input()
t = input()
if s == t[::-1]:  #If the reverse of string t is equal to s print "YES"
    print("YES")
else:
    print("NO")     #If the reverse of string t is not equal to s print "NO"