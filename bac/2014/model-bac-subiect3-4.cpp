#include <fstream>
#include <iostream>
using namespace std;

ifstream f("bac.txt");

int main() {

int n, min1=10000, min2=10000, x;

f >> n;

for (int i=1; i<=n/2; i++) {

    f >> x;

    if( x<min1 ) {
        min2 = min1;
        min1 = x;
    }
    else if( x<min2 && x!=min1 )
        min2 = x;
}

f >> x;

if( min1!=10000 && min1>x ) cout << min1;
else if( min2!=10000 && min2>x ) cout << min2;
else cout << "Nu exista";

f.close();

return 0;

}
