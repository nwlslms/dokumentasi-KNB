kamus = {
    #key : value
    'I' : "Aku",
    "You" : "Kamu"
}

print(kamus["I"])

kamus['We'] = "Kami"
print(kamus)

kamus.update({"They":"Mereka"})
print(kamus)