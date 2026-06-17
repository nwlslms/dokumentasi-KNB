 #include <iostream>

using namespace std;

int main () {
    int hari;
    cin >> hari;
    switch(hari) {
        case 1:
            cout << "Ahad\n";
            break;
        case 2:
            cout << "Senin\n";
            break;
        case 3:
            cout << "Selasa\n";
            break;
        default:
            cout << "Input tidak sesuai\n";
            break;
    }
    return 0;
}