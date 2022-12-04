#include <iostream>
#include <cmath>
using namespace std;


void quadratic_roots(float a, float b, float c){

float roots[1];

roots[0] = (-b + pow(pow(b,2)-4*a*c,0.5) )/(2*a);
roots[1] = (-b - pow(pow(b,2)-4*a*c,0.5) )/(2*a);

cout<<"Root 1: "<<roots[0]<<"\n";
cout<<"Root 2: "<<roots[1]<<"\n";

}

int main() {
 float a,b,c;   

cout<<"Quadratic root solver \n \n";

cout<<"Enter a: \n";
cin>>a;
cout<<"Enter b: \n";
cin>>b;
cout<<"Enter c: \n";
cin>>c;
quadratic_roots(a,b,c);

cout<<"\n";
cout<<"\n";
system("pause");
    return 0;
    
}