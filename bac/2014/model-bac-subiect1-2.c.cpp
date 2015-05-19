#include <iostream>
using namespace std;

int main() {

int a, b, nr=0;

a = 1000;
b = 8765;

for ( int i=a; i<b; i++) {

    int x = i;

    while ( x>9 && 1+x%10==x/10%10 ) x/= 10;

    if ( x<10 ) nr++;

}

cout << "nr= " << nr;

return 0;

}
