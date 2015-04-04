#include <iostream>
using namespace std;

int main() {

int a, b;

do {

    cout << "a= ";
    cin >> a;

}
while ( a<0 );

do {

    b = 0;

    while ( a!=0 ) {

        b+= a%10;
        a/= 10;

    }

    a = b;

}
while ( a>=10 );

cout << endl << "b= " << b;

return 0;

}
