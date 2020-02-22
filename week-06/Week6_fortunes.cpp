// Lab 6 fortunes.cpp 
// This fortune finding program will be modified to use a void function.
// Llewellyn van der Merwe
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// WRITE A PROTOTYPE FOR THE findFortune FUNCTION HERE.
void findFortune(int numYears, int numChildren);

/*****     main     *****/
int main()
{
   int numYears,
       numChildren;

   cout << "This program can show you something amazing. \n"
        << "Enter two integers separated by a space: ";
        
   cin >> numYears >> numChildren;

   // Call to the find fortune function
   findFortune(numYears, numChildren);
  
   return 0;
}

/*****     findFortune     *****/
// WRITE THE findFortune FUNCTION HEADER HERE.
void findFortune(int numYears, int numChildren) {
    // WRITE THE BODY OF THE findFortune FUNCTION HERE.
    numYears = abs(numYears) % 5;       // Convert to a positive integer 0 to 4
    numChildren = abs(numChildren) % 6; // Convert to a positive integer 0 to 5

    cout << "\nGetting married in " << numYears << " years "
         << "and then having " << numChildren << " children is amazing.\n";
}
