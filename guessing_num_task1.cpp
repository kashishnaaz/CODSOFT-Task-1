#include <bits/stdc++.h>
#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int choices, digit_scope, true_value, predict_num, assume_total = 0;
    start:
    cout<<"_________________________________________________________________________"<<endl;
    cout<<"___________________ WELCOME TO NUMBER GUESSING GAME _____________________"<<endl;
    cout<<"__________________________________________________________________________"<<endl;
    cout<<"Choose one option from below -> "<<"\n"<<endl;
    cout<<"1.>>> To Play the Game >>>"<<endl;
    cout<<"2.>>> To See the last Game Score >>>"<<endl;
    cout<<"3.>>> To Exit from the Game >>>"<<endl;
    cout<<"\n"<<"Enter Your Option -> ";
    cin>>choices;
    switch(choices)
    {
        case 1:
            cout<<"\n"<<"Let's begin the Game..."<<"\n"<<endl;
            goto play;
            break;
        case 2:
            if(assume_total == 0)
            {
                cout<<"\n"<<"You haven't tried playing the game even once yet..."<<"\n"<<endl;
            }
            else if(assume_total == 1)
            {
                cout<<"\n"<<"In the previous Game, you emerged victorius in "<<assume_total<<"st Try...!"<<"\n"<<endl;
            }
            else
            {
                cout<<"\n"<<"In the previous Game, you emerged victorius in "<<assume_total<<" Tries..."<<"\n"<<endl;
            }
            goto start;
            break;
        case 3:
            cout<<"\n"<<"Thanks for Participating in  the Game...!"<<"\n"<<endl;
            exit(0);
            break;
        default:
            cout<<"\n"<<"Invalid selection... Please Try Again..."<<"\n"<<endl;
            goto start;
    }
    play:
    assume_total = 1;
    cout<<"____________________ NUMBER GUESSING GAME _________________"<<endl;
    cout<<"\n"<<"please specify the desired range for the numbers? : ";
    cin>>digit_scope;
    srand(time(0));
     true_value = rand() % (digit_scope+1);
    do
    {
        cout<<"\n"<<"Enter your guess number : ";
        cin>>predict_num;
        if(predict_num >  true_value)
        {
            assume_total += 1;
            cout<<"The number is lower than you guess...";
        }
        else if(predict_num <  true_value)
        {
            assume_total += 1;
            cout<<"The number is higher than you guess...";
        }
        else
        {
            cout<<"\n"<<"Great.! You guessed the correct number...!!!";
            if(assume_total == 1)
            {
                cout<<"\n"<<"You guessed the number in "<<assume_total<<"st Try.!!!"<<"\n"<<endl;
            }
            else
            {
                cout<<"\n"<<"You guessed the number in "<< assume_total <<" Tries...!"<<"\n"<<endl;
            }
            goto start;
        }
    }
    while(predict_num != true_value);
    

    return 0;
}