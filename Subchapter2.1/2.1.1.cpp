#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    // Create a vector to store the values in the array

    vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Calculate the average value of the array
    int sum = 0;
    for (int i = 0; i < values.size(); i++)
        sum += values[i];
    double average = sum / values.size();

    // Find the minimum and maximum values in the array
    int minValue = *min_element(values.begin(), values.end());
    int maxValue = *max_element(values.begin(), values.end());

    // Print the results
    cout << "Average: " << average << endl;
    cout << "Minimum: " << minValue << endl;
    cout << "Maximum: " << maxValue << endl;

    cout<<"\n";
cout<<"\n";
system("pause");

    return 0;
}
