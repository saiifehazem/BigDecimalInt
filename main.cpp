#include <bits/stdc++.h>
#include "BigDecimalInt.h"
#include "BigDecimalInt.cpp"

using namespace std;

int main() {
    cout << "Welcome to big decimal integer class. " << endl;
    cout << "Enter a big decimal integer: " << endl;
    string num1,num2;
    cin >> num1 ;
    BigDecimalInt b1(num1);
    cout << "Enter 1 for addition, 2 for subtraction, 3 for comparison, 4 Number Sign, 5 Number Size:" << endl;
    int choice;
    cin >> choice;
    if (choice == 1) {
        cout <<"Enter second number:" <<endl;
        cin >> num2;
        BigDecimalInt b2(num2);
        cout << b1 + b2 << endl;}
    else if (choice == 2) { cout <<"Enter second number:" <<endl;
        cin >> num2;
        BigDecimalInt b2(num2);
        cout << b1 - b2 << endl;}
    else if (choice == 3) {
        cout <<"Enter second number:" <<endl;
        cin >> num2;
        BigDecimalInt b2(num2);
        cout << "Enter your comparison way 1-Greater than check 2-Less than check 3-Equal check: " << endl;
        int choice2;
        cin >> choice2;
        if (choice2 == 1) {
            if (b1 > b2) cout << "True" << endl;
            else cout << "False" << endl;
        } else if (choice2 == 2) {
            if (b1 < b2) cout << "True" << endl;
            else cout << "False" << endl;
        } else if (choice == 3) {
            if (b1 == b2) cout << "True" << endl;
            else cout << "False" << endl;
        }
    }
    else if (choice == 4) {
        if (b1.sign() == 1) cout <<"positive number!" <<endl;
        else cout <<"negative number!" <<endl;
    }
    else if (choice ==5) {
        cout <<"Size of entered number is : " << b1.size();
    }
}
