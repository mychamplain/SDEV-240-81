// Lab 6 kiloConverter.cpp
// This menu-driven program lets the user convert
// pounds to kilograms and kilograms to pounds.
// Llewellyn van der Merwe
#include <iostream>
using namespace std;

// Function prototypes
// WRITE PROTOTYPES FOR THE displayMenu, getChoice,
// kilosToPounds and poundsToKilos FUNCTIONS HERE.
void displayMenu(int& choice, double& weight);
int getChoice(int min, int max);
double kilosToPounds(double weight);
double poundsToKilos(double weight);

/*****     main     *****/
int main()
{
    // DECLARE ANY VARIABLES MAIN USES HERE.
    int choice = 0;   // Menu choice should be 1, 2, or 3
    // repeat the menu until quit
    do
    {
        double weight = 0.00;
        // WRITE THE CODE HERE TO CARRY OUT THE STEPS
        // REQUIRED BY THE PROGRAM SPECIFICATIONS.
        displayMenu(choice, weight);
        // now do the calculation
        if (choice == 1){
            cout << weight << " kilograms = " << kilosToPounds(weight) << " pounds\n" << endl;
        } else if (choice == 2){
            cout << weight << " pounds = " << poundsToKilos(weight) << " kilograms\n" << endl;
        }
    } while (choice < 3);

    return 0;
}

/*****     displayMenu     *****/
// WRITE THE displayMenu FUNCTION HERE.
// THIS void FUNCTION DISPLAYS THE MENU CHOICES
//  1. Convert kilograms to pounds
//  2. Convert pounds to kilograms
//  3. Quit
void displayMenu(int& choice, double& weight) {
    // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
    cout << "1. Convert kilograms to pounds\n"
        << "2. Convert pounds to kilograms\n"
        << "3. Quit\n";
    // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
    cout << "Enter only a number: ";
    // get the choice
    choice = getChoice(1, 3);
    // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
    if (choice == 1) {
        while (true) {
            cout << "Kilogram/s Weight to be converted: ";
            cin >> weight;
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "\nError, must be a number\n" << endl;
            } else break;
        }
    } else if (choice == 2) {
        while (true) {
            cout << "Pound/s Weight to be converted: ";
            cin >> weight;
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "\nError, must be a number\n" << endl;
            } else break;
        }
    } else if (choice == 3) {
        return;
    }
}

/*****     getChoice     *****/
// THIS IS THE SAME FUNCTION YOU WROTE EARLIER IN THIS SET
// OF LAB EXERCISES. JUST FIND IT AND PASTE IT HERE.
int getChoice(int min, int max)
{
    int input;

    // Get and validate the input
    cin >> input;
    while (cin.fail() || input < min || input > max)
    {  cout << "Invalid input. Enter an integer between " << min << " and " << max << ": ";
        cin  >> input;
    }
    return input;
}

/*****     kilosToPounds     *****/
// WRITE THE kilosToPounds FUNCTION HERE.
// IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF POUNDS.
double kilosToPounds(double weight){
    return weight * 2.2;
}

/*****    poundsToKilos     *****/
// WRITE THE poundsToKilos FUNCTION HERE.
// IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF KILOS.
double poundsToKilos(double weight){
    return weight / 2.2;
}