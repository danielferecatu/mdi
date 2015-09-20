#include <iostream>
using namespace std;

int main() {

int n=0, x;

do {

    cin >> x;

    if ( x!=0 ) {

        if ( x%5==0 ) n++;
        else n--;

    }

}
while ( x!=0 );

if ( n==0 ) cout << endl << "DA";
else cout << endl << "NU";

return 0;

}
