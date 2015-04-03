#include <iostream>
using namespace std;

int main() {

int a, b, c, x;

do {

    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

}
while ( a<=0 || b<=0 || c<=0 );

while ( a!=b || a!=c ) {

    x = a;

    if ( x>b ) x=b;
    if ( x>c ) x=c;

    if ( x!=a ) a-= x;
    if ( x!=b ) b-= x;
    if ( x!=c ) c-= x;

}

cout << endl << "a= " << a;

return 0;

}
