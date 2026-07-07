nilai = int(input("Nilai: "))

while nilai < 0 or nilai > 100:
    nilai = int(input("Nilai: "))

print(f"Nilai: {nilai}")