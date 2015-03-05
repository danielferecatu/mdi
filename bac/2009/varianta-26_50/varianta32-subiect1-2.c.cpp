#include <iostream>
using namespace std;

int main() {

int a, b;

do {

    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

}
while ( a<0 || b<0 );

if ( a>b ) {

	int t;

    t = b;
    b = a;
    a = t;

}

while ( a<=b ) {

    cout << a;
    a *= 2;

}

cout << endl << "a=" << a;

return 0;

}
