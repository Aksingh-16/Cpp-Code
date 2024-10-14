#include<iostream>  // Include the input-output stream library for standard I/O operations
#include<string>    // Include the string library to use the string class

using namespace std;  // Use the standard namespace to avoid prefixing standard functions with "std::"

string reverse_string(string str) {
    int n = str.length();  // Get the length of the string and store it in 'n'
    
    // Swap characters from the start and end, moving towards the center
    for (int i = 0; i < n / 2; i++) {  // Loop from 0 to the middle of the string
        swap(str[i], str[n - i - 1]);  // Swap the character at index 'i' with the character at index 'n - i - 1'
    }
    
    return str;  // Return the reversed string
}

int main() {
    string input;  // Declare a string variable to hold the user's input
    
    // Prompt the user to enter a string
    cout << "Enter a string to reverse: ";
    getline(cin, input);  // Read the entire line of input (including spaces) into the 'input' string
    
    string reversed = reverse_string(input);  // Call the reverse_string function and store the result in 'reversed'
    
    // Output the reversed string to the console
    cout << "Reversed string: " << reversed << endl;
    
    return 0;  // Return 0 to indicate successful execution of the program
}
