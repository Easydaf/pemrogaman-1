n1, n2 = map(int, input().split())

if n1 == n2:
    y = list(map(int, input().split()))
    x = list(map(int, input().split()))

    result = [y[i] * x[i] for i in range(n1)]
    print(" ".join(map(str, result)))
else:
    print("Jumlah tidak sama")
