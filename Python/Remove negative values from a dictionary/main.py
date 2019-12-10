mydict = {1:1,2:-2,3:3,4:-4}
mydict2 = {}

for i,j in mydict.items():
    if(j>0):
        mydict2[i] = j

print(mydict2)
