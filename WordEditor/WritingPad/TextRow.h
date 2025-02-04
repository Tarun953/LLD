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
        if (textRow_.size() > col)
        {
        }
        else
        {
        }
    }
};
