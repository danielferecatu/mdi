#include <iostream>
using namespace std;

int main() {

int a, n, j=3;


cout << "a= ";
cin >> a;

cout << "n= ";
cin >> n;


for ( int i=1; i<=n; i++ ) {

    if ( i%2==0 ) a -= j;
    else a += j;

    j = 7-j;

}

cout << endl << "a=" << a;

return 0;

}
