
#include <iostream>

using namespace std;

int main() {
int rows;
int cols; 
int size;

cout<<"Enter number of rows: \n";
cin >> rows;
cout<<"Enter a col number: \n";
cin >>cols;

for (int iterator_rows = 0; iterator_rows < rows; iterator_rows++){
    cout<<"\n";
    for (int iterator_cols = 0; iterator_cols < cols; iterator_cols++){

    if (iterator_rows % 2 == 0)
        if (iterator_cols % 2 == 0)
         cout<<".";
         else
        cout<<"*";
    else
        if (iterator_cols % 2 == 0)
         cout<<"*";
         else
        cout<<".";
    }
}

cout<<"\n";
cout<<"\n";
system("pause");

return 0;
}
