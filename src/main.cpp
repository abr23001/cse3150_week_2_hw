#include <iostream>
#include <string>
#include "greeting_utils.h"


using std::cout, std::endl, std::string, std::getline, GreetingUtils::create_message, GreetingUtils::format_as_c_string;

int main() {
    string name;
    cout << "Enter your name: " << endl;
    getline(std::cin, name);

    string greeting = create_message(name);
    char* c_string = format_as_c_string(greeting);

    cout << c_string << endl;
    delete[] c_string;







}
