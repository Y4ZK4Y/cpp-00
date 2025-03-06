#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.h"

class PhoneBook {
private:
    // an array to store contacts - fixed size of 8 (as per subject)
    Contact contacts[8];

    // an index to keep track of the next available slot
    int nextContactIndex;

public:
    // Constructor
    PhoneBook();
    void addContact(const Contact& contact);
    void searchContact() const;
    void displayContacts(const Contact& contact) const;
};

#endif
