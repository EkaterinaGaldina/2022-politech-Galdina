#include <iostream>
#include "functions.h"

int main() 
{
  std::cout << "2 * 2 = "<< mul("2", "2") << std::endl;
  std::cout << "3 * 5 = "<< mul("3", "5") << std::endl;
  std::cout << "4 * 5 = "<< mul("4", "5") << std::endl;
  std::cout << "5 * 0 = "<< mul("5", "0") << std::endl;
  return 0;
}