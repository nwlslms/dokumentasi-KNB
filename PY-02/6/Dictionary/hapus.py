kamus = {
    #key : value
    'I' : "Aku",
    "You" : "Kamu",
    "We": "Kami",
    "They": "Mereka",
    "He": "Dia"
}

print(kamus)
kamus.popitem()
print(kamus)

kamus.pop('I')
print(kamus)

del kamus["We"]
print(kamus)

kamus.clear()
print(kamus)