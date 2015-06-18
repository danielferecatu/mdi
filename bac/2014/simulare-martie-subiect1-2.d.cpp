#include <iostream>
using namespace std;

int main() {

int a, b, k=0, nr;


cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;


nr = a;

while ( nr<=b ) {

    int aux = nr;

    while ( aux>100 ) aux/= 10;

    if ( nr%100==aux ) k++;

    nr++;

}

cout << "k= " << k;

return 0;

}
