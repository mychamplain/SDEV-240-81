// Lab 3 table.cpp
// This program reads data from a file and
// prints it in a nicely aligned table.
// Llewellyn van der Merwe

#include <iostream>
// INCLUDE THE FILE NEEDED TO USE FILES.
// INCLUDE THE FILE NEEDED TO FORMAT OUTPUT.
// INCLUDE THE FILE NEEDED TO USE STRINGS.
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string code,     // Item code of an inventory item
    description;     // Description of an inventory item
    int quantity;    // Quantity in stock of an inventory item

    // values for controlling format
    // adapted from http://www.cplusplus.com/forum/beginner/181119/
    const int code_width = 15;
    const int dsc_width =  30;
    const int qty_width = 15;
    const int num_fields = 3;
    const std::string spacer = " |";
    const int total_width = code_width + dsc_width + qty_width + spacer.size() * num_fields;
    const std::string line = spacer + std::string( total_width-1, '-' ) + '|';

    ifstream dataIn; // Define an input file stream object
    // WRITE A STATEMENT TO OPEN THE table.dat FILE THAT WILL BE
    dataIn.open("../table.txt");
    // little error checking
    if (dataIn.fail()) {
        cout << "Couldn't open the file, check your file path!" << endl;
        return 0;
    }
    // ACCESSED THROUGH THE dataIn FILE STREAM OBJECT.
    if (dataIn.is_open()) {
        // Print table heading
        cout << line << '\n' << std::setw(40) << "Warehouse Inventory" << '\n';
        std::cout << line << '\n' << spacer
            << std::setw(code_width) << "Item Code" << spacer << std::setw(dsc_width) << "Item Description" << spacer
            << std::setw(qty_width) << "Item Qty" << spacer << '\n' << line << '\n';

        // Read in five data records and display them
        while (dataIn >> code >> description >> quantity) {
            std::cout << spacer  << std::setw(code_width) << code << spacer << std::setw(dsc_width) << description << spacer
                      << std::setw(qty_width) << quantity << spacer << '\n';
        }
        std::cout << line << '\n' ;
        // REPEAT THE ABOVE CODE FOR RECORDS 2 THROUGH 5.
        // Close the file
        // WRITE A STATEMENT TO CLOSE THE DATA FILE.
        dataIn.close();
    }

    return 0;
}
