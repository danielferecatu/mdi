#include <iostream>
#include <string.h>
using namespace std;

int main() {

char t[101], a[101];
int ti=0, ai=0;

cout << "Dati textul: ";
cin.getline(t, 100);

if( t[ti]>='A' && t[ti]<='Z' ) {
    a[ai] = t[ti];
    ai++;
    ti++;
}

for( int i=ti; i<=strlen(t); i++ ) {
    if( t[i]>='A' && t[i]<='Z' && t[i-1]==' ' ) {
        a[ai] = t[i];
        ai++;
    }
}

for (int i=0; i<strlen(a); i++ ) {
    if( a[i]>='A' && a[i]<='Z' ) {
        cout << a[i];
    }
}

return 0;

}
