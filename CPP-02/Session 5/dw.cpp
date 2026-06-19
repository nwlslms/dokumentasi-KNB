#include <iostream>
using namespace std;
int main () {
    float total = 0;
    int i = 0;
    float nilai;
    do {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai;
        total += nilai;
        i++;
    } while (nilai != -1.0);
    i -= 2;
    cout << "Rata-rata " << i+1 << " nilai adalah: " << total / (i+1);
    return 0;
}