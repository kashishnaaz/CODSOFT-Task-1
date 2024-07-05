#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int i;
    do
    {
        cout << "\n___________________ WELCOME TO MY SIMPLE CALCULATOR ____________________\n" << endl;
        int x, y;
        int op;
        cout << "Enter first number : ";
        cin >> x;
        cout << "Enter second number : ";
        cin >> y;
        cout << "\n___________________________________________________________________________\n" << endl;
        cout << "Press 1 for Addition (+) >>>" << endl;
        cout << "Press 2 for Subtraction (-) >>>" << endl;
        cout << "Press 3 for Multiplication (*) >>>" << endl;
        cout << "Press 4 for Division-Quotient (/) >>>" << endl;
        cout << "Press 5 for D-Remainder (%) >>>" << endl;
        cout << "Press 6 for Power (^) >>>" << endl;
        cout << "\nSelect any Operation : ";
        cin >> op;
        cout << "\nYour Answer is : ";

        switch (op)
        {
        case 1:
            cout << (x + y) << endl;
            break;
        case 2:
            cout << (x - y) << endl;
            break;
        case 3:
            cout << (x * y) << endl;
            break;
        case 4:
            cout << (x / y) << endl;
            break;
        case 5:
            cout << (x % y) << endl;
            break;
        case 6:
            cout << pow(x, y) << endl;
            break;
        default:
            cout << "invalid operation...! Please Try Again...\n";
            break;
        }
        cout << "\n-----------------------------------------------------------------------------\n" << endl;
        cout << "Press 1 to Continue >>>" << endl;
        cout << "Press 0 to exit >>>" << endl;
        cout << "\nDo You want to Continue? (1/0) : ";
        cin >> i;
    }
    while (i);

    cout << "\nThank You for using this Calculator...!\n";

    return 0;
}