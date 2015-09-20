#include <iostream>
using namespace std;

void F( char c ) {

    if( c>='a' ) {
        cout << c;
        F( c-1 );
    }

}


int main() {

F('d');

return 0;

}
