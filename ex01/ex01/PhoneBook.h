#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.h"

class PhoneBook {

private:
    // an array to store contacts - fixed size of 8 (as per subject)
    Contact contacts;

    // an index to keep track of the next available slot
    int nextContactIndex;

public:
    // Construuctor
    PhoneBook();

    // add a new ocntact
    void addContact(const Contact& contact);
    void searchContact() const; // a read-only function
    void displayContacts(const Contact& contact) const;
};



#endif