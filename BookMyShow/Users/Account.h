#include <string>

class Account
{
private:
    /* data */
public:
    Account() = default;
    ~Account() = default;

    std::string username_;
    std::string password_;
};