#ifndef CHARACTER_INCLUDED
#define CHARACTER_INCLUDED

#include <string>

class Character
{
public:
    Character() = default;
    virtual ~Character() = default;

    char value_;
    std::string fontName_;
    std::string fontSize_;
    bool isBold_, isItalic_;

    virtual std::string getValue() = 0;
};

#endif