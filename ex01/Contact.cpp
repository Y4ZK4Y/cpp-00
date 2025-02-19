# include "Contact.h"

// default constructor
Contact::Contact()
    : firstName(""), lastName(""), nickname(""), phoneNumber(""), secret("") {
}

Contact::Contact(
    const std::string& firstName,
    const std::string& lastName,
    const std::string& nickname,
    const std::string& phoneNumber,
    const std::string& secret
):
    firstName(firstName),
    lastName(lastName),
    nickname(nickname),
    phoneNumber(phoneNumber),
    secret(secret)
{
    // empty constructor body (since i'm using an initialization list)
}

// Getter implementation
std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName; 
}

std::string Contact::getNickname() const {
    return nickname; 
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber; 
}

std::string Contact::getSecret() const {
    return secret; 
}
