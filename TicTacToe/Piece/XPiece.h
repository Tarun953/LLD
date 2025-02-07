#ifndef XPIECE_INCLUDED
#define XPIECE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPiece.h>
#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPieceType.h>

class XPiece : public PlayingPiece
{
public:
    XPiece() = default;
    XPiece(PlayingPieceType _playingPieceType)
    {
        playingPieceType_ = _playingPieceType;
    }
    ~XPiece() = default;
};
#endif