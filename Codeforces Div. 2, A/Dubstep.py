s = input()
x = s.split("WUB")
for i in x:
    if i=='':
        x.remove(i)
print(" ".join(x))