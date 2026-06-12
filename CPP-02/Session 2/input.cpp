#include <iostream>
#include <string>

using namespace std;

int main () {
    int umur;
    cout << "Umur kamu: ";
    cin >> umur;
    cout << umur << endl;
    
    cin.ignore();

    string nama;
    cout << "Nama kamu: ";
    getline(cin, nama);
    cout << nama << endl;
    return 0;
}