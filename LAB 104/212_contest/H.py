t = int(input())

for i in range(0, t):
    s = input()
    a = b = c = 0
    for m in range(0, len(s)):
        if (s[m] == "A"):
            a = a+1
        elif (s[m] == "B"):
            b = b+1
        else:
            c = c+1


    if (int(a+c) == int(b)):
        print("YES")
    else:
        print("NO")
