#include <iostream>
#include<string>
using namespace std;
void print_message();
void pattern(int n1);
void pattern2(int n2);
void pattern10(int n10);
void pattern11(int n11);
void pattern12(int n12);

int main() {
    int n1, n2, n10, n11, n12;
//    cout << "Hello, World!" << std::endl;
//    string str_name;
//    cout << "Please give your name: ";
//    getline(cin, str_name);
//    cout << "Name:" << str_name << endl;
//    print_message();
//    cout << endl;
//
//    cout << "Let's print one pattern using loops: ";
//    cin >> n1;
//    pattern(n1);
//    cout << endl;
//
//    cout << "Let's print one more pattern using loops: ";
//    cin >> n2;
//    pattern2(n2);
//    cout << endl;
//
//    cout << "Let's print 10th pattern which has symmetry :";
//    cin >> n10;
//    pattern10(n10);
//    cout << endl;
//
//    cout << "Let's print 11th pattern:";
//    cin >> n11;
//    pattern11(n11);
//    cout << endl;

    cout << "Let's print 12th pattern:";
    cin >> n12;
    pattern12(n12);
    cout << endl;
    return 0;
}
