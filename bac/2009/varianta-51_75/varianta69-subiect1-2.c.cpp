#include <iostream>
using namespace std;

int main() {

int x, y, t=0, u=1, z;

do {

    cout << "x= ";
    cin >> x;

    cout << "y= ";
    cin >> y;

}
while ( x<=0 || y<=0 );

do {

    if ( x%10 > y%10 ) z = x%10;
    else z = y%10;

    t = t + z*u;
    u*= 10;

    x/= 10;
    y/= 10;

}
while ( x>0 && y>0 );

cout << endl << "t=" << t;

return 0;

}
