#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

int v[100]={0}, x, m=0, i=0;

cout << "Dati numerele: " << endl;

do {
    cout << "v[" << i << "]= ";
    cin >> v[i];

    m++;
    i++;
}
while( v[i]>=0 );

for(int i=0; i<m; i++ ) {
  cout << v[i] << " ";
}

cout << endl;

for( int i=m-1; i>0; i-- ) {
  cout << v[i] << " ";
}

return 0;

}
