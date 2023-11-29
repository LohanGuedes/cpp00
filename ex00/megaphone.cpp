#include <iostream>
#include <string>

void printArg(char *arg) {
  for (int i = 0; arg[i]; i++) {
    std::cout << char(toupper(arg[i]));
  }
}

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 1;
  }
  for (int i = 0; argv[i]; i++) {
    printArg(argv[i]);
  }
  std::cout << std::endl;
  return 0;
}
