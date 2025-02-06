#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

// Contact class
class Contact {

private: // private meaning that these can ony be access from within the contact class
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string secret;

public:
    // Contructor to initialize contact details
    // arguments are passsed by reference to avoid unnecessary copying
    // with or without & ???
    Contact(
        const std::string& firstName,
        const std::string& lastName,
        const std::string& nickname,
        const std::string& phoneNumber,
        const std::string& secret
    );

    // default constructor
    Contact();

    // getters to access contact details
    // Public member functions - they prove read-only access to private member variables
    // const keyword at the end means they DO NOT modify the state of the contact object
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getSecret() const;
};

#endif
