#include <iostream>

int addNumber(int first_param, int second_param) {
  return first_param + second_param;
}

int mulNumber(int first_number, int second_number) {
  return first_number * second_number;
}
int main() {
  int first_number{13};
  int second_number{7};

  std::cout << "First Number is : " << first_number << std::endl;
  std::cout << "Second number is : " << second_number << std::endl;

  int sum = first_number + second_number;

  std::cout << "Not using function, the sum is " << sum << std::endl;
  std::cout << "With the help of function the sum is "
            << addNumber(first_number, second_number) << std::endl;

  std::cout << "The multiple of the two number is "
            << mulNumber(first_number, second_number) << std::endl;
  return 0;
}