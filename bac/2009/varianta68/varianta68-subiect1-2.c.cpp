#include <iostream>
using namespace std;

int main() {

int x, nr=0, n;


cout << "x= ";
cin >> x;


for (int i=1; i<=x; i++) {

    cout << "n= "; cin >> n;

    if ( n%x==0 ) nr++;

}

cout << endl << "nr= " << nr;

return 0;

}
