#include <iostream>

using namespace std;

int main () {
    string nama;
    cin >> nama;
    if (nama == "ADMIN") {
        cout << "SELAMAT DATANG ADMIN" << endl;
    }
    cout << "Hello, " << nama << endl;
    return 0;   
}