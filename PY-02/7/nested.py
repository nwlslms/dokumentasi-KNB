def lingkaran (jari):
    def keliling(r):
        return r * 3.14 * 2
    def luas(r):
        return 3.14 * r ** 2
    print(f"Keliling: {keliling(jari)}\nLuas: {luas(jari)}")

lingkaran(14)