angka, simbol = input().split()
i = 0
for i in range(1,51):
    if i % int(angka) == 0:
        print(simbol, end='')
    else:
        print(i, end='')