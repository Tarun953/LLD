#include <C:\Users\HalfVampire\Documents\LLD\ChessGame\Board\ChessBoard.h>

class Move
{
public:
    Move() = default;
    virtual ~Move() = default;

    virtual bool canMove(ChessBoard _chessBoard, int _startRow, int _startCol, int _endRow, int _endCol) = 0;
};
