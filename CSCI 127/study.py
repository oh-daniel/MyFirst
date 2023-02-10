#5/21/2022


s = str(input("enter msg: "))
ls = len(s)
for i in range(0, ls, 1):
    print(s[0:i])
    print(i)
for i in range(0, ls, 1):
    print(s[i:ls])
        
