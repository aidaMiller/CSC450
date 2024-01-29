#include <iostream>
#include <string>
using namespace std;

int main() {
  int numberOfAttempts = 3;
    for (int attempt = 1; attempt <= numberOfAttempts; attempt++) {

      cout << "Attempt: " << attempt<< "/3" << endl;

        // Get first string input
        string firstString;
      
        cout << "Enter the first string: ";
        
        getline(cin, firstString);

        // Get second string input
        string secondString;
        
        cout << "Enter the second string: ";
        
        getline(cin, secondString);

        // Concatenate strings
        string result = firstString + secondString;

        // Print the result
        cout << "Concatenated String: " << result << endl << endl;
    }
    return 0;
}