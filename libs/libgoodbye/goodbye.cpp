#include "goodbye.h"
#include <ostream>
#include <string_view>

using namespace std;

namespace goodbye
{
void PrintGoodbye(std::ostream& stream)
{
    stream << "goodbye!"sv << std::endl;
}
}
