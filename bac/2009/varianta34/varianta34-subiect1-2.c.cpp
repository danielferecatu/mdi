#include <iostream>
using namespace std;

int main() {

int x, y;


cout << "x= ";
cin >> x;

cout << "y= ";
cin >> y;


if ( y<x ) {

    int t;

    t = y;
    y = x;
    x = t;

}

while ( x<=y ) {

    cout << endl << x*10+y;
    x++;
    y--;

}

return 0;

}
