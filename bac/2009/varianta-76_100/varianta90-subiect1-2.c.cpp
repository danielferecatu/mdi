#include <iostream>
using namespace std;

int main() {

int a, b, c, k, t, p=0;

do {

    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

}
while ( a<0 || b<0 || c<0 );

t = a;

while ( t<=b ) {

    if ( k==t%10 ) {
        cout << t;
        p = 1;
    }

    t++;

}

if ( p==0 ) cout << "-1";

return 0;

}
