#include <iostream>

using namespace std;

int main () {
    //AND
    cout << "1 && 1: " << (1 && 1) << endl;
    cout << "1 && 0: " << (1 && 0) << endl;
    cout << "0 && 1: " << (0 && 1) << endl;
    cout << "0 && 0: " << (0 && 0) << endl;

    //O R
    cout << "1 || 1: " << (1 || 1) << endl;
    cout << "1 || 0: " << (1 || 0) << endl;
    cout << "0 || 1: " << (0 || 1) << endl;
    cout << "0 || 0: " << (0 || 0) << endl;

    //NOT
    cout << "!1: " << (!1) << endl;
    cout << "!0: " << (!0) << endl;

    int a, b;
    // c or d
    // c = (a > b)
    // b = (a == b)
    cin >> a >> b;
    bool Kebenaran = (a > b) && (a == b);
    cout << "(" << a << " > " << b << ") && (" << a << " == " << b << "): " << Kebenaran << endl;
    cout << !Kebenaran;

    return 0;
}