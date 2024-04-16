#ifndef __STRING_TOOLS_HPP
#define __STRING_TOOLS_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class StringTools {
    public:
        std::vector<std::string> splitString(const std::string& input, char delim);
        void centerJustify(int consoleWidth, std::string input, char fill);
};

#endif