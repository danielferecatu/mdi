#include <iostream>
using namespace std;

int main() {

int a, b, c=0, d=0, p=1;

cout << "a= ";
 cin >> a;
 
 cout << "b= ";
 cin >> b;


while ( a+b+c>0 ) {

    c = a%10 + b%10 +c;
    d += (c%10)*p;
    p *= 10;

    a /=10;
    b /=10;
    c /=10;

}

cout << endl << "d=" << d;

return 0;

}
