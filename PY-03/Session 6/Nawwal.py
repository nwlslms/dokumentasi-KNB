tugas = float(input("Nilau tugas: "))

while tugas < 0 or tugas > 100:
    tugas = float(input("Nilau tugas: "))

uts = float(input("Nilai UTS: "))

while uts < 0 or uts > 100:
    uts = float(input("Nilai UTS: "))

uas = float(input("Nilau UAS: "))

while uas < 0 or uas > 100:
    uas = float(input("Nilau UAS: "))

akhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas)

grade = 'A'

if akhir >= 85:
    grade = 'A'
elif akhir >= 70:
    grade = 'B'
elif akhir >= 60:
    grade = 'C'
elif akhir >= 50:
    grade = 'D'
else:
    grade = 'E'

print(f"Nilai akhir: {akhir}\nGrade: {grade}")