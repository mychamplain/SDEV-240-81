// To calculate your body mas index

#include <iostream>
#include <math.h>
using namespace std;

// little rounding function https://stackoverflow.com/a/50404037/1429677
double round(long double number, int precision) {
    int decimals = std::pow(10, precision);
    return (std::round(number * decimals)) / decimals;
}

int main()
{
    // declare the weight to be integers
    int weight;
    // declare the height to be floats
    float height;
    // get the weight
    while (true)
    {
        cout << "Give us your weight (in kg): ";
        cin >> weight;
        if(cin.fail()) {
            cin.clear(); cin.ignore();
            cout << "\nMust be a integer number in kilogram like 65\n" << endl;
        } else break;
    }
    // get the height
    while (true)
    {
        cout << "Give us the your height (in meter): ";
        cin >> height;
        if(cin.fail()) {
            cin.clear(); cin.ignore();
            cout << "\nMust be a float number in meters like 1.6\n" << endl;
        } else break;
    }
    // calculate the bmi'
    float bmi = round (weight / pow(height, 2.0), 2);
    // show the result
    cout << "\n=========================" << endl;
    cout << " Your Body Mass Index is" << endl;
    cout << "     " << bmi << " kg.m²" << endl;
    cout << "=========================" << endl;

    return 0;
}
