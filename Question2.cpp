#include <iostream>
using namespace std;
int main(){
    int n, count = 0, sum = 0;
    cout << "Enter Number of times to Output" << endl;
    cin >> n;
    while(n > 0){
        while(count < n){
            cout << "CSE141 Exam is in week 09" << endl;
            count = count + 1;
        }
        count = 0;
        sum = sum + n;
        cout << "Enter Number of times to Output" << endl;
        cin >> n;
    }
    cout << "Total Number of Times Outputs were: " << sum;
}
