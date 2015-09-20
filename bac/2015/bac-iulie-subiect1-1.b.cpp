#include <iostream>
using namespace std;

int main() {

int n, k, pm=0, i=1, x, p;

// 125, 624
n = 125;
k = 5;

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
