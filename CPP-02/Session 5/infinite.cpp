#include <iostream>


using namespace std;
int main () {
    int total = 0;
    for(;;) {
        int nilai;
        cout << "Sum: " << total << endl;
        cout << "Input: ";
        cin >> nilai;
        if(total >= 100000) {
            break;
        }
        total += nilai;
    }
    return 0;
}