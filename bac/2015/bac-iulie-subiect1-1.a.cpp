#include <iostream>
using namespace std;

int main() {

int n, k, pm=0, i=1, x, p;

n = 7;
k = 2;

while( i<=n ) {

    x = i;
    p = 0;

    while( x%k==0 ) {
        x/= k;
        p++;
    }

    if( p>pm ) {
        pm = p;
    }

    i++;

}

cout << pm;

return 0;

}
