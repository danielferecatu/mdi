#include <iostream>
using namespace std;

int main() {

int n, t, r=0;


cout << "n= ";
cin >> n;


t = n;

while ( t>0 ) {

    if ( (t%10)%2==1 ) r = r*10 + 1;
    else r = r*10 + t%10;

    t/= 10;

}

n=0;

while ( r>0 ) {

    n = n*10 + r%10;
    r/= 10;

}

cout << endl << "n= " << n;


return 0;

}
