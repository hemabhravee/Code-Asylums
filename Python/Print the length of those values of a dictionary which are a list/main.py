mydict = {"chips":["lays","kurkure"],"chocolate":["bourneville", "dark choc"],"coke":98,"sprite":21}

def func(val):
    if(type(val)==list):
        return(len(val))
    else:
        return 0

x = list(map(func,mydict.values()))
print(x)
