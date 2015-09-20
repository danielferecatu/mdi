#include <iostream>
using namespace std;

int main() {

int a, b;

cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;

if ( a<b ) {

    a = a+b;
    b = a-b;
    a = a-b;

}

for ( int x=a; x<=b; x-- ) {

    if ( x%2!=0 ) {

        cout << x << " ";

    }

}

return 0;

}
