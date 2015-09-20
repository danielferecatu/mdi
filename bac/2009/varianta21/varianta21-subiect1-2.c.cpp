#include <iostream>
using namespace std;

int main() {

int a, b, n;


cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;

cout << "n= ";
cin >> n;


if ( b==0 ) {

    cout << "gresit";

}
else {

    cout << a/b;

    if ( n>0 && a%b!=0 ) {

        cout << ",";
        a %= b;
        int i = 0;

        do {

            cout << a*10/b;
            a = a*10/b;
            i++;

        }
        while ( i!=n || a!=0 );

    }

}

return 0;

}
