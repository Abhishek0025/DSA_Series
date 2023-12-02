#include <iostream>
using namespace std;

void pattern11(int n11){
    int i,j;
    int start = 1;
    for(i=0;i<n11;i++){
        if (i%2 == 0) start = 1;
        else start = 0;
        for(j=0;j<=i;j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}