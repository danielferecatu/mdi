#include <iostream>
using namespace std;

int main() {

int n, m=0, c, v, u;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<=0 || n>10000 );

v = n;
u = n%10;

do {

    c = n%10;
    v = v*10 + c;

    if ( c==u ) m++;

    n/=10;

}
while ( n!=0 );

cout << endl << v << m;

return 0;

}
