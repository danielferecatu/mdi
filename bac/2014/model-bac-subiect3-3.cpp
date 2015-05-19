#include <iostream>
using namespace std;

int divizor(int n) {

int d=2;

for (int i=d; i<=n; i++) {

    if ( n%i==0 && i%d==1 ) d=i;

}

return d;


}

int main() {

cout << "divizor(50)= " << divizor(50) << endl;
cout << "divizor(11)= " << divizor(11);

return 0;

}
