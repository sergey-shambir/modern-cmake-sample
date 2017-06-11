#include <iostream>
#include "libgoodbye/goodbye.h"
#include "libhello/hello.h"

int main(int /*argc*/, char* /*argv*/[])
{
    hello::PrintHello(std::cout);
    goodbye::PrintGoodbye(std::cout);
}
