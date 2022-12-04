#include <iostream>

using namespace std;

void dec_to_bin(int number) {

    //calculate the array values
    int binary_output[11];
    int i = 0;
    while(number !=0){
    binary_output[i] = number % 2;
    i++;
    number = number/2;
    }

    //print the array:
    cout<<"The binary representation is: \n";
    for(i = i -1; i>=0; i--){
        cout<<binary_output[i];
    }
    cout<<"\n";
}
int main() {
int user_input;
cin>>user_input;
dec_to_bin(user_input);
cout<<"\n";
cout<<"\n";
system("pause");
return 0;
    }