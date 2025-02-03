#include </home/tarun/LLD/BookMyShow/Users/User.h>
#include </home/tarun/LLD/BookMyShow/Users/Account.h>
#include <string>

class SystemMember : public User
{
public:
    SystemMember() = default;
    ~SystemMember() = default;

    std::string userId_;
    Account account_;
    std::string name_;
    std::string email_;
    std::string address_;
};