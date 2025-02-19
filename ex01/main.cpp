# include "PhoneBook.h"
# include <iostream>
# include <string>

int main() {
    PhoneBook phonebook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            std::string firstName, lastName, nickname, phoneNumber, secret;
            std::cout << "Enter First Name: ";
            std::cin >> firstName;
            std::cout << "Enter Last Name: ";
            std::cin >> lastName;
            std::cout << "Enter Nickname: ";
            std::cin >> nickname;
            std::cout << "Enter Phone Number: ";
            std::cin >> phoneNumber;
            std::cout << "Enter Secret: ";
            std::cin >> secret;

            Contact newContact(firstName, lastName, nickname, phoneNumber, secret);
            phonebook.addContact(newContact);
        } else if (command == "SEARCH") {
            phonebook.searchContact();
        } else if (command == "EXIT") {
            break ;
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }
    return 0;
}
