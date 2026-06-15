#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float panjang;
    float lebar;

    cin >> panjang >> lebar;

    cout << "Luas\t:" << fixed << setprecision(2) << (panjang * lebar) << endl;

    return 0;
}