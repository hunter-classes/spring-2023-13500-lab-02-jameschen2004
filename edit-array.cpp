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

std::cout << std::endl;

int cell_index;
int cell_index_value;

do{

for(int i = 0; i < 10; i++){
std::cout << myData[i] << " ";
}

std::cout << "\nPlease enter cell index: ";
std::cin >> cell_index;
std::cout << "What is the index's new value? \n";
std::cin >> cell_index_value;

if(cell_index >= 0 && cell_index < 10){ 
myData[cell_index] = cell_index_value;
}

} 
while(cell_index >= 0 && cell_index < 10);

std::cout << "Cell index out of range. Program terminated. \n";


return 0;
}