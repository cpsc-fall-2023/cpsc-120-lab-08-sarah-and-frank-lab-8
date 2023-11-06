// Sarah Baez
// ssarahbaezz@csu.fullerton.edu
// @sbaez-00
// Partners: @Mrfrankrangel

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number.\n";
    return 1;
  }

  bool skip_first{true};
  int nums_arg{0};
  double sum{0};
  for (std::string& count : arguments) {
    if (skip_first) {
      skip_first = false;
      continue;
    }
    nums_arg++;
    sum += stod(count);
  }
  double average{sum / nums_arg};
  std::cout << "average = " << average << "\n";

  return 0;
}
