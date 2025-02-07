#ifndef OPIECE_INCLUDED
#define OPIECE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPiece.h>
#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPieceType.h>

class OPiece : public PlayingPiece
{
public:
    OPiece() = default;
    OPiece(PlayingPieceType _playingPieceType)
    {
        playingPieceType_ = _playingPieceType;
    }
    ~OPiece() = default;
};
#endif