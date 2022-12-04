#include <iostream>

using namespace std;
int main() {
int user_input;
int digit_counter = 0;

cout<<"Enter a number to recieve the number of digits: \n";
cin>>user_input;
while (user_input != 0) {
    user_input /= 10;
    digit_counter++;
}
cout<<"The number of digits is: "<<digit_counter<<"\n";
system("pause");
return 0;
    }