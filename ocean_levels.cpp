#include <iostream>

int main()
{
    const double ANNUAL_RISE = 1.5;
    double year_5 = ANNUAL_RISE * 5; //Calculates the rise after 5 years.
    double year_7 = ANNUAL_RISE * 7; //Calculates the rise after 7 years.
    double year_10 = ANNUAL_RISE * 10; //Calculates the rise after 10 years.
    
    std::cout << "Rise after 5 years: " << year_5 << " mm\n";
    std::cout << "Rise after 7 years: " << year_7 << " mm\n";
    std::cout << "Rise after 10 years: " << year_10 << " mm";

    return 0;
}