#include <iostream>
using namespace std;

int main() {

int a, b;


cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;


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
