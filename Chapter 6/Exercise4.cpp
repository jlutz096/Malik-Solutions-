#include <iostream>
#include <cmath>

// named PI constant
const double PI = 3.1419;

int main()
{
    // (a)
    std::cout << "Square root of PI is: " << sqrt(PI) << "\n";

    // (b)

    // declare radius variable
    double radius;

    //prompt user
    std::cout << "Enter the radius of a sphere: ";
    std::cin >> radius;

    //find the surface area of the sphere
    std::cout << "The surface area is: " << 4 * PI * pow(radius, 2.0) << "\n";

    //find the volume of the sphere
    std::cout << "The volume of the sphere is: " << ((4.0 / 3.0)) * PI * pow(radius, 3.0) << "\n";

    return 0;
}