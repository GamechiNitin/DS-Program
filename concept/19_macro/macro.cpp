#include <iostream>
using namespace std;

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{

    /*
    A piece of code in a program
    that is replaced by value of macro.

    Alternatives to Macros

    Constants: Use const or constexpr for constant values.
    Inline Functions: Use inline functions instead of macros for reusable code.
    Type-safe Utilities: Use templates for type-safe utilities.
    */

    // ----
    double radius = 5.0;
    double area = PI * SQUARE(radius); // Using the PI and SQUARE macros
    std::cout << "Area of the circle: " << area << std::endl;

    int a = 10;
    int b = 20;

    std::cout << "Maximum of " << a << " and " << b << " is " << MAX(a, b) << std::endl;
    /*
    Area of the circle: 78.5397
    Maximum of 10 and 20 is 20
    */
    return 0;
}