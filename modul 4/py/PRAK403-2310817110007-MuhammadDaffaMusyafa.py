t, y = map(int,input().split())

if t > y:
    for i in range(t,y -1,-1):
        j = y + (t - i)
        print(f"{i} {j} - ", end='')
else:
    for i in range(t,y + 1):
        j = y - (i - t)
        print(f"{i} {j} - ", end='')

print(f"{y} {t}")            