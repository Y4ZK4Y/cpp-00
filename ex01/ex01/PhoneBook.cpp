# include "PhoneBook.h"
# include <iostream>
# include <iomanip> // output formatting - read about

// Implementing the member functions for the PhoneBook class
// the PhoneBook::PhoneBook() part indicates that this is a constructor
// we're using initilization list
// consturctr body is empty in thi case
//  we dont need to explicitly mention the contacts aray that was 
// in the phonebook class
// why ?
//handled automatically by the compliler 
// this happens for array of objects
//


// Constructor
PhoneBook::PhoneBook():
    nextContactIndex(0)
{
    //initializing nextcontactnedx to zero since phonebook empty
}

// add a new contact
void PhoneBook::addContact(const Contact& contact) {
    if (nextContactIndex == 8) {
        // if phonebook full, replace the oldest contact
        nextContactIndex = 0; // reset index and overwrite
    }
    contacts[nextContactIndex] = contact;
    nextContactIndex++;
}

// search for a contact
void PhoneBook::searchContact() const {

    std::cout << "|-----------------------------------------|" << std::endl;
    std::cout << "|        Index|Fist Name|last Name|Nickname" << std::endl;
    std::cout << "|-----------------------------------------|" << std::endl;

    //display all contacts in a table
    for (int i = 0; i < 8; i++) {
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        std::cout << setw(10) << contacts[i].getFirstName() << "|";
        std::cout << setw(10) << contacts[i].getLastName() << "|";
        std::cout << setw(10) << contacts[i].getNickname() << "|" << std::endl;

    }
    std::cout << "|---------------------------|" << std::endl;
    
    // prompt the user for the index of the entry
    int index;
    std::cout << "Enter the inex of the contact: ";
    std::cin >> index;

    if (index > 0 && index <= 8) {
        displayContacts(contacts[index - 1]);
    } else {
        std::cout << "Contact does not exist" << std::endl;
    }
}


void PhoneBook::displayContacts(const Contact& contacts) const {
    std::cout << "First Name: " << contacts.getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts.getLastName() << std::endl;
    std::cout << "Nickname: " << contacts.getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts.getPhoneNumber() << std::endl;
    std::cout << "Secret: " << contacts.getSecret() << std::endl; 
}
