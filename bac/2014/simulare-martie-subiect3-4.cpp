#include <fstream>
#include <iostream>
using namespace std;

ifstream f("simulare-bac.txt");

int main() {

int x, y, z, gata=0;

f >> x >> y;

while( !gata && f>>z ) {

    if ( x>=z ){
        cout << x << " ";
        x = y;
        y = z;
    }
    else gata=1;

}

if ( gata ) {
    cout << z <<" ";
    while(f>>z) cout << z << " ";
}

return 0;

}
