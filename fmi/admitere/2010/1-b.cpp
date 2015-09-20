#include <iostream>
using namespace std;

// complexitate timp = O(0)
bool este_in_H( int a ) {

	if( a%2==0 || a%3==0 || a%5==0 ) {
		return true;
	}
	return false;

}

int main() {

// variabile
int n, i=0, nr=1;

// citire date
cout << "n= ";
cin >> n;

// generam n numere din H si le contorizam
// folosind variabila i
while( i<n ) {

    // tratam cazul x=y=z=0
    if( nr==1 ) {
        cout << nr << " ";
        i++;
    }
    // afisam doar numerele care sunt in H
    else if( este_in_H(nr) ) {
        cout << nr << " ";
        i++;
    }

    nr++;

}

return 0;

}
