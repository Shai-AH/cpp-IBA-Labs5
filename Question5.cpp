#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int ans;
    int num1 = (int) rand();
    int num2 = (int) rand();
    while (num1 >= 10){
        num1 = num1 / 10;
    }
    while (num2 >= 10){
        num2 = num2 / 10;
    }
    if (num1 <= num2){
        cout << num1 << " * " << num2 << endl;
        cin >> ans;
    }
    else{
        cout << num2 << " * " << num1 << endl;
        cin >> ans;
    }
    while(ans !=  -1){
        if (ans != (num1 * num2)){
            cout << "Wrong!" << endl;
            cout << num1 * num2 << endl;
        }
        num1 = (int) rand();
        num2 = (int) rand();
        while (num1 > 10){
            num1 = num1 / 10;
        }
        while (num2 > 10){
            num2 = num2 / 10;
        }
        if (num1 <= num2){
            cout << num1 << " * " << num2 << endl;
            cin >> ans;
        }
        else{
            cout << num2 << " * " << num1 << endl;
            cin >> ans;
        }
    }
}
