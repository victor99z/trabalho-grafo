#include "HashGenerator.hpp"

std::string HashGenerator::generate(short length){
    std::string str;
    for(int i = 0; i < length; i++) {
        str.append(std::to_string(rand() % 10));
    }
    return str;
}