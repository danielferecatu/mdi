#include <iostream>
using namespace std;

int F( int x, int y ) {

    if( x==y ) {
        return 1;
    }
    else {
        if( x<y ) {
            int t = x;
            x = y;
            y = t;
        }

        return 1 + F( x-y, y );
    }

}

int main() {

cout << "F( 105, 105 )= " << F( 105, 105 ) << endl;
cout << "F( 105, 42 )= "  << F( 105, 42 )  << endl;

return 0;

}
