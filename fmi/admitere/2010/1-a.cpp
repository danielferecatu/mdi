#include <iostream>
using namespace std;

// complexitate timp = O(0)
bool este_in_H(int a) {

	if( a%2==0 || a%3==0 || a%5==0 ) {
		return true;
	}
	return false;

}

int main() {

int n=9;

if( este_in_H(n) ) cout << n << " este in H";
else cout << n << " nu este in H";

return 0;

}
