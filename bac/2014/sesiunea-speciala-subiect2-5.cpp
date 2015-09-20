#include <iostream>
#include <string.h>
using namespace std;

int main() {

char s[101], t[101];

cout<<"Dati textul: ";
cin.getline(s, 100);

int lcuv = 0;

for( int i=0; i<strlen(s); i++ ) {

    if( s[i]==' ' ) {
        if( lcuv>=3 && lcuv%2 ) {
            s[i-lcuv/2-1] = '%';
        }

        lcuv = 0;
    }
    else {
        lcuv++;
    }

}


if( lcuv>=3 && lcuv%2 ) {
    s[strlen(s) - lcuv/2-1] = '%';
}

int p = 0;
for( int i=0; i<strlen(s); i++ ) {

    if( s[i]=='%' ) {
        p++;
    }
    else {
        t[i-p] = s[i];
    }

}

t[strlen(s)-p] = 0;

if( strcmp(s,t)!=0 ) {
    cout << t << endl;
}
else {
    cout << "Nu exista" << endl;
}

return 0;

}
