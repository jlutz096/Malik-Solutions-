
//The following program uses a palindrome function to check whether or not a string is a palindrome.


#include <iostream>
#include <string>

// function prototype
bool isPalindrome(std::string str);


/**
 * @brief Palindrome function
 * 
 * @param string str
 * 
 * @returns bool, true or false depending on whether or not a string is a palindrome.
*/
 bool isPalindrome(std::string str){
    int length = str.length();
    
    for (int i = 0; i < length; ++i){
        if(str[i] != str[length - 1 - i]){
            return false;
        }
    }
    return true;
  }

/**
 * @brief main function
*/
int main()
{
    // string variable
    std::string message;
    
    // string to hold result
    bool res = false;

    std::cout << "Enter a string: ";

    std::cin >> message;

    // function call
    res = isPalindrome(message);

    if(res == true){
        std::cout << "Palindrome" << "\n";
    }
    else{
        std::cout << "Not Palindrome" << "\n";
    }

    return 0;
}