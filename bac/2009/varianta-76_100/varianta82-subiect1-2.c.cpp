#include <iostream>
using namespace std;

int main() {

int m, n, x, aux, ok;

do {
    cout << "m= ";
    cin >> m;
}
while ( m<0 && m>=10 );

do {
    cout << "n= ";
    cin >> n;
}
while ( n<=1 );

for (int i=1; i<=n; i++) {

    do {
        cout << endl << "x= ";
        cin >> x;
    }
    while ( x<0 );

    aux = x;
    ok = 0;

    while ( x>0 ) {

        if ( x%10 ==m ) ok = 1;

        x/= 10;

    }

    if ( ok==1 ) cout << endl << "--> aux= " << aux;


}

return 0;

}
