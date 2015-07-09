#include <iostream>
using namespace std;

void rotatie(int a[], int n) {

    int t;
    t = a[n-1];

    for (int i=n-1; i>0; i--) {
        a[i] = a[i-1];
    }

    a[0] = t;

}

int main() {

// variabile
int v[100], n, k;

// citire date
cout << "n= ";
cin >> n;
for (int i=0; i<n; i++) {
    cout << "v[" << i << "]= ";
    cin >> v[i];
}
cout << "k= ";
cin >> k;

// rotim de k ori spre dreapta
for (int i=0; i<k; i++) {

    rotatie(v, n);

}

// afisare rezultat
for (int i=0; i<n; i++) {
    cout << v[i] << " ";
}

return 0;

}
