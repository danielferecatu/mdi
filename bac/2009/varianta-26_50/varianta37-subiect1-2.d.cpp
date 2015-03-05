#include <iostream>
using namespace std;

int main() {

int n, k, nr=0, p=1, c;

do {

    cout << "n= ";
    cin >> n;
    
    cout << "k= ";
    cin >> k;

}
while ( n<0 || k>9 );

while ( n!=0 ) {

    c = n%10;
    nr += c*p;
    p *= 10;

    if ( c==k ) {

        nr += c*p;
        p *= 10;

    }

    n /= 10;

}

n = nr;

cout << endl << "n=" << n;

return 0;

}
