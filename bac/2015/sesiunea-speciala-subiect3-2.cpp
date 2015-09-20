#include <iostream>
using namespace std;

void F( long a, int b ) {

    if( a*b!=0 ) {
        if( a%2==0 ) {
            cout << a%10;
            F( a/10, b-1 );
        }
        else {
            F( a/10, b+1 );
            cout << a%10;
        }
    }

}

int main() {

F( 154678, 3 );

return 0;

}
