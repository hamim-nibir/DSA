t = int(input())

while(t > 0) :
    str = input()
    words= str.split(" ")
    res = ""
    for word in words :
        res = res + word[0]
    print(res)
    t = t-1