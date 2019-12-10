d = {"a":"aa","b":"aa","c":"ba"}
l = []
for i in d.values():
    if(i not in l):
        l.append(i)

print(l)
