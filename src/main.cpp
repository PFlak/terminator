#include <iostream>
#include <tclap/CmdLine.h>
#include "Colors.h"

int main(int argc, char const *argv[])
{


    for (size_t i = 0; i < argc; i++)
    {
        std::cout<<colors::TEXT::GREEN<<argv[i]<<colors::RESET<<std::endl;
    }

    return 0;
}

