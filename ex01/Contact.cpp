# include "Contact.h"
// Implement the member functions of the class Contact which is in contact.h

// Constructor implementation (using an initialization list (this vs. assiging them in the constuctor body))
// initializing member vatriables in a c++ constructor using an initializatin list 
// initializing member vatriables in a c++ constructor by assigning alues whithin the contstors body
//

// difference : first method is more efficient  - good for const objects or complex objects
// second method : creates tempotaty objects
// const and reference members must be initialized usig an initialization list 
// as they cannot be assigned values after they're declared.
// second is okay for simple types like int and boolean
// memers are initialized in the order theyre declared in the class definistion 

/*
Contact::Contact(
    const std::string& firstName,
    const std::string& lastName,
    const std::string& nickname,
    const std::string& phoneNumber,
    const std::string& secret
)
{
this->firstName = firstName;
...abs
}
*/

// why a reference type?
// reference is like an alis, an alternate name for the same memory location
// 
// passing std::string objects by reference avoids unnecessary copying
// so we're only passing memory address of the object

// in the getter emethods, returning a std::string by reference could potentiall allow external code to modify
// the private memeber variables of the contact object
// to avoid this, we return the data by value  (which creates a copy of the string)


// Implement the default constructor
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
    // empty constructor body (since im using an initialization list)
}

// simply returns the value of the correspoding private memeber variable
// const keyword indicates that these methos do  not modift the object's state

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
