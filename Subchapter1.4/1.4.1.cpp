//trapezoidal rule with user specified limits and accuracy/Nsteps.
//Note, is unfinished, does not have default accuracy value.
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

float objective_function(float x){ 
    float output ;
    output = sin(x);
    return output;
}

float trapezoidal_integration(float a,float b, int N) {

    float dx = (b-a)/N;
    float sum = 0;
    float output;

    for(int i=1; i<(N-1);i++){
        sum = sum + objective_function(i*dx); 
    }
    
    output = dx*(sum + (objective_function(N*dx)+objective_function(a))/2 );

    return output;
}


int main() {
float a,b;
int N;

cout<<"Enter integral bound a: \n";
cin>>a;
cout<<"Enter integral bound b: \n";
cin>>b;
cout<<"Enter resolution: \n";
cin>>N;
cout<<"The integral of sin(x) is: "<<trapezoidal_integration(a,b,1000);

cout<<"\n";
cout<<"\n";
system("pause");
return 0;
    }