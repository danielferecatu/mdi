#include <iostream>
using namespace std;

int main() {

int s=0, n, x;


cout << "n= ";
cin >> n;


for (int i=1; i<=n; i++) {

    do {
        cout << "x= "; cin >> x;
    }
    while ( x<0 );

    while ( x>9 ) x/= 10;

    for (int j=1; j<=i-1; j++) x*= 10;

    s+= x;

}

cout << endl << "s= " << s;

return 0;

}
