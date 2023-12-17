N = int(input())
# Converte os elementos para inteiros
lista = list(map(int, input().split()))
listap= []
for x in range(N):
        listap.append("")

# for i in range(N):
#     listap.append(lista[N - i + 1])
for i in range(N):
    if N - i + 1 >= 0:  # Verifica se o índice está dentro dos limites da lista
        listap.append(lista[N - i + 1])

# print(listap)
alt = 0
if lista == listap:
     print("0")
else:
    for i in range(N-1):
        if (lista[i] + lista[i+1]) == lista[N - i + 1]:
            lista[i] = lista[i] + lista[i+1]
            lista.pop(i+1)
            N = N -1
            alt = alt +1
        # começa o highlight
    print(alt)
