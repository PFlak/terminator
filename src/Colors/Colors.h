#include <iostream>
#include <string.h>

namespace colors {
    namespace TEXT { 
        const std::string BLACK = "\033[0;30m";
        const std::string RED = "\033[0;31m";
        const std::string GREEN = "\033[0;32m";
        const std::string YELLOW = "\033[0;33m";
        const std::string BLUE = "\033[0;34m";
        const std::string PURPLE = "\033[0;35m";
        const std::string CYAN = "\033[0;36m";
        const std::string WHITE = "\033[0;37m";
    }

    namespace BOLD {
        const std::string BLACK = "\033[1;30m";
        const std::string RED = "\033[1;31m";
        const std::string GREEN = "\033[1;32m";
        const std::string YELLOW = "\033[1;33m";
        const std::string BLUE = "\033[1;34m";
        const std::string PURPLE = "\033[1;35m";
        const std::string CYAN = "\033[1;36m";
        const std::string WHITE = "\033[1;37m";
    }

    namespace UNDERLINE {
        const std::string BLACK = "\033[4;30m";
        const std::string RED = "\033[4;31m";
        const std::string GREEN = "\033[4;32m";
        const std::string YELLOW = "\033[4;33m";
        const std::string BLUE = "\033[4;34m";
        const std::string PURPLE = "\033[4;35m";
        const std::string CYAN = "\033[4;36m";
        const std::string WHITE = "\033[4;37m";
    }

    namespace BACKGROUND {
        const std::string BLACK = "\033[40m";
        const std::string RED = "\033[41m";
        const std::string GREEN = "\033[42m";
        const std::string YELLOW = "\033[43m";
        const std::string BLUE = "\033[44m";
        const std::string PURPLE = "\033[45m";
        const std::string CYAN = "\033[46m";
        const std::string WHITE = "\033[47m";
    }

    const std::string RESET = "\033[0m";
}