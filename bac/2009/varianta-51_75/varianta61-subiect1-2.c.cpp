#include <iostream>
using namespace std;

int main() {

int a, b, n=0, x, y;

do {

    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

}
while ( a<0 || b<0 );

while ( a!=b ) {

    x = a%10;
    y = b%10;

    if ( x<y ) n = n*10+x;
    else       n = n*10+y;

    a/=10;
    b/=10;

}

cout << endl << "n=" << n << endl;

return 0;

}
