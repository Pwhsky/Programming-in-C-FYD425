#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_integer(int lower_limit, int upper_limit){
	// Providing a seed value, time.
	srand((unsigned) time(NULL));


int range = upper_limit - lower_limit;
int random = rand();


    return random % range + lower_limit;
}

int main() {
int a,b;

cout<<"Random integer generator. \n";
cout<<"Enter lower limit: ";
cin>>a;
cout<<"Enter upper limit: ";
cin>>b;

cout<<random_integer(a,b);

cout<<"\n";
cout<<"\n";
system("pause");
return 0;
    }