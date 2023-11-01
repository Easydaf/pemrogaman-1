number = str(input("Masukkan dua pertama: "))
print(number)
result = number.split()

if(result[0] < result[1]) :
    print(f"{result[0]} {result[1]}")
else: 
    print(f"{result[1]} {result[0]}")