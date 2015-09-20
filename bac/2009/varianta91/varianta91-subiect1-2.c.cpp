#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

int z, x, y;


cout << "z= ";
cin >> z;

cout << "x= ";
cin >> x;


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
