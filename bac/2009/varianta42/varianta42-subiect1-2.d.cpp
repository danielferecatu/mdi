#include <iostream>
using namespace std;

int main() {

int x, y, z;


cout << "x= ";
cin >> x;

cout << "y= ";
cin >> y;


while ( y>0 ) {

    z = x%y;
    x *= 2;
    y *= 2;

}

cout << endl << "x=" << x;

return 0;

}
