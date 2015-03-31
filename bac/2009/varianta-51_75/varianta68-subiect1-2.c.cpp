#include <iostream>
using namespace std;

int main() {

int x, nr=0, n;

do {
    cout << "x= ";
    cin >> x;
}
while ( x<=0 );

for (int i=1; i<=x; i++) {

    cout << "n= "; cin >> n;

    if ( n%x==0 ) nr++;

}

cout << endl << "nr= " << nr;

return 0;

}
