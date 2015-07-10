#include <iostream>
using namespace std;

int main() {

// variabile
int n, t=0, c=0;

// citire date
cout << "n= ";
cin >> n;

// afisam primii n termeni
while( t<n ) {

    c++;

    for (int i=1; i<=c; i++) {
        if( t==n ) { break; }
        else {
            cout << c << " ";
            t++;
        }
    }

}

return 0;

}
