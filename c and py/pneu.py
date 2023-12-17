tabma = 0
tabme = 100
da = [int(input()), int(input()), int(input())]
i = 0
for x in da:
    if da[i] > tabma:
        tabma = da[i]
    if da[i] < tabme:
        tabme = da[i]
    i = i +1
i= 0
for x in da:
    if da[i] != tabma and da[i] != tabme:
        print (da[i])
        break
    i = i +1
