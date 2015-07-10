#include <iostream>
using namespace std;

int main() {

// variabile
int n, t=0, c=0;

// citire date
cout << "n= ";
cin >> n;

// calculam termenul n
while( n>t ) {

    t++;
    n-= t;

}

// tratarea cazului in care termenul
// se afla in secventa ramasa
if( n ) t++;

// afisare
cout << t;

return 0;

}
