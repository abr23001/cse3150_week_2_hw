#include <iostream>
#include <string>
#include "greeting_utils.h"



using std::cout, std::endl, std::string;

namespace GreetingUtils {
    string create_message(const string &name) {
        string result = "Hello, " + name + "!";
        return result;
    }


    char* format_as_c_string(const string &msg) {
        char* parray = new char[msg.size()+1];

        for (int i=0; i < msg.size(); i++) {
            parray[i] = msg[i];
        }
        parray[msg.size()] = '\0';
        return parray;
    }
}
