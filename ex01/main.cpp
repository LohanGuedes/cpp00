#include "PhoneBook.hpp"
#include <iostream>
#include <istream>
#include <string>

int main(void) {
  PhoneBook phoneBook;
  std::string input;

  std::cout << "Welcome to PhoneBook." << std::endl
            << "Enter one of the Following commands: " << std::endl
            << "[ADD] [SEARCH] [EXIT]" << std::endl;
  while (42) {
    std::getline(std::cin, input);
    phoneBook.execCommand(input);
    std::cout << "What do you want to do next?" << std::endl;
  }
}
