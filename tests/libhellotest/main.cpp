#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "libhello/hello.h"
#include <sstream>

TEST_CASE("Hello printed", "[PrintHello]" ) {
    std::ostringstream stream;
    hello::PrintHello(stream);
    REQUIRE(stream.str() == "hello!\n");

    hello::PrintHello(stream);
    REQUIRE(stream.str() == "hello!\n" "hello!\n");
}

TEST_CASE("Hello appends to stream", "[PrintHello]" ) {
    std::ostringstream stream;
    stream << "I said ";
    hello::PrintHello(stream);
    REQUIRE(stream.str() == "I said hello!\n");
}
