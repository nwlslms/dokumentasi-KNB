#include <iostream>

using namespace std;

int main () {
    /*
    *
    **
    ***
    ****
    *****
    */
    for(int baris = 0; baris < 5; baris++) {
        for(int bintang = 0; bintang <= baris; bintang++) {
            cout << "*";
        }
        cout << endl;
    }
    
   cout << endl << endl;
    for(int baris = 0; baris < 5; baris++) {
        for(int spasi = 0; spasi < baris; spasi++) {
            cout << " ";
        }
        for(int bintang = 5; bintang > baris; bintang--) {
            cout << "*";
        }
        cout << endl;
    }
    /*
        *
       **
      ***
     ****
    *****
    */
    
    /*
    *****
    ****
    ***
    **
    *
    */
    return 0;
}