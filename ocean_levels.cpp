#include <iostream>

int main()
{
    const double ANNUAL_RISE = 1.5;
    const double YEAR_5 = 5;
    const double YEAR_7 = 7;
    const double YEAR_10 = 10;
    double year_5_rise;
    double year_7_rise;
    double year_10_rise;

    year_5_rise = ANNUAL_RISE * YEAR_5; //Calculates the rise after 5 years.
    year_7_rise = ANNUAL_RISE * YEAR_7; //Calculates the rise after 7 years.
    year_10_rise = ANNUAL_RISE * YEAR_10; //Calculates the rise after 10 years.

    std::cout << "Rise after 5 years: " << year_5_rise << " mm\n";
    std::cout << "Rise after 7 years: " << year_7_rise << " mm\n";
    std::cout << "Rise after 10 years: " << year_10_rise << " mm";

    return 0;
}
