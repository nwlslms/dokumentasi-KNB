#Operator Aritmatika
#+,-,/,//,*,%, **
print("%d + %d = %d" % (20, 30, 20 + 30))
print("%d - %d = %d" % (20, 30, 20 - 30))
print("%d / %d = %f" % (5, 2, 5 / 2))
print("%d // %d = %f" % (5, 2, 5 // 2))
print("%d * %d = %d" % (20, 30, 20 * 30))
print("%d %% %d = %d" % (20, 30, 20 % 30))
print("%d ** %d = %d" % (20, 30, 2 ** 3))

#Operator Assignment
#=
a = 10
a = a + 10
a += 10 #20
a -= 5
a *= 20
a *= 60 + 2 * 3 / 3 + 2 #a = a * (60 + 2 * 3 / 3 + 2)

#Operator komparasi / Relasional
#Hasil boolean = 1 / 0 || true / false
a = 10
b = 20
print("a > b: %d" % (a > b))
print("a >= b: %d" % (a >= b))
print("a < b: %d" % (a < b))
print("a <= b: %d" % (a <= b))
print("a == b: %d" % (a == b))
print("a != b: %d" % (a != b))

#>, >=, <, <=, ==, !=

#Operator Logika
#or
print("1 or 1: %d"%(1 or 1))
print("1 or 0: %d"%(1 or 0))
print("0 or 1: %d"%(0 or 1))
print("0 or 0: %d"%(0 or 0))
#and
print("1 and 1: %d"%(1 and 1))
print("1 and 0: %d"%(1 and 0))
print("0 and 1: %d"%(0 and 1))
print("0 and 0: %d"%(0 and 0))
#not
print("!1: %d" % (not 1))
print("!0: %d" % (not 0))

#Operator Bitwise