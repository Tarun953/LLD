#include </home/tarun/LLD/WordEditor/WritingPad/WritingPad.h>
#include <iostream>

int main()
{
    WritingPad _writingPad;

    // char _value, std::string _fontName, std::string _fontSize, bool _isItalic, bool _isBold, int _row, int _col
    _writingPad.addCharacter('1', "Arabic", "10", true, true, 1, 1);
    _writingPad.addCharacter(' ', "Arabic", "10", true, true, 2, 1);
    _writingPad.printText();

    return 0;
}
