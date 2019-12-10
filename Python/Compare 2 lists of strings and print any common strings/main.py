b = ["kek","lol","yeet"]

def check(s):
    a = ["kek","lol","crap"]
    for i in a:
        if s == i:
            print(s)
            return s       

x = list(filter(check,b))
print(x)
