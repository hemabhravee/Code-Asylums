l = ["kek","lol","yeet"]
s = "hello"
#print(s[::-1])
def pal(s):
    if(s==s[::-1]):
        print(s , "  palindrome\n")
list(map(pal,l))

