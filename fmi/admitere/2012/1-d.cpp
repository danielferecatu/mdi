#include <iostream>
using namespace std;

int main() {

// variabile
int n, t=0, y[100]={0};
bool ok=true;

// citire date
cout << "n= ";
cin >> n;

for( int i=1; i<=n; i++ ) {

    cout << "y" << i << " = ";
    cin >> t;

    y[t]++;

}

// stabilirea rezultatului
t=1;
for( int i=1; i<=t; i++ ) {

    cout << y[i] << " ";

    if( y[i]!=i ) {
        ok = false;
        break;
    }

    if( y[i+1] ) {
        t++;
    }

}

cout << endl;

// afisare
if( ok ) {
    cout << "DA";
}
else {
    cout << "NU";
}

return 0;

}
