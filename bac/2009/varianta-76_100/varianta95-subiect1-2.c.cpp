#include <iostream>
using namespace std;

int main() {

int x=0, n, k;

do {

    cout << "n= "; cin >> n;
    cout << "k= "; cin >> k;

}
while ( n<=0 || k<=0 );

while ( n!=0 ) {

    if ( n%10<k ) x = x*10 + n%10;

    n/= 10;

}

cout << endl << "x= " << x;

return 0;

}
