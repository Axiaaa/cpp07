#include "whatever.hpp"

int main() {

    {
    int x = 5;
    int y = 10;


    swap(x, y);
    std::cout << "x, y : " << x << " " << y << std::endl;
    std::cout << "The min is "<< min(x, y) << std::endl;
    std::cout << "The max is "<< max(x, y) << std::endl;
    x = 5;
    std::cout << "Changing the value of y to 5" << std::endl;
    std::cout << "y adress is " << &y << " and min(x, y) address is " << &min(x, y) << std::endl;
    std::cout << "y adress is " << &y << " and max(x, y) address is " << &max(x, y) << std::endl;


    char a = 'a';
    char b = 'z';

    swap(a, b);
    std::cout << "a, b : " << a << " " << b<< std::endl;
    std::cout << "The min is "<< min(a, b) << std::endl;
    std::cout << "The max is "<< max(a, b) << std::endl;


    a = 'a';
    std::cout << "Changing the value of a to 'z'" << std::endl;
    std::cout << "a adress is " << (void*)&b << " and min(a, b) address is " << (void*)&min(a, b) << std::endl;
    std::cout << "a adress is " << (void*)&b << " and max(a, b) address is " << (void*)&max(a, b) << std::endl;
    }
    {
        std::cout << "\n\n\n";
        int a = 2;
        int b = 3;
        swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    return 0;
}