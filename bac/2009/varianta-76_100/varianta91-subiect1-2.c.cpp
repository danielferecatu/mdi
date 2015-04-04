#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

int z, x, y;

do {

    cout << "z= "; cin >> z;
    cout << "x= "; cin >> x;

}
while ( z==0 || x==0 );

z = abs(z);
x = abs(x);

do {

    y = z;
    x = (x+z/x)/2;

}
while ( x!=y );

cout << endl << "x= " << x;

return 0;

}
