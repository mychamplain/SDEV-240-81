// Lab 3 icecream.cpp

// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// Giving us the number of icecream cones sold
// of each type of selection and we will work
// out the total of your turnover

// PUT YOUR NAME HERE.
// Llewellyn van der Merwe

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3
    // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
    const double one_scoop_cost = 1.49, two_scoop_cost = 2.49, three_scoop_cost = 3.49;

    // NAME AND AN APPROPRIATE DATA TYPE.
    int scoop_qty, one_scoop_qty, two_scoop_qty, three_scoop_qty;

    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    double scoop_total = 0.00, one_scoop_total = 0.00, two_scoop_total = 0.00, three_scoop_total = 0.00;

    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    // THE PROGRAM NEEDS TO GET FROM THE USER.

    // get the one scoop qty
    while (true)
    {
        cout << "Number of single scoop cones sold: ";
        cin >> one_scoop_qty;
        if(cin.fail()) {
            cin.clear(); cin.ignore();
            cout << "\nMust be a integer number like 220 or 0 for none\n" << endl;
        } else break;
    }
    // get the two scoop qty
    while (true)
    {
        cout << "Number of double scoop cones sold: ";
        cin >> two_scoop_qty;
        if(cin.fail()) {
            cin.clear(); cin.ignore();
            cout << "\nMust be a integer number like 414 or 0 for none\n" << endl;
        } else break;
    }
    // get the three scoop qty
    while (true)
    {
        cout << "Number of triple scoop cones sold: ";
        cin >> three_scoop_qty;
        if(cin.fail()) {
            cin.clear(); cin.ignore();
            cout << "\nMust be a integer number like 220 or 0 for none\n" << endl;
        } else break;
    }
    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
    // AND ASSIGN THE RESULTS TO VARIABLES.

    // calculate the one scoop total
    if (one_scoop_qty > 0){
        one_scoop_total = one_scoop_cost * one_scoop_qty;
    }
    // calculate the two scoop total
    if (two_scoop_qty > 0){
        two_scoop_total = two_scoop_cost * two_scoop_qty;
    }
    // calculate the three scoop total
    if (three_scoop_qty > 0){
        three_scoop_total = three_scoop_cost * three_scoop_qty;
    }

    // workout the total
    scoop_qty = one_scoop_qty + two_scoop_qty + three_scoop_qty;
    scoop_total = one_scoop_total + two_scoop_total + three_scoop_total;

    // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.

    // values for controlling format
    // adapted from http://www.cplusplus.com/forum/beginner/181119/
    const int name_width = 21;
    const int qty_width = std::to_string(scoop_qty).size();
    const int price_width = std::to_string((int) scoop_total).size() + 3;
    const std::string spacer = " ";

    std::cout << "\n" << left << std::setw(name_width) << "DeLIGHTful cones" << spacer << right << std::setw(qty_width) << one_scoop_qty << spacer
            << "  $" << std::setw(price_width) << std::fixed << std::setprecision(2) << one_scoop_total << '\n';
    std::cout << left << std::setw(name_width) << "Double DeLIGHT cones" << spacer << right << std::setw(qty_width) << two_scoop_qty << spacer
            << "  $" << std::setw(price_width) << std::fixed << std::setprecision(2) << two_scoop_total << '\n';
    std::cout << left << std::setw(name_width) << "Triple DeLIGHT cones" << spacer << right << std::setw(qty_width) << three_scoop_qty << spacer
            << "  $" << std::setw(price_width) << std::fixed << std::setprecision(2) << three_scoop_total << '\n';
    std::cout << left << std::setw(name_width) << "Total" << spacer << right << std::setw(qty_width) << scoop_qty << spacer
            << "  $" << std::setw(price_width) << std::fixed << std::setprecision(2) << scoop_total << '\n';

    return 0;
}
