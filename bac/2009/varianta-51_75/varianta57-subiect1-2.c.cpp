#include <iostream>
using namespace std;

int main() {

int n, q=1, i=1;

do {
	
    cout << "n= ";
    cin >> n;
    
}
while ( n<0 );

while ( i<n/i ) {

    if ( n%i==0 ) q++;

    i += 3;

}

cout << endl << "q= " << q;

return 0;

}
