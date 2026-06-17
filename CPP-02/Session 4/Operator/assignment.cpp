#include <iostream>

using namespace std;

int main () {
    int helper = 0, a, b;
    cin >> a >> b;

    helper = a;
    cout << helper << endl;
    // helper = helper + b;
    helper += b;
    cout << helper << endl;

    helper -= a - b;
    cout << helper << endl;

    helper *= (a * 2) - (b + 2);
    cout << helper << endl;
    
    return 0;
}