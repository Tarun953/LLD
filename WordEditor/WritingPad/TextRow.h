#ifndef TEXT_ROW_INCLUDED
#define TEXT_ROW_INCLUDED

#include </home/tarun/LLD/WordEditor/Character/Character.h>
#include <vector>
#include <string>

class TextRow
{
private:
    std::vector<Character *> textRow_;

public:
    TextRow()
    {
        textRow_.clear();
    }
    ~TextRow() = default;

    void addCharacter(Character *_character, int _col)
    {
        textRow_.push_back(_character);
        if (textRow_.size() >= _col)
        {
            if (textRow_[_col - 1] == NULL)
            {
                textRow_[_col - 1] = _character;
            }
        }
        else
        {
            textRow_.push_back(_character);
        }
        return;
    }

    Character *getCharacter(int _col)
    {
        if (textRow_.size() >= _col)
            return textRow_[_col - 1];
        else
            return NULL;
    }

    std::vector<Character *> getLine()
    {
        return textRow_;
    }
};

#endif