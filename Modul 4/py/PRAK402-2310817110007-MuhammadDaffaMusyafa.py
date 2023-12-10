x = int(input())

for i in range(1, x + 1):
    if i % 2 != 0:
        print(i , end='')

print()

for j in range(x, 0, -1):
    if j % 2 == 0:
        print(j , end='')