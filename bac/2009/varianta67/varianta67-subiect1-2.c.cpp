#include <iostream>
using namespace std;

int main() {

int n, z=0, c;


cout << "n= ";
cin >> n;


while ( n>0 ) {

    c = n%10;
    n/= 10;

    if ( c<5 ) z = z*10 + 2*c;

}

cout << endl << "z=" << z;

return 0;

}
