#include <iostream>
using namespace std;

int main() {

int n;


cout << "n= ";
cin >> n;


for ( int i=1; i<n; i++) {

    if ( i%2==0 ) {

        cout << "#";

    }

    for ( int j=i+1; j<=n; j++) {

        cout << "*";

    }

}

return 0;

}
