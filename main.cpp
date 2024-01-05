#include <iostream>
#include <string>

void centerJustify(int consoleWidth, std::string text, char fill) {
	int stringLen = text.length();
	int spaceLen = (consoleWidth - stringLen) / 2;

	if (stringLen % 2 == 0) {
		for (int i = 0; i < spaceLen; i++) {
			std::cout << fill;
		}

		std::cout << text;

		for (int i = 0; i < spaceLen; i++) {
			std::cout << fill;
		}

		std::cout << std::endl;
	}
	else {
		for (int i = 0; i < spaceLen; i++) {
			std::cout << fill;
		}

		std::cout << text;

		for (int i = 0; i <= spaceLen; i++) {
			std::cout << fill;
		}

		std::cout << std::endl;
	}
}