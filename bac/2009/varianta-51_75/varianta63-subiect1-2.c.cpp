#include <iostream>
using namespace std;

int main() {

int n, d, b=0, v=0, x;

do {
    cout << "n= ";
    cin >> n;

    cout << "d= ";
    cin >> d;

}
while ( n<=0 || d<=0 );

for (int i=1; i<=n; i++) {

    do {
        cout << "x= ";
        cin >> x;
    }
    while ( x<=0 );

    int a=0;
    int aux = x;

    while ( x%d==0 ) {

        a++;
        x/=d;

    }

    if ( a>b ) {

        b = a;
        v = aux;

    }

}

cout << endl << v << " " << b;

return 0;

}
