#include <iostream>
using namespace std;
int main() {
    int num;
    int countNegative = 0, countPositive = 0, countRange100to200 = 0;
    do {
        cout << "Enter an integer: ";
        cin >> num;
        if (num > 15 && num < 25) { //Loop will only break here
            break;
        }
        if (num % 2 != 0) {
            cout << "Square of " << num << " is " << num * num << endl;
        }
        if (num > 0) {
            countPositive++;
        } else if (num < 0) {
            countNegative++;
        }
        if (num >= 100 && num <= 200) {
            countRange100to200++;
        }
    } while (true);
    cout << "Total Positive Numbers: " << countPositive << endl;
    cout << "Total Negative Numbers: " << countNegative << endl;
    cout << "Numbers in range [100,200]: " << countRange100to200 << endl;
    return 0;
}
