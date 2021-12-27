#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include "mathe.h"

SCENARIO("Berechnung einer Rechteckfläche") {
  GIVEN("Zwei Integer Variablen") {
    int a = 4;
    int b = 2;
    WHEN("Berechnung einer Rechteckfläche") {
      Mathe mathe;
      int ab = mathe.rechteck_flaeche(a, b);
      int aa = mathe.rechteck_flaeche(a, a);
      int bb = mathe.rechteck_flaeche(b, b);

      THEN("Sollte die korrekte Fläche des Rechtecks berechnet werden") {
        REQUIRE(ab == 8);
        REQUIRE(aa == 16);
        REQUIRE(bb == 4);
      }
    }
  }
}
