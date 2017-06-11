#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "libgoodbye/goodbye.h"
#include <sstream>

TEST_CASE("Goodbye printed", "[PrintGoodbye]" ) {
    std::ostringstream stream;
    goodbye::PrintGoodbye(stream);
    REQUIRE(stream.str() == "goodbye!\n");

    goodbye::PrintGoodbye(stream);
    REQUIRE(stream.str() == "goodbye!\n" "goodbye!\n");
}

TEST_CASE("Goodbye appends to stream", "[PrintGoodbye]" ) {
    std::ostringstream stream;
    stream << "I said ";
    goodbye::PrintGoodbye(stream);
    REQUIRE(stream.str() == "I said goodbye!\n");
}
