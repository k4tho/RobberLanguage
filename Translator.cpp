#include "Translator.h"
#include <string>

Translator::Translator() {
}

Translator::~Translator() {
}

std::string Translator::translateEnglishWord(std::string str) {
    Model model;

    std::string translatedWord = "";

    for (unsigned int i = 0; i < str.size(); ++i) {
        char letter = str.at(i);
        if ((tolower(letter) == 'a') || (tolower(letter) == 'e') || (tolower(letter) == 'i') || (tolower(letter) == 'o') || (tolower(letter) == 'u')) {
            translatedWord += model.translateSingleVowel(letter);
        }
        else {
            translatedWord += model.translateSingleConsonant(letter);
        }
    }
    return translatedWord;
}

std::string Translator::translateEnglishSentence(std::string str) {
    Model model;
    std::string translatedWord = "";

    for (unsigned int i = 0; i < str.size(); ++i) {
        char letter = str.at(i);
        if (isalpha(letter)) {
            if ((tolower(letter) == 'a') || (tolower(letter) == 'e') || (tolower(letter) == 'i') || (tolower(letter) == 'o') || (tolower(letter) == 'u')) {
                translatedWord += model.translateSingleVowel(letter);
            }
            else {
                translatedWord += model.translateSingleConsonant(letter);
            }
        }
        else {
            translatedWord += letter;
        }
    }
    return translatedWord;
}