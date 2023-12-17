
haystack = input()
needle = input()
x = 0
y = 0
z = 0
while (y < len(needle)):
    if haystack[x] != needle[y]:
        x = x+1
        y = 0
    else:
        x = x +1
        y = y +1
        z = y
if z == len(needle):
    c = x - len(needle)
    print(c)
else:
    print("-1")
