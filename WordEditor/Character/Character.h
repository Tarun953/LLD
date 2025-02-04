#include </home/tarun/LLD/WordEditor/WritingPad/WritingPad.h>
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

    virtual void write(WritingPad _pad, int _posX, int _posY) = 0;
};
