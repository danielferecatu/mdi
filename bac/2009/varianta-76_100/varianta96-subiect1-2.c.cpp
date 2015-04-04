#include <iostream>
using namespace std;

int main() {

int n;

do {

    cout << "n= ";
    cin >> n;

}
while ( n<=0 );

for (int i=1; i<=n; i++)
    for (int j=1; i<=n; j++)
        for (int k=1; k<=n; k++)
            if ( i<j<k )
                if ( i+j+k==n )
                    cout << i << " " << j << " " << k << endl;

return 0;

}
