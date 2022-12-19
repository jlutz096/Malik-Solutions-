#include <iostream>
#include <cctype>

// function prototype
bool isVowel(char ch);


/**
 * @brief isVowel. Checks whether a character is a vowel.
 * 
 * @param ch
 * 
 * @returns bool
*/
bool isVowel(char ch)
{
    // make toUpper.
    ch = toupper(ch);

    // Use a switch statement to check if vowel
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        //return true if ch is a vowel
        return true;

        default:
        // return false otherwise
        return false;
    }
}



int main()
{
    // Variable declaration
    char character;
    bool result;

    // Get user input
    std::cout << "Enter a character: ";

    std::cin >> character;

    // function call
    result = isVowel(character);

    if(result){
        std::cout << character << " is a vowel!" << "\n";
    }
    else{
        std::cout << character << " is not a vowel!" << "\n";
    }
    return 0;
}