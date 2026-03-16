#include <iostream> // Input/Output library
#include <string> // String data type library
int main()
{
std::string name; // Variable for user`s name
std::cout << "Введите имя пользователя: "; // Proposal to enter the name
std::getline(std::cin,name); // Reading data from the buffer
std::cout << "Hello world from @" << name << std::endl; // Print Hello world with user`s name
return 0; // Cleaning registers/stack
}
