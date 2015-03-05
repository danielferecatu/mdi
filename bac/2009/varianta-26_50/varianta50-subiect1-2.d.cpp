#include <iostream>
using namespace std;

int main() {

int n, k=9, c, x;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<=0 );

for ( int i=1; i<=n; i++ ) {

    do {

        cout << "x= ";
        cin >> x;

    }
    while ( x<0 );

    c = x/10%10;

    if ( c<k ) k = c;

}

cout << endl << "k=" << k;

return 0;

}
