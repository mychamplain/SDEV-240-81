/* IMPORTANT: TO GUARANTEE THAT THIS PROGRAM RUNS, PUT THE PROJECT 
   DOCUMENT (FILE) IN THE SAME FOLDER/DIRECTORY AS THIS FILE        */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char character;
    char previous_character;
    int count = 0;
    ifstream in_stream;

    in_stream.open("../Sheet.txt");  // This is an input file to process
	in_stream.get(character);
	for ( ; ! in_stream.fail() ; ) /* alternative: 'while (! in_stream.eof())' */
    {
        count++;
        // cout << character << endl;
        previous_character = character;
        in_stream.get(character);
    }
    in_stream.close();

    cout << "The total number of characters in 'Sheet.txt', ";
    cout << "is " << count << ".\n";
    if (count > 1)
        cout << "The last character is a '" << previous_character << "'.\n";

    return 0;
}
