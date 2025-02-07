#ifndef PLAYING_PIECE_INCLUDED
#define PLAYING_PIECE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPieceType.h>

class PlayingPiece
{
public:
    // Constructor and Destructor
    PlayingPiece() = default;
    PlayingPiece(PlayingPieceType _playingPieceType)
    {
        playingPieceType_ = _playingPieceType;
    }
    ~PlayingPiece() = default;

    // PlayingPieceType
    PlayingPieceType playingPieceType_;
};
#endif