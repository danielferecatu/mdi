#include <iostream>
using namespace std;

int main() {

int x, y, z=1, t=0;


cout << "x= ";
cin >> x;

cout << "y= ";
cin >> y;


while ( x>=z ) {

    if ( x%z==y ) t = z;

    z++;

}

cout << endl << "t=" << t;

return 0;
}
