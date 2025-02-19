#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string secret;

public:
    Contact(
        const std::string& firstName,
        const std::string& lastName,
        const std::string& nickname,
        const std::string& phoneNumber,
        const std::string& secret
    );

    // default constructor
    Contact();

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getSecret() const;
};

#endif
