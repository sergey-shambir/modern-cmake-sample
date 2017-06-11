#include "hello.h"
#include <ostream>
#include <string_view>

using namespace std;

namespace hello
{
void PrintHello(std::ostream& stream)
{
    stream << "hello!"sv << std::endl;
}
}
