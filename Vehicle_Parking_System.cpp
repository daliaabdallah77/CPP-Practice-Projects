#include<iostream>
using namespace std;

int main(){

    int user_input;
    int amount = 0;
    int count = 0;

    while (true) 

    {
        cout << '\n';
        cout<<"******VEHICLE PARKING MANAGEMENT SYSTEM********";

        cout<<'\n';

        cout<<"ENTER THE NUMBER ACCORDINGLY TO PARK THE LISTED VEHICLE";
        cout<<'\n';

        cout<<"PRESS 1: For AutoRickshow\n";
        cout<<"PRESS 2: For Car\n";
        cout<<"PRESS 3: Bus\n";
        cout<<"PRESS 4: To SHOW Record\n";
        cout<<"PRESS 5: To DELETE Record\n";
        cin>>user_input;

        if (user_input == 1)
        {
            count++;
            amount = amount + 100;
        }
        else if(user_input == 2){
            count++;
            amount = amount + 200;
        }
        else if(user_input == 3){
            count++;
            amount = amount + 300;
        }
        else if(user_input == 4){
            cout<<"TOTAL COST: " <<amount<<'\n';
            cout<<"TOTAL NUMBER OF VEHICLES PARKED: " <<count<<'\n';
        }
        else if(user_input == 5){
            amount = 0;
            count = 0;
        }
        else{
            cout<<"ENTER A VALID NUMBER FROM 1-5: ";
            cin>>user_input;
        }
    }
   
    return 0;
}