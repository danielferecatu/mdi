#include <iostream>
using namespace std;

int main() {

int n, k, p=1, nr=0;

do {

    cout << "n= ";
    cin >> n;

    cout << "k= ";
    cin >> k;

}
while ( n<=0 && k<=0 );

while ( n!=0 && k!=0 ) {

    if ( n%2==0 ) {

        nr += n/10%10*p;
        p *= 10;

    }
    else {

        k--;

    }

    n /= 10;

}

cout << endl << "nr=" << nr;

return 0;

}
