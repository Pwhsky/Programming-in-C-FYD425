#include <iostream>
#include <string>

// Function to count the number of occurrences of the pattern in a fed string
int count_occurrences(const std::string& str, const std::string& pattern)
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
    std::cout<<"Input string: \n";
    char sentence;
    std::cin>>sentence;

    std::cout<<"Input pattern: \n";
    char pattern;
    std::cin>>pattern;


    // Call the function to count the occurrences of the pattern in the string
    int count = count_occurrences(sentence, pattern);

    std::cout << "The pattern '" << pattern << "' occurs " << count << " times in the string." << std::endl;


std::cout << "\n";
std::cout<<"\n";
system("pause");
    return 0;
}
