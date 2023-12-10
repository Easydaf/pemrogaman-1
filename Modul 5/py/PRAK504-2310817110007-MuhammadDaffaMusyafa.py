def reverse(n):
    isi = 0
    while n != 0:
        isi = (isi * 10)+(n%10)
        n = n//10
    return isi

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))