#include <iostream>

int main()
{
    int Number01;
    int Number02;
    std::cout << "Type the first number: ";
    std::cin >> Number01; // For a standard input, we need cin to input data in memory. We also need to use ">>".
    std::cout << "Number01 = " << Number01 << "\n";
    std::cout << "Type the second number: ";
    std::cin >> Number02;
    std::cout << "Number02 = " << Number02 << "\n";
    system("PAUSE");
}

