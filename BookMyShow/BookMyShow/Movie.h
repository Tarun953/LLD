#include </home/tarun/LLD/BookMyShow/enums/Genre.h>
#include <string>

class Movie
{
public:
    std::string movieId_;
    std::string movieName_;
    int duration_;
    std::string language_;
    Genre genre_;

    Movie() = default;
    ~Movie() = default;
};