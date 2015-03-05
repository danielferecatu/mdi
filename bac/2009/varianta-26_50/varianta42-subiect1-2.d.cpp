#include <iostream>
using namespace std;

int main() {

int x, y, z;

do {

    cout << "x= ";
    cin >> x;

    cout << "y= ";
    cin >> y;

}
while ( x<0 || y<0 );

while ( y>0 ) {

    z = x%y;
    x *= 2;
    y *= 2;

}

cout << endl << "x=" << x;

return 0;

}
