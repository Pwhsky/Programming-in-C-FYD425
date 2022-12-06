#include <iostream>
#include <cmath>
//Recursion, Geometric progression
using namespace std;


float geometric_progression(float first_step,float step_length, int n) {
    if (n==1)
        return first_step;
    else
        return step_length*geometric_progression(first_step,step_length,n-1); 
}cout<<"\n";
cout<<"\n";
system("pause");

int main() {

float a,q,n; 
float result;

cout<<"enter first step a: \n ";
    cin>>a;
cout<<"enter step-length q: \n ";
    cin>>q;
cout<<"No. of steps n: \n";
    cin>>n; 
    

 result = geometric_progression(a,q,n);
cout<<"The n:th element is: "<<result<<"\n";

cout<<"\n";
cout<<"\n";
system("pause");
    return 0;
    }
