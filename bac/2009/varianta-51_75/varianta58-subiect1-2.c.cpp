#include <iostream>
using namespace std;

int main() {

int n, q=1;

do {
	
    cout << "n= ";
    cin >> n;
    
}
while ( n<0 );

while ( n>0 ) {

    if ( n%5==0 ) q *= 10;
    else q = q*10+1;

    n /= 5;

}

cout << endl << "q= " << q;

return 0;

}
