#include <iostream>
using namespace std;

int main() {

int n, m, p=1, c1, c2;

// 1111, 1000, 4321...
n = 1000;

m = n;

while ( n>=p*10 ) {

    c1 = n/p%10;
    c2 = n/(p*10)%10;

    if ( c1>c2 ) {

        n-= (c1-c2)*p;
        p*= 10;
        n+= (c1-c2)*p;

    }
    else p*= 10;

}

if ( n==m ) cout << "0";
else cout << n;

return 0;

}
