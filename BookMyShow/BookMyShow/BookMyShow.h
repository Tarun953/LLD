#include </home/tarun/LLD/BookMyShow/BookMyShow/CinemaHall.h>
#include </home/tarun/LLD/BookMyShow/BookMyShow/Movie.h>
#include <string>
#include <vector>

class BookMyShow
{
public:
    BookMyShow() = default;
    ~BookMyShow() = default;

    std::vector<CinemaHall> cinemaHalls_;

    std::vector<Movie> getMovies()
    {
    }

    std::vector<CinemaHall> getCinemaHalls()
    {
    }
};