kamus = {
    #key : value
    'I' : "Aku",
    "You" : "Kamu",
    "We": "Kami",
    "They": "Mereka",
    "He": "Dia"
}

# Cuma nampilin keys
for i in kamus:
    print(i)
    print(kamus[i])

# 2 Nilai, keys, values
for keys, values in kamus.items():
    print(f"{keys} : {values}")

print("=========================================")
#.keys()
for i in kamus.keys():
    print(i)
print("=========================================")

#.values()
for i in kamus.values():
    print(i)