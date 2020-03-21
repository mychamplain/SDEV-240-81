// Reference: https://gist.github.com/ravichandrae/cd458795c7fab56295ec
// Reference: https://en.wikipedia.org/wiki/Fibonacci_number

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

// Function prototypes
int getIndex(int number);

int main() {
    int number;
    cout<<"Enter a number: ";
    cin >> number;

    // get the square root of 5 x number x number + 4 (as double)
    double root = sqrt(5.0*number*number+4.0);
    // cast to long long
    long long iRoot = root;
    // if the double and long is equal the this is a fibonacci
    if( root == iRoot )
    {
        cout << getIndex(number) << " is a fibonacci index of " << number;
    }
    else
    {
        // get the square root of 5 x n x n - 4 (as double)
        root = sqrt(5.0*number*number-4.0);
        // cast to long long
        iRoot = root;
        // if the double and long is equal the this is a fibonacci
        if( root == iRoot )
        {
            cout << getIndex(number) << " is the fibonacci index of " << number;
        }
        else
        {
            cout << getIndex(number) << " is the closest fibonacci index of " << number;
        }
    }
    return 0;
}

int getIndex(int number)
{
    // the smallest are basic
    if(number == 0){
        return 1;
    } else if(number == 1){
        return 2;
    } else if(number == 2){
        return 4;
    }
    // now we start with the bigger numbers
    int index = 4;
    int previous = 2;
    int next  = 3;

    // Get and index
    while (true){
        // increment the index only when closest
        if (abs(number - previous) > abs(number - next)) {
            index++;
        }
        // close the loop when next is greater
        if (next > number){
            break;
        }
        // calculate the next Fibonacci number
        int sum = previous + next;
        previous = next;
        next = sum;
    }
    return index;
}
