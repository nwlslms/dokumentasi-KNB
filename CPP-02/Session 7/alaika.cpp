#include <iostream>
#include <cmath>

using namespace std;

int main () {
    float a = 4.2;
    cout << ceil(a);
    cout << endl << floor(a);

    float b, c;
    cout << endl << "hasil = b / c" << endl;
    cout << "b: ";
    cin >> b;
    
    do {
        cout << "c: ";
        cin >> c;
    } while (c == 0);
    cout << endl <<  b / c;

    do {

    } while (input < 1 || input > 20);
    return 0;
}