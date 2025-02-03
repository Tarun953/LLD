#include <C:\Users\HalfVampire\Documents\LLD\ChessGame\Board\ChessBoard.h>

class PawnPiece
{
private:
    char color_;
    char type_;

public:
    PawnPiece(char _color, char _type) : color_(_color), type_(_type) {};
    ~PawnPiece() = default;

    bool canMove(ChessBoard _chessBoard, int _startRow, int _startCol, int _endRow, int _endCol)
    {
        if (color_ == 'B')
        {
        }
        else
        {
        }
    }
};
