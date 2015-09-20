#include <iostream>
using namespace std;

int main() {

int a, b, nr=0, x, c;

a = 65;
b = 80;

for( int i=a; i<=b; i++ ) {

    x = i;
    c = x%10;

    while( x && x%10==c ) {
        x/= 10;
    }

    if( x==0 ) {
        nr++;
    }

}

cout << nr;

return 0;

}
