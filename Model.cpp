#include "Model.h"

Model::Model() {
}

Model::~Model() {
}

std::string Model::translateSingleConsonant(char chr) {
    std::string newString = "";
    newString += chr;
    newString.append("o");
    newString += chr;

    return newString;
}

std::string Model::translateSingleVowel(char chr) {
    std::string newString = "";
    newString += chr;

    return newString;
}