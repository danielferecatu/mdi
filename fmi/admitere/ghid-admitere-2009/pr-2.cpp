#include <iostream>
using namespace std;

int main() {

// variabile
// tinem in n indicele curent
int x, n=0;

// citire date
cout << "x= ";
cin >> x;


// calculam urmatorul termen al sirului
// si ne oprim cand este egal cu 1
while( x!=1 ) {

    n++;
    if( x%2==0 ) x/= 2;
    else x=3*x+1;

}

// afisare rezultat
cout << n;

return 0;

}
