#include <iostream>
using namespace std;

int main() {

int n, m, s=0;

do {

    cout << "n= "; cin >> n;
    cout << "m= "; cin >> m;

}
while ( n<0 || m<0 || n>m );

while ( n<m ) {

    s+= n;
    n+= 3;

}

if ( n==m ) cout << endl << "s+n= " << s+n;
else cout << endl << "0";

return 0;

}
