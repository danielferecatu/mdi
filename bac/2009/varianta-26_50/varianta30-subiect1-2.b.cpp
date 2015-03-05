#include <iostream>
using namespace std;

int main() {

int n, m=0, p=1, c;

do {

  cout << "n= ";
  cin >> n;

}
while ( n<0 );

while ( n>0 ) {

   c = n%10;

   if ( c>0 ) c--;

   m += c*p;
   p *= 10;
   n /= 10;

}

cout << endl << "m=" << m;

return 0;

}
