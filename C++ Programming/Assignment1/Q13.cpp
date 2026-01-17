#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, remain;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remain = num % 10;           
        rev = rev * 10 + remain;  
        num /= 10;                     
    }

    cout << "Reversed Number: " << rev << endl;
    return 0;
}   