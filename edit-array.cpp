/** Spring 2023 - Lab 02

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes: Write a proram that creates an array of 10 integers, 
and provides the user with an interface to edit any of its elements.
*/

#include <iostream>

int main(){
int myData[10];

for(int i = 0; i < 10; i++){

    myData[i] = 1;

}

for(int i = 0; i < 10; i++){
std::cout << myData[i] << " ";
}

std::cout << std::endl;

return 0;
}