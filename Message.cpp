#include "Message.hpp"

#include <iostream>
#include <string>

std::ostream &Message::printObject(std::ostream &os) {
  os << "This is my handsome message: " << std::endl;
  os << message_;

  return os;
}
