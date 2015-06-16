#include <iostream>
using namespace std;

int main() {

int n, m, nr=0, x, y, z;

m = 54321;
n = 54344;

for (x=m; x<=n; x++) {

    y = 0;
    z = x;

    do {
        y = y*10 + z%10;
        z/= 10;
    }
    while ( z>0 );

    if ( x==y ) nr++;

}

cout << nr << endl;

return 0;

}
