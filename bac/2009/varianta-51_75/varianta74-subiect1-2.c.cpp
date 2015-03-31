#include <iostream>
using namespace std;

int main() {

int a, b, c=0, p=0;

do {

    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;

}
while ( a<=0 || b<=0 );

while ( a+b>0 ) {

    if ( a%10==b%10 && a%2==0 ) c = c*10 + b%10;
    else p = p*10 + a%10;

    a/= 10;
    b/= 10;

}

cout << endl << "c=" << c;
cout << endl << "p=" << p;

return 0;

}
