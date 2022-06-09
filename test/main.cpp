#include <string>
#include <iostream>

#include <cppblowfish.h>

int main() {
    std::string key = "test@pass47";  // "SimonCriesRightNow1234";
    std::string message = "My name is Avinal and I am cute";  // "Hello, Jasmine. I miss you.";

    cppblowfish::BlowfishContext blowfish (key);

    cppblowfish::Buffer input (message.c_str(), message.size());
    cppblowfish::Buffer cipher;
    cppblowfish::Buffer output;

    blowfish.encrypt(input, cipher);

    std::cout << "Cipher: " << cipher << std::endl;

    blowfish.decrypt(cipher, output);

    std::cout << "Original message: " << output << std::endl;
}
