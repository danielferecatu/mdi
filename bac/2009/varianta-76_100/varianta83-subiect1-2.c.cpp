#include <iostream>
using namespace std;

int main() {

int x, aux, ok1=1;

do {
    cout << "x= ";
    cin >> x;
}
while ( x<=1 );

aux = x;

while ( x>=10 ) {

    if ( x%10 > x/10%10 ) ok1 = 0;

    x/= 10;

}

if ( ok1==1 ) cout << endl << "aux= " << aux;
else cout << endl << "nu";


return 0;

}
