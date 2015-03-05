#include <iostream>
using namespace std;

int main() {

int a, b, c;

do {

     cout << "a= ";
     cin >> a;
     
     cout << "b= ";
     cin >> b;
     
     cout << "c= ";
     cin >> c;

}
while ( a<=0 || b<=0 || c<=0 );

if ( a>b ) {

    int t;

    t = a;
    a = b;
    b = t;

}

while ( a<=b ) {

    if ( a%c==0 ) cout << a;

    a++;

}

return 0;

}
