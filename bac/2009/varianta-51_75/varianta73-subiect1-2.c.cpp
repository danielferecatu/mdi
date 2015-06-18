#include <iostream>
using namespace std;

int main() {

int a, b, p, nr=0, x;


cout << "a=";
cin >> a;

cout << "b=";
cin >> b;

cout << "p=";
cin >> p;


for (int i=a; i<=b; i++) {

    x = i;

    while ( x!=0 && x%p!=0 ) x/= 10;

    if ( x!=0 ) nr++;

}

cout << endl << "nr= " << nr;

return 0;

}
