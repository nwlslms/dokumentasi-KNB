#include <iostream>

using namespace std;

int main () {
    float nilai[5];
    // cin >> nilai[0];
    // cin >> nilai[1];
    // cin >> nilai[2];
    for(int i = 0; i < 5; i++) {
        cin >> nilai[i];
    }
    for(int i = 0; i < 5; i++) {
        cout << "Index ke-" << i << ": " << nilai[i] << endl;
    }
    return 0;
}