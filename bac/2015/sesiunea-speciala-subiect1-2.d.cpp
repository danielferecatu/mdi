#include <iostream>
using namespace std;

int main() {

int n, m, nr=0, x, y, z;

cout << "m= ";
cin >> m;

cout << "n= ";
cin >> n;

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

cout << endl << nr << endl;

return 0;

}
