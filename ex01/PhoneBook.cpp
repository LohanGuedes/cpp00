#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : _index(0), _current(0) { return; }

PhoneBook::~PhoneBook() { return; }

void PhoneBook::add() {

  if (this->_current == LIST_CAP) {
    this->_current = 0;
    this->_contacts[this->_current].askFirstName();
    this->_contacts[this->_current].askLastName();
    this->_contacts[this->_current].askPhoneNumber();
    this->_contacts[this->_current].askDarkestSecret();
    this->_contacts[this->_current].assignId(this->_current);

    this->_current++;
    return;
  }

  return;
}
void PhoneBook::search() const { return; }
void PhoneBook::exit() { return; }
void PhoneBook::execCommand(std::string input) {

  if (input == "ADD") {
    this->add();
  }
  if (input == "SEARCH") {
    this->search();
  }
  if (input == "EXIT") {
    this->exit();
  } else {
    std::cout << "NOT A VALID COMMAND! Try again." << std::endl;
  }
}
