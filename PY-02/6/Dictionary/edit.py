kamus = {
    #key : value
    'I' : "Aku",
    "You" : "Kamu",
    "We": "Kami",
    "They": "Mereka",
    "He": "Dia"
}

print(kamus)
kamus['He'] = "Dia(lk)"
print(kamus)

kamus.update({'He':"Dia"})
print(kamus)