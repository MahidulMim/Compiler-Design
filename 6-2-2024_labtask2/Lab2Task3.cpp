#include <iostream>
#include <string>

bool isSingleLineComment(const std::string& line) {
    size_t pos = line.find("//");
    return pos == 0;
}

bool isMultiLineCommentStart(const std::string& line) {
    size_t pos = line.find("/*");
    return pos == 0;
}

bool isMultiLineCommentEnd(const std::string& line) {

    size_t pos = line.find("*/");
    return pos == 0;
}

bool isComment(const std::string& line) {
    return isSingleLineComment(line) || isMultiLineCommentStart(line) || isMultiLineCommentEnd(line);
}

int main() {
    std::string input;
    std::cout << "Enter a line of code: ";
    std::getline(std::cin, input);

    if (isComment(input)) {
        std::cout << "The given input is a comment line." << std::endl;
    } else {
        std::cout << "The given input is not a comment line." << std::endl;
    }

    return 0;
}

