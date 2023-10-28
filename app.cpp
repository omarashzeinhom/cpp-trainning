#include <iostream>
using namespace std;

/* ANDGOEDU */

// Comments Example

/* Multiple Line Comments Example */


int main()
{
    std::cout << "I am a Dragon";
    std::cout /* <= Comment here => */ << "2nd Line \n";
    std::cout << "3rd Line \n";
    
/*
Variables Basic Knowledge 

- Data Container with Unique Name "Identifier"
- Declare with Value + Change Later
    Syntax 
    - [Data_Type] [Variable_Name] = [Value]

    - Naming Rules 
     - Unique 
     - Case Sensitive
     - Cannot Start with numbers
     - Numbers or letters or underscore
     - No White Space or Special Characters
     - Reserved Keyword: "Class", "Public"
     
    - Best Practices
        - Related Names
        - Writing Style
*/
    int price = 100; // Declaring type of Variable price
    std::cout << "\n Price is :" << price;
    std::cout << "\n Price After Adding 15 Is " << 100 + 15;
    std::cout << "\n Price After Adding 50 Is " << 100 + 50;
    price = 150;    // Updating var Value
    std::cout << "\n New Price is " << price;
    /* Variables Examples*/
    // int 1num = 1; // Cannot Start with a number
    int num1 = 1;
    int num2_ = 2;
    int num_3_ = 3;
    int _numbers = 100; // Can start var with an underscore


    return 0;
}


