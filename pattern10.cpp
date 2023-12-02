#include <iostream>
using namespace std;

void pattern10(int n10){
    int i,k;
    for(i=1;i<=2*n10-1;i++){
        int stars = i;
        if (i>n10) stars = 2*n10 - i;
        for (k = 1; k <= stars; k++) {
            cout << "*";
        }
        cout << endl;
    }
}