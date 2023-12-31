#include <iostream>
using namespace std;

/* <***| ANDGOEDU |***> */

// Singe Line Comment Example

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
    price = 150; // Updating var Value
    std::cout << "\n New Price is " << price;
    /* Variables Examples*/

    // int 1num = 1; // Cannot Start with a number
    int num1 = 1;
    int num2_ = 2;
    int num_3_ = 3;
    int _numbers = 100; // Can start var with an underscore

    /*
        Variables Advanced Knoweldge
            - Declare Variable without value + change letter
            - Declare multiple Variables without values + change letter
            - Declare multiple variables with same value
    */

    int a = 100;
    cout << a; // 100

    cout << "\n===========\n";

    int b, c, d;                    // Declaring multiple variables with int type
    a = 10, b = 20, c = 30, d = 50; // Updating Multiple Variables
    cout << a + b + c;              // 10 + 20 + 30 = 60   - Printing Values with + operator

    int e, f = 20, g; // Declare variables and value
    e = 20, g = 10;   // updating values for variables without a value
    cout << e + f + g;

    /* Variable Scopes
        - Global Variable  z
        - Local Variable   u
    */

    cout << z; // Since its a global variable it can be accessed everywhere

    int x = 10; // local variable

    cout << x << "= x which is a local variable";

    return 0;
}

int z = 100; // Global variable

int second()
{
    cout << z << "Coming from second function \n";
    return 0;
}

/*
    Constant Variable
        - Read Only Value
        - Can't Declare without value

*/

int third()
{
    int month = 4;     // Changeable
    const int day = 1; // Cannot be changed
    cout << "\n Salary is presented at " << day << "st Day";
    cout << "\n This is month no" << month;
    return 0;
}

int ageCalculator()
{
    cout << "--------------------------------------------\n";
    cout << "-------------Calculate Age App ------------\n";
    cout << "--------------------------------------------\n";

    int age;
    cin >> age; // cin for Input
    cout << age;

    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;

    cout << "Age in Days: " << age_in_days << "Days \n";
    cout << "Age in Hours: " << age_in_hours << "Hours \n";

    return 0;
}