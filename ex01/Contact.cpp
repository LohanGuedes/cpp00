#include "Contacts.hpp"
#include <iostream>
#include <string>

Contact::Contact() : _id(0) {}

Contact::~Contact() {}

bool Contact::validateInput(std::string input,
                            validateType_e validation) const {
  if (input[1])
    std::cout << "Input Validated!" << std::endl;
  switch (validation) {
  case v_Name:
    return true;
    break;
  case v_phoneNumber:
    return true;
    break;
  case v_dakestSecret:
    return true;
    break;
  default:
    return false;
  }
  return false;
}

std::string Contact::askInput(validateType_e validation,
                              std::string questionSpecifier) const {
  std::string input;
  do {
    (void)input.empty();
    std::cout << "Write Your " << questionSpecifier << ": ";
    std::getline(std::cin, input);
    std::cout << std::endl;
  } while (!validateInput(input, validation));
  return input;
}

void Contact::askFirstName() { this->_firstName = askInput(v_Name, FIRSTNAME); }

void Contact::askLastName() { this->_lastName = askInput(v_Name, LASTNAME); }

void Contact::askPhoneNumber() {
  this->_phoneNumber = askInput(v_phoneNumber, PHONENUMBER);
}

void Contact::askDarkestSecret() {
  this->_darkestSecret = askInput(v_dakestSecret, DARKESTSECRET);
}

void Contact::assignId(size_t id) {
  this->_id = id;
  return;
}
