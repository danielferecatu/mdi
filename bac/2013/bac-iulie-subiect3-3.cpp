#include <iostream>
using namespace std;

void valuri (int n) {

	int o=1, e=n*2, v[e];

	for (int i=0; i<n*2; i++) {

		if (i%2==0) {
            v[i] = o;
               o+= 2;
		}
		else {
            v[i] = e;
               e-= 2;
		}

		cout << v[i] << " ";


	}


}

int main() {

valuri(4);

return 0;

}
