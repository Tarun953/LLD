#ifndef NUMERIC_CHARACTER_INCLUDED
#define NUMERIC_CHARACTER_INCLUDED

#include </home/tarun/LLD/WordEditor/Character/Character.h>
#include <string>

class NumericCharacter : public Character
{
public:
    NumericCharacter() = default;
    ~NumericCharacter() = default;

    NumericCharacter(char _value, std::string _fontName, std::string _fontSize, bool _isItalic, bool _isBold)
    {
        value_ = _value;
        fontName_ = _fontName;
        fontSize_ = _fontSize;
        isBold_ = _isBold;
        isItalic_ = _isItalic;
    }

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