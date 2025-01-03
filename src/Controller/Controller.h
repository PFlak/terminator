#include <string.h>

class Controller
{
private:
    bool check_cache_dir();
public:
    Controller(/* args */);
    ~Controller();

    int init();
    int init(std::string api_key);
};
