#include <iostream>
#include <cmath>

using namespace std;
//Create 5x5 sparse diagonal matrix

int main() {
int matrix_size;
cout<<"Enter matrix size: \n";
cin>> matrix_size;

int sparse_matrix[matrix_size][matrix_size];

for (int i = 0; i<matrix_size;i++){
    for (int j = 0; j<matrix_size;j++){
        sparse_matrix[i][j] = 0;
        if(i==j) {
            sparse_matrix[i][j] = pow((i+1),2)+ pow((j+1),2);
        }
    }
}


  for (int i = 0; i < matrix_size; i++){

       for (int j = 0; j < matrix_size; j++){
        cout<<sparse_matrix[i][j]<<" ";
       }
       cout<<"\n";
  }

cout<<"\n";
cout<<"\n";
system("pause");
    return 0;
}