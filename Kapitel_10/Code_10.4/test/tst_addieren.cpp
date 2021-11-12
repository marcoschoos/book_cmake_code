#include "gtest/gtest.h"
#include "mathe.h"

TEST(Addieren, KleineZahlen)
{
    Mathe mathe;

    EXPECT_EQ(mathe.addieren(2, 3), 5);
    EXPECT_EQ(mathe.addieren(2, 8), 10);
    EXPECT_NE(mathe.addieren(2, 8), 4);
}

TEST(Addieren, NegativeZahlen)
{
    Mathe mathe;

    EXPECT_EQ(mathe.addieren(-2, -3), -5);
    EXPECT_EQ(mathe.addieren(-2, -8), -10);
    EXPECT_NE(mathe.addieren(-2, -8), 4);
}
