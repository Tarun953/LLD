#include </home/tarun/LLD/BookMyShow/BookMyShow/Screen.h>
#include <string>
#include <vector>

class CinemaHall
{
public:
    std::string cinemaHallId_;
    std::string cinemaHallName_;
    std::vector<Screen> screens_;

    CinemaHall() = default;
    ~CinemaHall() = default;

    // This shoukd be a subject for the observers so that whenever a show gets added all the observers get notified regarding the same
    // void addShow(Show _show)
    // {
    //     showList_.push_back(_show);
    // }

    // std::vector<Show> listShows()
    // {
    //     return showList_;
    // }

    // std::string getCinemaHallName()
    // {
    //     return cinemaHallName_;
    // }
};
