#include "vendingmachine.h" // Includes the header file for this class for class declaration visibility.
#include <iostream>
#include <vector>
#include <string>

// Definition of VendingMachine constructor.
VendingMachine::VendingMachine()
    : sodaTypes_()  // Initialization of sodaTypes_ vector. Explicit call to the constructor.
    , sodaNames_()
{
    std::cout << "Vending machine object constructed!" << std::endl;
}


// Will be called when the object is deleted. Could do clean-up tasks here.
VendingMachine::~VendingMachine()
{
    // Do nothing.
}


// Add a Soda to the sodaTypes_ vector by using the vector push_back() method (function).
void VendingMachine::addType(Soda s)
{
    sodaTypes_.push_back(s);
    sodaNames_.push_back(s.name_);
}

void VendingMachine ::printMenu()

{
    std::cout << "\n\nMENU\n\n";

    for (unsigned int i = 0; i < sodaNames_.size(); i++)
    {

    std::cout << sodaNames_.at(i) << std::endl;
    }
    std::cout << "\n";
}

// Print number of registered sodaTypes (types we added to the sodaTypes_ vector).
void VendingMachine::printInventory()
{
    std::cout << "Number of soda types registered: " << sodaTypes_.size() << std::endl;
}
