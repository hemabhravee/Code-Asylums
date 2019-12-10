mydict = {1:1,2:2,3:3,4:4}
avg=0
for i in mydict.values():
    avg+=i

avg/=len(mydict)

for i in mydict.keys():
    mydict[i] = avg
print(mydict)
