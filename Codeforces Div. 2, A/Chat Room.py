s=input()
s_iter=iter(s)
if all(c in s_iter for c in 'hello'):
    print("YES")
else:
    print("NO")