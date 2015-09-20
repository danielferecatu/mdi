#include <iostream>
using namespace std;

int triplete( int n ) {

    int x=0, y=1, z=n;

    for( int i=x; i<=n; i++ ) {
        for( int j=i; j<=n; j++ ) {
            for( int k=j; k<=n; k++ ) {
                if (i*j+j*k==n) cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
            }
        }
    }

}

int main() {

triplete( 160 );

return 0;

}
