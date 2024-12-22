#include <iostream>
#include "InputParser.h"

int main(int argc, char const *argv[])
{
    InputParser IP = InputParser();

    for (size_t i = 0; i < argc; i++)
    {
        std::cout<<argv[i]<<std::endl;
    }

    return 0;
}
