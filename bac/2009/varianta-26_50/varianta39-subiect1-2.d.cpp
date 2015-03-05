#include <iostream>
using namespace std;

int main() {

int n, nr=0, p=1, c;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<0 );

while ( n!=0 ) {

    c = n%10;

    if ( c>0 && c<9 )  c++;

    nr += c*p;
    p *= 10;
    n /= 10;

}

cout << endl << "nr=" << nr;

return 0;

}
