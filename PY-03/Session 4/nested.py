#n = 5
for baris in range(5):
    for bintang in range(baris + 1):
        print(f"{bintang + 1}", end=" ")
    print()

baris = 0, 1, 2, 3, 4
# Iterasi baris = 0
    # bintang = 0
        # *

# Iterasi baris = 1
    # bintang = 0, 1
        # Iterasi bintang = 0
            # print "* *"
        
# Iterasi baris = 2
    # bintang = 0, 1, 2
        # Iterasi bintang
            # print "* * *"


# Iterasi baris = 3
    # bintang = 0, 1, 2, 3
        # Iterasi bintang
            # print "* * * *"
        
# Iterasi baris = 4
    # bintang = 0, 1, 2, 3, 4
        # Iterasi bintang
            # print "* * * * *"
