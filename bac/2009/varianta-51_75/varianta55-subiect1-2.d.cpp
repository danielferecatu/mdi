#include <iostream>
using namespace std;

int main() {

int n, a, b, k=0;


cout << "n= ";
cin >> n;

cout << "a= ";
cin >> a;


for ( int i=2; i<=n; i++ ) {

    do {
    	
        cout << "b= ";
        cin >> b;
        
    }
    while ( b<0 );

    if ( a%10==b%10 ) k++;
    else k--;

    a = b;

}


cout << endl << "k= " << k;

return 0;

}
