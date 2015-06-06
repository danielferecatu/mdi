#include <iostream>
using namespace std;

int main() {

int n, d=2;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<=0 );

cout << endl;

while ( d<=n ) {

    int p=0;

    while ( n%d==0 ) {
        p++;
        n/= d;
    }

    if ( p%2==0 && p!=0 ) cout << d << " ";

    d++;

}

cout << n << endl;

return 0;

}
