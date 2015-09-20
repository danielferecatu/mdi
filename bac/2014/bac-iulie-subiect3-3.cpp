#include <iostream>
using namespace std;

int a, b;

int interval( int n, int &a, int &b ) {

    int fact=1;

    for( int i=1; i<=n; i++ ) {
        fact*= i;
    }

    a = fact/(n-1);
    b = fact*(n+1)-1;

}

int main() {

interval( 3, a, b );

cout << "a=" << a << endl;
cout << "b=" << b;

return 0;

}
