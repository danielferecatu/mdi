#include <iostream>
using namespace std;

int Fibo(int n) {

    if( n==1 || n==2 ) {
        return 1;
    }
    else {
        int i=2, t=3, tp=2;
        while( i<=n ){

            if( t%2==1 ) {
                i++;
            }
            if( i==n ) {
                return t;
            }

            int temp = t;
            t += tp;
            tp = temp;

        }
    }

}


int main() {

cout<<Fibo(6);

return 0;

}
