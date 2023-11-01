hari = 0
jam = 0
menit = 0
detik = 0
# kenapa sama dengan 0 karena jika tidak sama dengan 0 maka angkanya akan 625654522
inputvar = int(input())

if inputvar >= 86400:
    hari = inputvar // 86400
    inputvar %= 86400

if inputvar >= 3600:
    jam = inputvar // 3600
    inputvar %= 3600

if inputvar >= 60:
    menit = inputvar // 60
    inputvar %= 60

detik = inputvar

if hari > 0:
    print(f"{hari} hari:{jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")
