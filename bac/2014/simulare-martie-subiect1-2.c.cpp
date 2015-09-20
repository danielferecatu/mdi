#include <iostream>
using namespace std;

int main() {

int a, b, k=0, nr;

a = 21520;
b = 21523;

for( nr=a; nr<=b; nr++ ) {

    int aux = nr;

    while( aux>100 ) {
        aux/= 10;
    }

    if( nr%100==aux ) {
        k++;
    }

}

cout << "k= " << k;

return 0;

}
