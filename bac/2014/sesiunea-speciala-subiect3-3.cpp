#include <iostream>
using namespace std;

void perfect( long a, long b ) {

    for( long n=b; n>=a; n-- ) {

        long sd=0;

        for( long d=1; d<n; d++ ) {
            if( n%d==0 ) {
                sd+= d;
            }
        }

        if( sd==n ) {
            cout << n << " ";
        }

    }

}


int main() {

perfect(5, 30);

return 0;

}
