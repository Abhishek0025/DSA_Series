#include <iostream>
using namespace std;

void pattern12(int n12){
    int i,j;
    int space = 2*n12 - 2;
    for(i=1;i<=n12;i++){
        //numbers
        for(j=1;j<=i;j++){
            cout << j;
        }

        //spaces
        for(j=1;j<=space;j++){
            cout << " ";
        }

        //numbers
        for(j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
}