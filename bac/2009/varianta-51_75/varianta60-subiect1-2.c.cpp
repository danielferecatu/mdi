#include <iostream>
using namespace std;

int main() {

int n, c=10;

do {
	
    cout << "n= ";
    cin >> n;
    
}
while ( n<0 );

while ( n%2==1 ) {

    c = n%10;
    n /= 10;

}

cout << endl << "c= " << c;

return 0;

}
