mydict = {"chips":99,"chocolate":100,"coke":98,"sprite":21}
l = list(mydict.keys())
m = list(mydict.values())
n = m
n.sort(reverse=True)
o = [n[i] for i in range(3)]

for i in range(len(m)):
    if(m[i] in o):
        print(l[i])
