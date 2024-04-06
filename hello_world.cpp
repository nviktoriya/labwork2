#include <iostream>
#include <string>
int
main()
{
  std::string name; //введение строковой переменной name
  std::cout << "Enter your name: ";
  std::cin >> name; //ввод с клавиатуры имени пользователя
  std::cout << "Hello World from " << name << '!' << endl;
  return 0;
}
