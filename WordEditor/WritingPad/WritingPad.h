#ifndef WRITING_PAD_INCLUDED
#define WRITING_PAD_INCLUDED

#include </home/tarun/LLD/WordEditor/WritingPad/TextRow.h>
#include </home/tarun/LLD/WordEditor/Character/Character.h>
#include </home/tarun/LLD/WordEditor/CharacterFactory/CharacterFactory.h>
#include <vector>
#include <iostream>

class WritingPad
{
private:
    std::vector<TextRow> board_;
    CharacterFactory characterFactory_;

public:
    // Constructor and Destructors
    WritingPad() = default;
    ~WritingPad() = default;

    void addCharacter(char _value, std::string _fontName, std::string _fontSize, bool _isItalic, bool _isBold, int _row, int _col)
    {
        // There are two cases in the following
        Character *_character = characterFactory_.buildCharacter_(_value, _fontName, _fontSize, _isItalic, _isBold);

        // Case I: when the amount of rows are present
        if (board_.size() >= _row)
        {
            board_[_row - 1].addCharacter(_character, _col);
        }
        // Case II: When the amount of rows are less than the required number of rows
        else
        {
            board_.push_back(TextRow());
            board_[(int)board_.size() - 1].addCharacter(_character, _col);
        }
        return;
    }

    void printText()
    {
        for (auto it : board_)
        {
            std::vector<Character *> _characters = it.getLine();
            for (auto _character : _characters)
            {
                std::cout << _character->getValue();
            }
            std::cout << "\n";
        }
    }
};

#endif