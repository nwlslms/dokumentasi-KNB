#include <iostream>

using namespace std;

int main () {
    // Makan
    // char c1 = 'M';
    // char c2 = 'a';
    char kata[6] = {'M', 'a', 'k', 'a', 'n', '\0'};
    for(int i = 0; kata[i] != '\0'; i++) {
        cout << kata[i];
    }
    cout << endl << kata << endl;

    string kata2 = "Minum";
    cout << endl <<  kata2 << endl;
    for(int i = 0; kata2[i] != '\0'; i++) {
        cout << kata2[i];
    }


    return 0;
}