#include <iostream>
using namespace std;

int main() {

int n, m;

do {

    cout << "n= ";
    cin >> n;
    
    cout << "m= ";
    cin >> m;

}
while ( n<0 || m<0 );

while ( n<=m ) {

    n++;
    m--;

}

while ( m<n ) {

    m++;
    n--;

}

cout << endl << "n=" << n;

return 0;

}
