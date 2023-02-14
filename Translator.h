#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"
#include <string>

class Translator {
public:
    Translator();
    ~Translator();
    std::string translateEnglishWord(std::string str);
    std::string translateEnglishSentence(std::string str);
};

#endif