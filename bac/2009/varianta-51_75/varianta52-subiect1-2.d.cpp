#include <iostream>
using namespace std;

int main() {

int x, n, d=0, c=0;

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
    while ( x<=0 );

    while ( x%2==0 ) {

        x /= 2;
        d++;

    }

    while ( x%5==0 ) {

        x /= 5;
        c++;

    }

}

if ( c<d ) cout << "c=" << c;
else cout << "d=" << d;

return 0;

}
