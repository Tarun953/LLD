#ifndef PLAYER_INCLUDED
#define PLAYER_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPiece.h>
#include <string>

class Player
{
private:
    std::string name_;
    PlayingPiece *playingPiece_;

public:
    Player() = default;
    Player(PlayingPiece *_playingPiece)
    {
        playingPiece_ = _playingPiece;
    }
    Player(std::string _name, PlayingPiece *_playingPiece)
    {
        name_ = _name;
        playingPiece_ = _playingPiece;
    }
    ~Player() = default;

    std::string getPlayerName()
    {
        return name_;
    }

    PlayingPiece *getPlayingPiece()
    {
        return playingPiece_;
    }
};
#endif