#include <iostream>
using namespace std;

int main() {

int a, b, p, q;


cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;


p = a;
q = b;

if ( p==0 || q==0 ) {

    p *= q;
    q *= p;

}

while ( p!=q ) {

    if ( p<q ) p += a;
    else q += b;

}

cout << endl << "p=" << p;

return 0;

}
