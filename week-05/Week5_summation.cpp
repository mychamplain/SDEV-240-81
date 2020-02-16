// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// Llewellyn van der Merwe
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // print out my name only once
    cout << "Llewellyn. \n";
    // Add do again option
    char doAgain = 'y';
    while (doAgain == 'Y' || doAgain == 'y')
    {
        int denom,          // Denominator of a particular term
            term = 1,       // Term counter
            finalTerm = 6;  // The final term

        double sum = 0.0;     // Accumulator that adds up all terms in the series
        // get the final term
        while (true)
        {
            cout << "Give us the number of terms: ";
            cin >> finalTerm;
            if(cin.fail() || finalTerm < 2 || finalTerm > 10) {
                cin.clear(); cin.ignore();
                cout << "\nMust be a number from 2 to 10" << endl;
            } else break;
        }

        // WRITE THE CODE TO START A FOR LOOP THAT LOOPS ONCE FOR EACH TERM.
        // I.E., FOR TERMS WITH DENOMINATORS FROM 2 TO THE FINAL DENOMINATOR.
        while (term <= finalTerm)
        {
            // calculate the denom
            denom = pow(2, term);
            // WRITE THE CODE TO PRINT THIS TERM.
            cout << "1/" << denom;

            if (finalTerm == term){
                // IF IT IS THE LAST TERM, FOLLOW IT WITH A =.
                cout << " = ";
            } else {
                // IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
                cout << " + ";
            }
            // WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
            sum += (double) 1 / denom;
            // increment the term counter
            term++;
        }

        // WRITE A LINE OF CODE TO PRINT THE SUM.
        cout << sum;
        // check if we are done
        cout << "\n\nDo you want to compute another series? (y/n) ";
        cin  >> doAgain;
    }

    return 0;
}