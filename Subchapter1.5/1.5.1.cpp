#include <iostream>
#include <cmath>
//Recursion, Geometric progression
using namespace std;

float geometric_progression(float first_step,float step_length, int n) {

float summation = first_step;
for (int i = 1; i<n;i++){
summation = summation + first_step*pow(step_length,i);
}
    return summation;
}

int main() {

float a,r,n; 
float result;

cout<<"first step a: \n ";
    cin>>a;
cout<<"step-length r: \n ";
    cin>>r;
cout<<"No. of steps n: \n";
    cin>>n; 
    
    result = geometric_progression(a,r,n);
cout<<"The series converges to: "<<result; 
cout<<"\n";
cout<<"\n";
system("pause");
return 0;
    }