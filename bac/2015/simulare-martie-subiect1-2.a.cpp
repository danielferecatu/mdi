#include <iostream>
using namespace std;

int main() {

int n, k, p, m;

n = 17;
k = 4;

while ( n>=1 ) {

    p=0;
    m=n;

    while ( m%k==0 ) {
        p++;
        m /= k;
    }

    if ( m==1 ) cout << n << " " << p << " ";

    n--;

}

return 0;

}
