#include <iostream>
using namespace std;

int main() {

int n, k, p, m;

do {

    cout << "n= ";
    cin >> n;

    cout << "k= ";
    cin >> k;

}
while ( n<=1 || k<=1 );

while ( n>=1 ) {

    p=0;
    m=n;

    if ( m%k==0 ) {

        do {
            p++;
            m /= k;
        }
        while ( m%k==0 );

    }

    if ( m==1 ) cout << n << " " << p << " ";

    n--;

}

return 0;

}
