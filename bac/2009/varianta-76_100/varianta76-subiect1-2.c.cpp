#include <iostream>
using namespace std;

int main() {

int a, x=2, p=1, c;


cout << "a= ";
cin >> a;


while ( a>1 ) {

    c = 0;

    while ( a%x==0 ) {
        c = x;
        a/= x;
    }

    if ( c!=0 ) p*= c;

    x++;

}

cout << endl << "p= " << p;


return 0;

}
