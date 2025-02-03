#include <string>

class User
{
public:
    User() = default;
    virtual ~User() = default;

    std::string userId_;
};