#include "hello.h"

int main(){
  hello::Hello h;
  std::cout << h.getMessage("Greeting") << std::endl;
  return 0;
}