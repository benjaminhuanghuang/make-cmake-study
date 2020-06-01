#ifndef HELLO_H
#define HELLO_H

#include <string>
#include <iostream>

namespace hello
{
  class Hello{
    public:
      Hello();
      ~Hello();
      std::string getMessage(std::string input);

    private:
      std::string input;
  };
}

#endif