#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include "mathe.h"

TEST_CASE("Rechtecksflaeche berechnen", "[flaeche]")
{
    Mathe mathe;

    REQUIRE(mathe.rechteck_flaeche(1, 5) == 5);
    REQUIRE(mathe.rechteck_flaeche(7, 3) == 21);
}

SCENARIO("Addition zweier Integers", "[addieren]")
{
    GIVEN("Zwei Integer Variablen")
    {
        int a = 4;
        int b = 2;
        WHEN("Addition der beiden Variablen")
        {
            Mathe mathe;
            int ab = mathe.addieren(a, b);
            int aa = mathe.addieren(a, a);
            int bb = mathe.addieren(b, b);

            THEN("Korrekte Summe wird berechnet")
            {
                REQUIRE(ab == 6);
                REQUIRE(aa == 8);
                REQUIRE(bb == 4);
            }
        }
    }
}
