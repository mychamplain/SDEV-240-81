// Lab 6 areas4.cpp
// Program to calculate areas of objects
// Llewellyn van der Merwe
// INCLUDE ANY NEEDED FILES HERE.

#include <iostream>
using namespace std;

// We set our globals
// DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
const float pi = 3.14159;
// DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
// NAME AND AN APPROPRIATE DATA TYPE.
int choice = 0;    // Menu choice should be 1, 2, 3, or 4
float width;   // used for both square and triangle
float height;  // used for both square and triangle
float radius;  // used for circle

// Function prototypes
void displayMenu();
int getChoice(int min, int max);
double findSquareArea();
double findCircleArea();
double findTriangleArea();

int main()
{
    // repeat the menu until quit
    do
    {
        // show the menu and set the choice
        displayMenu();
        // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
        // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
        // BE DISPLAYED.
        if (choice == 1) {
            cout << "\nArea = " << findSquareArea() << "\n======================\n" << endl;
        } else if (choice == 2) {
            cout << "\nArea = " << findCircleArea() << "\n======================\n" << endl;
        } else if (choice == 3) {
            cout << "\nArea = " << findTriangleArea() << "\n======================\n" << endl;
        }
    } while (choice < 4);
      
   return 0;
}

// The menu function
void displayMenu() {
    // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
    cout << "Choose an object for which we should calculate the area for you. \n\n";
    cout << "    1 -- square\n" << "    2 -- circle\n"
         << "    3 -- right triangle\n" << "    4 -- quit\n\n";
    // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
    cout << "Enter only a number: ";
    // get the choice
    choice = getChoice(1, 4);
    // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
    if (choice == 1 || choice == 3) {
        while (true) {
            cout << "Enter width: ";
            cin >> width;
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "\nError, must be a number\n" << endl;
            } else break;
        }
        while (true) {
            cout << "Enter height: ";
            cin >> height;
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "\nError, must be a number\n" << endl;
            } else break;
        }
    } else if (choice == 2) {
        while (true) {
            cout << "Enter radius of the circle: ";
            cin >> radius;
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "\nError, must be a number\n" << endl;
            } else break;
        }
    } else if (choice == 4) {
        return;
    }
}

/*****     getChoice     *****/
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

// calculate the square area
double findSquareArea(){
    return width * height;
}

// calculate the circle area
double findCircleArea(){
    return pi * radius * radius;
}

// calculate the triangle area
double findTriangleArea(){
    return width * height;
}
