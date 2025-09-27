#include <iostream>
using namespace std;
int main (){
    int opt, seats = 500, tck, stck, jtck;
    float inc;
    cout << "1. Purchase Ticket" << endl;
    cout << "2. Display Information" << endl;
    cout << "3. Exit" << endl;
    cin >> opt;
    while(opt != 3){
        if(opt == 1){
            cout << "How many tickets do you like to Buy?" << endl;
            cin >> tck;
            while(tck > seats){
                cout << "Sorry, the available seats are: " << seats << endl;
                cin >> tck;
            }
            cout << "How many for Sopho?" << endl;
            cin >> stck;
            cout << "How many for Junior?" << endl;
            cin >> jtck;
            while ((stck + jtck) != tck){
                cout << "How many for Sopho? The Total does'nt match" << endl;
                cin >> stck;
                cout << "How many for Junior? The Total does'nt match" << endl;
                cin >> jtck;
            }
            seats = seats - tck;
            if (tck > 3){
                inc = inc + (0.80 *((stck * 100) + (jtck * 50))); 
            }
            else{
                inc = inc + ((stck * 100) + (jtck * 50));
            }
            tck = 0;
            stck = 0;
            jtck = 0;
        }
        else if(opt == 2){
            cout << "Free Seats: " << seats << endl;
            cout << "Income Generated: " << inc << endl;
        }
        cout << "1. Purchase Ticket" << endl;
        cout << "2. Display Information" << endl;
        cout << "3. Exit" << endl;
        cin >> opt;
    }
}
