#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// Function to get an output file stream
fstream getFileStream(string fileName, ios_base::openmode openMode) {
  fstream outfile;
  outfile.open(fileName, openMode);

  return outfile;
}

// Function to close a file stream
void closeFileStream(fstream& outfile) {
  if (outfile.is_open()) {
    outfile.close();
  }
}

// Function to get user input
string getUserInput() {
  string lastName;
  string firstName;

  cout << "Enter your last name: " << lastName << endl;
  cin >> lastName;
  cout << "Enter your first name: " << firstName << endl;
  cin >> firstName;
  return "The user claims to be " + firstName + " " + lastName + ".";
}

// Function to reverse content of a file
void reverseFile(fstream& infile) {
  string reversedString = "";
  char ch;  // Declare a character variable to read characters from file
  while (infile >> noskipws >> ch) {
    reversedString += ch;
  }

  // Reverse the content of reversedString
  reverse(reversedString.begin(), reversedString.end());

  fstream outfile = getFileStream("CSC450-mod5-reverse.txt", ios_base::out);

  // Write the reversed content to the output file
  for (char& ch : reversedString) {
    outfile << ch;
  }
  closeFileStream(outfile);
}

int main() {
  fstream outfile = getFileStream("CSC450_CT5_mod5.txt", ios_base::app);

  outfile << getUserInput();
  closeFileStream(outfile);

  outfile = getFileStream("CSC450_CT5_mod5.txt", ios_base::in);
  reverseFile(outfile);
  closeFileStream(outfile);

  return 0;
}