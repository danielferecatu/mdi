#include <iostream>
using namespace std;

int main() {

int n, d=2;

n = 2352;

if ( d<=n ) {

    do {

        int p=0;

        while ( n%d==0 ) {
            p++;
            n/= d;
        }

        if ( p%2==0 && p!=0 ) cout << d << " ";

        d++;

    }
    while ( d<=n );

}

cout << n << endl;

return 0;

}
