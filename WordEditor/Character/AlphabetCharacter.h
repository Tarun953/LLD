#ifndef ALPHABET_CHARACTER_INCLUDED
#define ALPHABET_CHARACTER_INCLUDED

#include </home/tarun/LLD/WordEditor/Character/Character.h>
#include <string>

class AlphabetCharacter : public Character
{
public:
    AlphabetCharacter() = default;

    AlphabetCharacter(char _value, std::string _fontName, std::string _fontSize, bool _isItalic, bool _isBold)
    {
        value_ = _value;
        fontName_ = _fontName;
        fontSize_ = _fontSize;
        isBold_ = _isBold;
        isItalic_ = _isItalic;
    }

    ~AlphabetCharacter() = default;

    std::string getValue() override
    {
        std::string _hash = "";
        _hash += value_;
        _hash += '-';
        _hash += fontName_;
        _hash += '-';
        _hash += fontSize_;
        if (isBold_)
        {
            _hash += "-b";
        }
        if (isItalic_)
            _hash += "-I";
        return _hash;
    }
};

#endif