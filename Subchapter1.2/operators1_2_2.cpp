#include <iostream>

using namespace std;
int main() {
int user_input;

cout<<"Enter a number to recieve divisors: \n";

cin>>user_input;
for (int i = 1;i<user_input;i++) {

if (user_input % i ==0)
    cout<<i<<" is a diviser \n";
}


cout<<"\n";
system("pause");
return 0;
    }