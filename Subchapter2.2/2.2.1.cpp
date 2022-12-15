#include <iostream>
#include <string>
using namespace std;
// Function to count the number of occurrences of the pattern in a fed string

int count_occurrences(const string& str, const string& pattern)
{
    int count = 0;
    // Loop through the string and check for the pattern
    for (int i = 0; i <= str.size() - pattern.size(); i++) {
        if (str.substr(i, pattern.size()) == pattern) {
            count++;
        }
    }
    return count;
}

int main()
{
    // Input string and pattern
    cout<<"Input string: \n";
    string sentence;
    cin>>sentence;

    cout<<"Input pattern: \n";
    string pattern;
    cin>>pattern;


    // Call the function to count the occurrences of the pattern in the string
    int count = count_occurrences(sentence, pattern);

    cout << "The pattern '" << pattern << "' occurs " << count << " times in the string." <<endl;


cout << "\n";
cout<<"\n";
system("pause");
    return 0;
}
