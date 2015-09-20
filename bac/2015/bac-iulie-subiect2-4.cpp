#include <iostream>
#include <string.h>
using namespace std;

int main() {

char a[20]="", b[20]="aurari";

for( int i=0; i<strlen(b)/2; i++ ) {
    a[i]=b[i];
}

cout << a;

return 0;

}
