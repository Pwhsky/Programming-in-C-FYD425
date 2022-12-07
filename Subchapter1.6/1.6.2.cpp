#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int random_integer(){
	//random int from 0-100
    
	srand((unsigned) time(NULL));
    int random = rand();
    return random % 101;
}

int main() {
int hidden_int = random_integer();
int user_guess;
int tries = 1;
cout<<"Hidden integer, guess a number from 1-100: \n";


    while (tries < 7){
        cin>>user_guess;
        if (user_guess == hidden_int) {
        cout<<"Correct! The answer was "<<hidden_int;
        }
        else {
        tries += 1;
        cout<<"Incorrect! you have: "<<(7-tries)<<" tries remaining!\n";

        if(user_guess < hidden_int){
            cout<<"Your guess is too small! \n";
        }
        else{
            cout<<"Your guess is too big! \n";
        }
        }      
    }


    cout<<"\n";
    cout<<"\n";
    system("pause");
    return 0;
}