#include <iostream>
#include <string>
int
main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name; //ввод с клавиатуры имени
  std::cout << "Hello World from " << name << '!' << endl;
  return 0;
}
