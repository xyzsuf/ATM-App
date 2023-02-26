/* ATM Application in C++ */

#include<iostream>
using namespace std;

// Menu

void Menu() {
    cout << "--------------MENU------------------" << endl;
    cout << "Welcome to the XYZ Bank ATM Machine" << endl;
    cout << "1. Check Balance " << endl;
    cout << "2. Deposit " << endl;
    cout << "3. Withdraw " << endl;
    cout << "4. Exit " << endl;
    cout << "------------------------------------" << endl;
    }


int main() {

    int choose_option;
    double balance = 500;

do {
    Menu();

    cout << "Please choose an option" << endl;
    cin >> choose_option;
    system("clear");

    switch(choose_option) {
        case 1: cout << "Balance is: " << "Rs. " << balance << endl;
            break;

        case 2: cout << "Deposit Amount: ";
            double dep_amount;
            cin >> dep_amount;
            balance += dep_amount;
            break;

        case 3: double withdraw_amount;
            cin >> withdraw_amount;
        if (withdraw_amount <= balance)
            balance -= withdraw_amount;
        else
            cout << "Not enough funds in your account" << endl;
        break;
    }
} while (choose_option !=4);
}
