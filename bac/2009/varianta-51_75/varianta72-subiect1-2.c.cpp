#include <iostream>
using namespace std;

int main() {

int n, b, j;

do {

    cout << "n= ";
    cin >> n;
    cout << endl;

}
while ( n<=0 );

for (int i=1; i<=2*n-1; i++) {

    b = 0;

    if ( n-i<0 ) j = i-n;
    else j = n-i;

    while ( j>=0 ) {

        cout << "*";
        j--;
        b=1;

    }

    if ( b!=0 ) cout << endl;

}

return 0;

}
