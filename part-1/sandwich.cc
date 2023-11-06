// Sarah Baez
// ssarahbaezz@csu.fullerton.edu
// @sbaez-00
// Partners: @Mrfrankrangel

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "error: you must supply three arguments" << std::endl;
    return 1;
  }

  std::vector<std::string> arguments(argv, argv + argc);

  std::string protien = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: A " << protien << " sandwich on " << bread
            << " with " << condiment << "." << std::endl;

  return 0;
}
