#include <iostream>
using namespace std;

void pattern(int n1){
    int i,j;
    for(i=0; i<n1; i++){
        for(j=0;j<n1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n2){
    int i,j;
    for(i=0;i<n2;i++){
        for(j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}


