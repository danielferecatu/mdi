#include <iostream>
using namespace std;

int main() {

int n, s=0, c, p;

do {
	
    cout << "n= ";
    cin >> n;
    
}
while ( n<=0 );

while ( n>0 ) {

    c = n%10;

    if ( c%2==0) {

        p = 1;

        for ( int i=2; i<=c; i++) p *= i;

        s += p;

    }

    n /= 10;

}

cout << endl << "s= " << s;

return 0;

}
