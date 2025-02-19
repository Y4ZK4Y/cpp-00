#include "PhoneBook.h"
#include <iostream>
#include <iomanip>


// Constructor
PhoneBook::PhoneBook()
    : contacts(), nextContactIndex(0) {
    //initializing nextcontactindex to zero since phonebook empty
    for (int i = 0; i < 8; ++i) {
        contacts[i] = Contact("", "", "", "", "");
    }
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

    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name|last Name|Nickname" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;

    //display all contacts in a table
    for (int i = 0; i < 8; i++) {
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << contacts[i].getNickname() << "|" << std::endl;

    }
    std::cout << "|-------------------------------------------|" << std::endl;
    
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
