#include <iostream>
#include <string>
#include <cctype>

void title(std::string s);

int main() {
    std::string s1 = "hello";

    title(s1);
    std::cout << s1 << std::endl;


    return 0;
}


void title (std::string s) {
    s[0] = to_upper
}