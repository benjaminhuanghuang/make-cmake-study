#include "hello.h"
#include <string>
#include <iostream>

namespace hello
{
    Hello::Hello(){

    }
    Hello::~Hello(){

    }

    std::string Hello::getMessage(std::string input){
      return input;
    }
} // namespace hello
