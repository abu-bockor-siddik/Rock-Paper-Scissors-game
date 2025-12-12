#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int random_function(int max,int min) {

    srand(time(NULL));
    int r = (rand( ) % (max - min + 1)) + min;
    return r;
}

void run_the_game(int users_choice , int computers_choice , string first_player, string second_player) {

    if (users_choice > 3 || computers_choice > 3 || users_choice < 1 || computers_choice < 1) {
                cout<<"\nInvalid choice"<<endl;

     } else if (users_choice==computers_choice) {
            cout<<"\nTie"<<endl;
            exit(0);
        

    } else if (users_choice==1) {
                if(computers_choice==2) {
                    cout<<second_player<<" wins\n"<<endl;

                } else {
                    cout<<first_player<<" wins\n"<<endl;
                }
 
    } else if (users_choice==2) {
                if (computers_choice==1) {
                   cout<<first_player<<" wins\n"<<endl;

                } else {
                    cout<<second_player<<" wins\n"<<endl;
                }

     } else if (users_choice==3) {
                if(computers_choice==1) {
                    cout<<second_player<<" wins\n"<<endl;

                } else {
                    cout<<first_player<<" wins\n"<<endl;

                }
    }            
}
int main ( ) {
    int playing_mode;
    cout<<"Choose one :"<<endl;
    cout<<"1. Player vs Player"<<endl;
    cout<<"2. Player vs Computer"<<endl;

    cout<<"Choice : ";
    cin>>playing_mode;

    cout<<"\nPick a number :"<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissor"<<endl;


    
    if (playing_mode==2) {

        int users_choice;
        cout<<"Users Choice : ";
        cin>>users_choice;

        int max = 3;
        int min = 1;

        int computers_choice = random_function(max,min);
        cout<<"Computers Choice : "<< computers_choice <<endl;
        run_the_game(users_choice , computers_choice , "User" , "Computer");

    } else {

        int first_users_choice;
        cout<<"First Users Choice : ";
        cin>>first_users_choice;

        int second_users_choice;
        cout<<"Second Users choice : ";
        cin>>second_users_choice;
        run_the_game(first_users_choice , second_users_choice , "First User" , "Second User");
    }
    
}
    