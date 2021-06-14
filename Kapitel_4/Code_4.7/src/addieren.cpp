#define CATCH_CONFIG_MAIN 
#include "catch2/catch.hpp"

#include "mathe.h"

SCENARIO("Addieren zweier Integers")
{
    GIVEN("Zwei Integer Variablen")
    {
    	int a=4;
    	int b=2;
    	WHEN("Addition der beiden Variablen") 
    	{
    	     Mathe mathe;
    	     int ab = mathe.addieren(a,b);
    	     int aa = mathe.addieren(a,a);
    	     int bb = mathe.addieren(b,b);
    	     
    	     THEN("Sollte die Summe der beiden Variablen zurückgegeben werden") 
    	     {
    	     	REQUIRE(ab == 6);
    	     	REQUIRE(aa == 8);
    	     	REQUIRE(bb == 4);
    	     }
    	}
    }
}
    	


