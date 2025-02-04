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

    void write(WritingPad _pad, int _posX, int _posY) override
    {
    }
};
