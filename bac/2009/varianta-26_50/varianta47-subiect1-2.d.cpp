#include <iostream>
using namespace std;

int main() {

int n, maxim=0;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<=0 );

do {

    n /= 10;

    if ( maxim<n%10 ) {

        maxim = n%10;

    }

}
while ( n!=0 );

cout << endl << "maxim=" << maxim;

return 0;

}
