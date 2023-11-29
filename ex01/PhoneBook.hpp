#include "Contacts.hpp"

#define LIST_CAP 8

class PhoneBook {

public:
  PhoneBook();
  ~PhoneBook();

  void add();
  void search() const; // Does not modify anything
  void execCommand(std::string input);
  void exit();

private:
  // Keep Track to the current index of the contact to be replaced
  int _index;
  Contact _contacts[8];
  int _current;
  void _validateInput();
};
