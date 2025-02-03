#include <C:\Users\HalfVampire\Documents\LLD\ChessGame\Move\Move.h>
#include <C:\Users\HalfVampire\Documents\LLD\ChessGame\Board\ChessBoard.h>
#include <vector>

class Piece
{
private:
    char color_;
    char type_;
    std::vector<Move *> moves_;

public:
    Piece(char _color, char _type) : color_(_color), type_(_type) {};
    Piece(char _color, char _type, std::vector<Move *> _moves)
    {
        Piece(_color, _type);
        moves_.clear();
        for (auto it : _moves)
        {
            moves_.push_back(it);
        }
    }
    ~Piece() = default;

    Piece createPiece(char _color, char _type)
    {
        return Piece(_color, _type);
    }

    Piece createPiece(char _color, char _type, std::vector<Move *> _moves)
    {
        return Piece(_color, _type, _moves);
    }

    bool canMove(ChessBoard _chessBoard, int _startRow, int _startCol, int _endRow, int _endCol)
    {
        for (auto it : moves_)
        {
            if (it->canMove(_chessBoard, _startRow, _startCol, _endRow, _endCol))
                return true;
        }
        return false;
    }
};
