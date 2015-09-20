#include <iostream>
using namespace std;

int main() {

int a, b, c=0, i, j;


cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;


do {

    i = a%2;
    j = b%2;

    if ( i+j==0 ) c++;

    a = a*i + (1-i)*a/2;
    b = b*j + (1-j)*b/2;

}
while ( i*j==1 );

cout << endl << "c=" << c;

return 0;

}
