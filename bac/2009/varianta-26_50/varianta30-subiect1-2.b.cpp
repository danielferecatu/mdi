#include <iostream>
using namespace std;

int main() {

    int n, m, p=1;

    do {

         cout << "n= "; cin >> n;

    }
    while ( n<0 );

    while ( n>0 ) {

       int c = n%10;

       if ( c>0 ) {

            c--;

       }

       m += c*p;
       p *= 10;
       n /= 10;

    }



    cout << endl << "m=" << m;

}
