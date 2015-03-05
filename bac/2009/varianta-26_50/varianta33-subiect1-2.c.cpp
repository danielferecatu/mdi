#include <iostream>
using namespace std;

int main() {

int a, n, j=3;

do {

    cout << "a= ";
    cin >> a;

    cout << "n= ";
    cin >> n;

}
while ( a<0 || n<0 );

for ( int i=1; i<=n; i++ ) {

    if ( i%2==0 ) a -= j;
    else a += j;

    j = 7-j;

}

cout << endl << "a=" << a;

return 0;

}
