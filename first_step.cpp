#include <cstdlib>
#include <iostream>
#include <string>

#include "Message.hpp"

std::string say_hello() { return std::string("Hello, this is first step!!"); }

int main() {
  Message say_hello("Hello, this is Message!!");
  std::cout << say_hello << std::endl;
  
  Message say_goodbye("Bye!!");
  std::cout << say_goodbye << std::endl;

  return EXIT_SUCCESS;
}
