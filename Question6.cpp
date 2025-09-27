#include <iostream>
using namespace std;
int main(){
    int CSE1, CSE1L, CSE5, sum1=0, sum2=0, sum3=0;
    float avg1, avg2, avg3, avgT;
    for(int i = 0; i < 10; i++){
        cout << "Enter CSE-141 Marks: "<< endl;
        cin >> CSE1;
        cout << "Enter CSE-141Lab Marks: " << endl;
        cin >> CSE1L;
        cout << "Enter CSE-578 Marks: " << endl;
        cin >> CSE5;
        sum1 = sum1 + CSE1;
        sum2 = sum2 + CSE1L;
        sum3 = sum3 + CSE5;
    }
    avg1 = sum1 / 10;
    avg2 = sum2 / 10;
    avg3 = sum3 / 10;
    avgT = (sum1 + sum2 + sum3 ) / 30;
    cout << "Average of CSE-141 Marks: " << avg1 << endl;
    cout << "Average of CSE-141Lab Marks: " << avg2 << endl;
    cout << "Average of CSE-578 Marks: " << avg3 << endl;
}
