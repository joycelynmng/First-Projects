// This program determined which of a company's four divisions has the greatest sales for a quarter
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

double getSales(string); // prototyping
void findHighest();

int main()
{
    findHighest(); // The main function runs the findHighest function
    return 0;
}

double getSales(string region) // This function gets the Sales for each division
{
    double sales;

    cout << "What is the " << region << " division's quarterly sales figure: ";
    cin >> sales;
    if (sales < 0)
    {
        while (sales < 0) // The function will keep running while sales is less than 0
        {
            cout << "You cannot put a value lower than 0.00.\n";
            cout << "What is the " << region << " division's quarterly sales figure: ";
            cin >> sales;
        }
    }

    return sales;
}

void findHighest()
{
    double Northeast, Southeast, Northwest, Southwest;
    int i;
    string division;

    Northeast = getSales("Northeast"); // This function calls the previous function
    Southeast = getSales("Southeast");
    Northwest = getSales("Northwest");
    Southwest = getSales("Southwest");

    double highest[4] = {Northeast, Southeast, Northwest, Southwest}; // The values the user enters gets placed into the array
    double greatestSales = highest[0];

    for (i = 0; i < 4; i++) // This finds the highest value in the array.
    {
        if (highest[i] > greatestSales)
            greatestSales = highest[i];
    }

    if (greatestSales == highest[0]) // This will print out the name of the division depending on which is highest
        division = "Northeast";
    else if (greatestSales == highest[1])
        division = "Southeast";
    else if (greatestSales == highest[2])
        division = "Northwest";
    else if (greatestSales == highest[3])
        division = "Southwest";

    cout << fixed << showpoint << setprecision(2);
    cout << "The division with the greatest sales is " << division << " at $" << greatestSales << ".\n";
}