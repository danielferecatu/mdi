#include <iostream>
using namespace std;

// variabile globale
const int nmax=100;
int v[nmax], a[nmax], sol[nmax], opt[nmax], minim;
int n;

// s = suma inca disponibila
// nr = cate elemente are submultimea curenta
void bk(int k, int s, int nr) {

    if( k>n ) {

        if( s==0 ) {

            if( nr<minim ) {

                minim = nr;
                for (int i=0; i<n; i++)
                    opt[i] = sol[i];

            }

        }

    }
    else {

        sol[k] = 0;
        bk(k+1, s, nr);

        if( s>=a[k] ) {
            sol[k] = 1;
            bk(k+1, s-a[k], nr+1);
        }

    }

}

int main() {

// variabile
int s;

// citire date
cout << "n= ";
cin >> n;

for (int i=0; i<n; i++) {
    cout << "a[" << i << "]= ";
    cin >> a[i];
}

cout << "s= ";
cin >> s;

// generam toate submultimile prin backtracking
// si o alegem pe cea mai buna
minim = n+1;
bk(1, s, 0);

// afisare rezultat
if( minim<=n ) {
    for (int i=0; i<n; i++)
        if( opt[i] ) cout << a[i] << " ";
    cout << endl;
}
else {
    cout << "nu exista solutii" << endl;
}

return 0;

}
