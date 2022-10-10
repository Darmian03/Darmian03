#include <iostream>

int main()
{
    double a,b,c;
    double max;

    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    std::cout << "c=";
    std::cin >> c;

    max = a*(a>=b) + b*(b>a); //Ако а>=б е вярно резултата ще е 1, ако не е -0. Използваме >= в случай, че числата са еднакви
    max = max*(max>=c) + c*(c>max);

    std::cout << "The biggest number is: " << max;
}