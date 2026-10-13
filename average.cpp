#include <iostream>

int main()
{
    double sum, average;
    double var1 = 28;
    double var2 = 32;
    double var3 = 37;
    double var4 = 24;
    double var5 = 33;

    sum = var1 + var2 + var3 + var4 + var5; //Adds the variables together.
    average = sum / 5; //Calculates the average.

    std::cout << "Sum: " << sum << "\nAverage: " << average;

    return 0;
}
