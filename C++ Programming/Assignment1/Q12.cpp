#include <iostream>
using namespace std;

int main() {
    int number, digitSum = 0;
    cout << "Enter a number: ";
    cin >> number;

    for (digitSum = 0; number > 0; number /= 10) {
        digitSum += number % 10;
    }

    cout << "Sum of digits: " << digitSum << endl;
    return 0;
}   