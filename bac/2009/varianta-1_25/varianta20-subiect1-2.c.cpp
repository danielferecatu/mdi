#include <iostream>
using namespace std;

int main() {

int n, a, m, b;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<0 );

a = n%10;
m = a;

while ( n>9 ) {

    n /= 10;
    b = n%10;

    if ( a>b ) {

        m = m*10+b;
        a = b;

    }

}

cout << endl << "m=" << m;

return 0;

}
