#include <iostream>
using namespace std;

int main() {

int a, b, nr=0;

a=20;
b=35;

int i=a;
do {
    int x = i;
    
    while( x>9 && 1+x%10==x/10%10 ) {
        x/= 10;
    }

    if( x<10 ) {
        nr++;
    }

    i++;
}
while( i<b );

cout << "nr= " << nr;

return 0;

}
