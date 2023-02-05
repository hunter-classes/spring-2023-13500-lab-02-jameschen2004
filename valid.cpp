/** Spring 2023 - Lab 02

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes: Asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking
to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main(){

    int num;
    int num_squared;

    std::cout << "Please enter an integer between 0 and 100 inclusive. \n";
    std::cin >> num;

    while (0 > num || num > 100){
        std::cout << "The input provided is out of range. \n" <<
        "Please enter an integer between 0 and 100 inclusive. \n";
        std::cin >> num;
    }
    num_squared = num * num;
    std::cout << num << " squared is " << num_squared << ". \n" << std::endl;    

    return 0;
}