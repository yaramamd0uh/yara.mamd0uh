#include <iostream>
#include <string>
#include <list>
using namespace std;
void encrypt() {
    //take user text
    cout << "enter your text here: " << endl;
    string text;
    getline(cin, text);
    //convert each character to uppercase
    for (char& c : text) {
        c = toupper(c);
    }
    char list[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P','Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    // Calculate the number of characters in the 'text' string and store it in the 'count' variable
    int count = text.size();
    // Initialize result before using it in the loop
    string result;
    for (int index1 = 0; index1 < count; ++index1) {
        // Iterate over the indices of stringList
        for (int listindex = 0; listindex < 26; ++listindex) {
            // Iterate through characters in the 'text' string
            while (text[index1] == list[listindex]) {
                int index2 = 25 - (listindex);
                char index3 = list[index2];
                result += index3;
                //Break out of the inner loop once a match is found
                break;
            }// This loop continues as long as the current character in 'text' matches the one in 'list'

        }
    }
    cout << "the encrypted message is: " << result << endl;

}
void decrypt() {
    //take user text
    cout << "enter your text here: " << endl;
    string text;
    getline(cin, text);
    //convert each character to uppercase
    for (char& c : text) {
        c = toupper(c);
    }
    char list[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P','Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    // Calculate the number of characters in the 'text' string and store it in the 'count' variable
    int count = text.size();
    // Initialize result before using it in the loop
    string result;
    for (int index1 = 0; index1 < count; ++index1) {
        // Iterate over the indices of stringList
        for (int listindex = 0; listindex < 26; ++listindex) {
            // Iterate through characters in the 'text' string
            while (text[index1] == list[listindex]) {
                int index2 = 25 - (listindex);
                char index3 = list[index2];
                result += index3;
                //Break out of the inner loop once a match is found
                break;
            }// This loop continues as long as the current character in 'text' matches the one in 'list'

        }
    }
    cout << "the decrypted messege is: " << result << endl;
}
int main() {
    int choice;

    do {
        // Display menu options
        cout << "Menu:\n";
        cout << "1. Encrypt\n";
        cout << "2. Decrypt\n";
        cout << "3. Exit\n";

        // Get user choice
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();


        // Perform actions based on user choice
        switch (choice) {
        case 1:
            encrypt();
            break;
        case 2:
            decrypt();
            break;
        case 3:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }

    } while (choice != 3); // Continue the loop until the user selects the exit option (3)

    return 0;
}

