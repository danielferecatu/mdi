#include <iostream>
using namespace std;

int main() {

int n, nr=0, y=0;
float x;

do {

    cout << "n= "; cin >> n;

}
while ( n<=0 );

for (int i=1; i<=n; i++) {

    do {

        cout << "x= "; cin >> x;
        nr++;

    }
    while ( x<1 ||  x>10 );

}

cout << endl << "y/n= " << y/n;
cout << endl << "nr= " << nr;

return 0;

}
