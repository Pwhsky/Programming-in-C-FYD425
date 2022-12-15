#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

//Palindrome function

string check_palindrome(string text){
//if palindrome, return true, else false.
string Rtext = text;
reverse(Rtext.begin(),Rtext.end());

if (Rtext==text){
return " is a palindrome.";
}
    else{
      return " is not a palindrome.";
}
}


int main() {
//take input
string user_input;
cout<<"Enter a string: \n";
cin>> user_input;

cout<< user_input << check_palindrome(user_input);

//Return if the input is a palindrome or not:


    
cout<<"\n";
cout<<"\n";
system("pause");
return 0;
    }