#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Get values of function based off of values

float get_function_value(int x, int y){
    float z;
    z = 5*pow(x,2) + sin(x) + cosh(y);
      return z;
}


int main() {
int output_length;

cout<<"Enter the number of points for the function: \n";
cin>>output_length;

cout<<setw(20)<<"z "<<setw(20)<<"x-values "<<setw(20)<<" y-values";
cout<<"\n";
for (int i = 0;i<output_length ;i++){
    for (int j = 0;j<output_length;j++){
        cout<<setw(20)<<get_function_value(j,i)<<setw(20)<<j<<setw(20)<<i;
        cout<<"\n";
        }
}

cout<<"\n";
cout<<"\n";
system("pause");
return 0;
    }