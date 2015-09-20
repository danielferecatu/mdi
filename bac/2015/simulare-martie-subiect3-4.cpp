#include <iostream>
#include <fstream>
using namespace std;

ifstream simulare("simulare-martie.txt");

int main() {

int n, x, y, v[10000], m=0;

simulare >> n;

for( int i=0; i<n; i++ ) {
    simulare >> v[i];
}

simulare >> x >> y;

for( int i=n-1; i>0; i-- ) {
    if( v[i]<y && v[i]>x && v[i]>m ) {
        m = v[i];
    }
}

if( m ) {
    cout << m;
}
else {
    cout << "nu exista";
}

simulare.close();

return 0;

}
