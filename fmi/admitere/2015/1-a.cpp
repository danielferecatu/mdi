#include <iostream>
using namespace std;

// variabile globale
int a, b, c, n, s[1000];

// verifica daca este pereche
bool pereche( int x, int y ) {

    if( a*x*x + b*y*y == c ) {
        return 1;
    }
    else {
        return 0;
    }

}

int main() {

// citire date
cout << "a= "; cin >> a;
cout << "b= "; cin >> b;
cout << "c= "; cin >> c;
cout << "n= "; cin >> n;
for( int i=0; i<n; i++ ) {
    cout << "s[" << i << "]= ";
    cin >> s[i];
}

// procesare date si afisare
for( int i=0; i<n; i++ ) {
    for( int j=0; j<n; j++ ) {
        if( pereche( s[i], s[j] ) ) {
            cout << "(" << s[i] << "," << s[j] << ")" << endl;
        }
    }
}

return 0;

}
