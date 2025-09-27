#include <iostream>
using namespace std;
int main (){
    int n1, n2;
    cout << "Enter 1st Number please: " << endl;
    cin >> n1; //LSR
    cout << "Enter 2nd Number please: " << endl;
    cin >> n2; //Doubler
    n1 = (n1 >> 2);
    n2 = n2 * n2;
    while(n1 != n2 && n1 > 0){
        cout << "1st Number: " << n1 << endl;
        cout << "2nd Number: " << n2 << endl;
        n1 = (n1 >> 2);
        n2 = n2 * n2;
    }
    cout << "1st Number: " << n1 << endl;
    cout << "2nd Number: " << n2 << endl;
}
