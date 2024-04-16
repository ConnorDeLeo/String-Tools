#include "./string_tools.hpp"

std::vector<std::string> StringTools::splitString(const std::string& input, char delim) {
    std::vector<std::string> tokens;
    std::istringstream stream(input);
    std::string token;

    while (std::getline(stream, token, delim)) {
        tokens.push_back(token);
    }

    return tokens;
}

void StringTools::centerJustify(int consoleWidth, std::string input, char fill) {
	int stringLen = input.length();
	int spaceLen = (consoleWidth - stringLen) / 2;
	
	for (int i = 0; i < spaceLen; i++) {
		std::cout << fill;
	}

	std::cout << input;

	for (int i = 0; i <= spaceLen; i++) {
		std::cout << fill;
	}

	if (stringLen % 2 == 0) {
		std::cout << std::endl;
	}
	else {
		std::cout << fill << std::endl;
	}
}