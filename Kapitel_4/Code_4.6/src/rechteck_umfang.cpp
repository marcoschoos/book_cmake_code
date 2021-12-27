#include "catch2/catch.hpp"

#include "mathe.h"

SCENARIO("Berechnung eines Rechteckumfangs") {
  GIVEN("Zwei Integer Variablen") {
    int a = 4;
    int b = 2;
    WHEN("Berechnung eines Rechteckumfangs") {
      Mathe mathe;
      int ab = mathe.rechteck_umfang(a, b);
      int aa = mathe.rechteck_umfang(a, a);
      int bb = mathe.rechteck_umfang(b, b);

      THEN("Sollte der korrekte Umfang des Rechtecks berechnet werden") {
        REQUIRE(ab == 12);
        REQUIRE(aa == 16);
        REQUIRE(bb == 8);
      }
    }
  }
}
