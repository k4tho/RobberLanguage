#ifndef MODEL_H
#define MODEL_H

#include <string>

class Model {
    public:
        Model();
        ~Model();
        std::string translateSingleConsonant(char chr);
        std::string translateSingleVowel(char chr);
};

#endif