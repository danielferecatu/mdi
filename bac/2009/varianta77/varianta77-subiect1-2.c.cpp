#include <iostream>
using namespace std;

int main() {

int a, k=0, b;


cout << "a= ";
cin >> a;


while ( a!=0 ) {

    do {
        cout << "b= ";
        cin >> b;
    }
    while ( b<0 );

    if ( a<b ) k++;

    a = b;

}

cout << endl << "k=" << k;

return 0;

}
