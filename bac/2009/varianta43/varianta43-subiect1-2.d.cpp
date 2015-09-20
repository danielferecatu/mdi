#include <iostream>
using namespace std;

int main() {

int x, y;


cout << "x= ";
cin >> x;

cout << "y= ";
cin >> y;


while ( x*y!=0 ) {

    if ( x>y ) x %= y;
    else y %=x;

}

cout << endl << "x+y=" << x+y;

return 0;

}
