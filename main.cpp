#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

// Function to generate the random password
void randomPasswordGenerator(int l)
{
    // initializing the variables
    string capital_case, small_case, numbers, symbols, characters, password;

    capital_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // All the capital letters
    small_case = "abcdefghijklmnopqrstuvwxyz"; // All the capital letters
    numbers = "1234567890"; // All the numbers
    symbols = "!@#$%^&*(){}[]?"; // Some symbols


    // combining them all to make a larger string
    characters = capital_case + small_case + numbers + symbols; 

    // An empty string
    password = "";

    int i = 0;
    while (i < l)  // while loop to generate random numbers   
    {
        // generating random numbers as indexes
        int randomIndex = rand() % (characters.length() - 1) + 0;

        // appending random characters to the empty 
        // and storing and storing it
        password = password + characters[randomIndex];

        i++;
    }
    
    // displaying the password
    cout << password << endl;  

}

// main function
int main() {

    // length of the password
    int l = 10;

    // calling the function
    randomPasswordGenerator(l);

    return 0;
    
}
