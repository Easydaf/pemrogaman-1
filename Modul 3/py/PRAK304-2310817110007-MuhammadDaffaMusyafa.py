num = int(input())
if num >= 100:
    print("anda menginput lebih dari batas limit")
elif num < 100 and num >= 20:
    print("puluhan")
elif num >= 10 and num <= 19:
    print("belasan")
elif num < 10 and num >= 1:
    print("satuan")
elif num == 0:
    print("nol")