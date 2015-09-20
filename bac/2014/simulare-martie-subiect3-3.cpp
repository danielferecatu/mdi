#include <iostream>
#include <math.h>
using namespace std;

long mic, mare;

long divizori( long n ) {

    for( int d=2; d<sqrt(n); d++ ) {
        if( n%d==0 ) {
            mic = d;
            mare = n/d;
            break;
        }
    }

}

int main() {

cout << "divizori(32423)= " << divizori(32423);

return 0;

}
