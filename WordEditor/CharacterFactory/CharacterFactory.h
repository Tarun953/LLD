#ifndef CHARACTER_FACTORY_INCLUDED
#define CHARACTER_FACTORY_INCLUDED

#include </home/tarun/LLD/WordEditor/Character/Character.h>
#include </home/tarun/LLD/WordEditor/Character/AlphabetCharacter.h>
#include </home/tarun/LLD/WordEditor/Character/NumericCharacter.h>
#include </home/tarun/LLD/WordEditor/Character/SpecialCharacter.h>
#include <string>
#include <map>
#include <vector>

class CharacterFactory
{
private:
    std::map<std::string, Character *> characterFactory_;

public:
    CharacterFactory() = default;
    ~CharacterFactory() = default;

    Character *buildCharacter_(char _value, std::string _fontName, std::string _fontSize, bool _isItalic, bool _isBold)
    {
        std::string _hash = buildHash(_value, _fontName, _fontSize, _isItalic, _isBold);
        if (characterFactory_.find(_hash) != characterFactory_.end())
        {
            return characterFactory_[_hash];
        }
        else
        {
            if ((_value >= 'A' && _value <= 'Z') || (_value >= 'a' && _value <= 'z'))
            {
                Character *_character = new AlphabetCharacter(_value, _fontName, _fontSize, _isItalic, _isBold);
                characterFactory_[_hash] = _character;
                return _character;
            }
            else if (_value >= '0' && _value <= '9')
            {
                Character *_character = new NumericCharacter(_value, _fontName, _fontSize, _isItalic, _isBold);
                characterFactory_[_hash] = _character;
                return _character;
            }
            else
            {
                Character *_character = new SpecialCharacter(_value, _fontName, _fontSize, _isItalic, _isBold);
                characterFactory_[_hash] = _character;
                return _character;
            }
        }
    }

    std::string buildHash(char _value, std::string _fontName, std::string _fontSize, bool _isItalic, bool _isBold)
    {
        std::string _hash = "";
        _hash += _value;
        _hash += '-';
        _hash += _fontName;
        _hash += '-';
        _hash += _fontSize;
        if (_isBold)
        {
            _hash += "-b";
        }
        if (_isItalic)
            _hash += "-I";
        return _hash;
    }
};

#endif