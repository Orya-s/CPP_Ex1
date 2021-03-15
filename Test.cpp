/**
 * 
 * AUTHOR: Orya Spiegel
 * 
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

TEST_CASE("Good snowman code - all hat options")
{
    CHECK((snowman(11114411)) == ("\n _===_\n (.,.)\n ( : )\n ( : )\n"));
    CHECK((snowman(21214343)) == ("\n  ___ \n .....\n (o,.)\n (   )\\\n (___)\n"));
    CHECK((snowman(33421122)) == ("\n   _\n  /_\\ \n (-_o)\n>(] [)<\n (\" \")\n"));
    CHECK((snowman(44332211)) == ("\n  ___\n (_*_)\n\\(O O)/\n ( : )\n ( : )\n"));
}

TEST_CASE("Good snowman code - all nose options")
{
    CHECK((snowman(21214343)) == ("\n  ___ \n .....\n (o,.)\n (   )\\\n (___)\n"));
    CHECK((snowman(22332211)) == ("\n  ___ \n .....\n\\(O.O)/\n ( : )\n ( : )\n"));
    CHECK((snowman(33421122)) == ("\n   _\n  /_\\ \n (-_o)\n>(] [)<\n (\" \")\n"));
    CHECK((snowman(44332234)) == ("\n  ___\n (_*_)\n\\(O O)/\n (> <)\n (   )\n"));
}

TEST_CASE("Good snowman code - all left eye options")
{
    CHECK((snowman(11114411)) == ("\n _===_\n (.,.)\n ( : )\n ( : )\n"));
    CHECK((snowman(21214343)) == ("\n  ___ \n .....\n (o,.)\n (   )\\\n (___)\n"));
    CHECK((snowman(44332211)) == ("\n  ___\n (_*_)\n\\(O O)/\n ( : )\n ( : )\n"));
    CHECK((snowman(33421122)) == ("\n   _\n  /_\\ \n (-_o)\n>(] [)<\n (\" \")\n"));
}

TEST_CASE("Good snowman code - all right eye options")
{
    CHECK((snowman(21214343)) == ("\n  ___ \n .....\n (o,.)\n (   )\\\n (___)\n"));
    CHECK((snowman(33421122)) == ("\n   _\n  /_\\ \n (-_o)\n>(] [)<\n (\" \")\n"));
    CHECK((snowman(44332211)) == ("\n  ___\n (_*_)\n\\(O O)/\n ( : )\n ( : )\n"));
    CHECK((snowman(12341234)) == ("\n _===_\n (O.-)/\n<(> <)\n (   )\n"));
}

TEST_CASE("Good snowman code - all left arm options")
{
    CHECK((snowman(12341234)) == ("\n _===_\n (O.-)/\n<(> <)\n (   )\n"));
    CHECK((snowman(22332211)) == ("\n  ___ \n .....\n\\(O.O)/\n ( : )\n ( : )\n"));
    CHECK((snowman(33423122)) == ("\n   _\n  /_\\ \n (-_o)\n/(] [)<\n (\" \")\n"));
    CHECK((snowman(44334211)) == ("\n  ___\n (_*_)\n (O O)/\n ( : )\n ( : )\n"));
}

TEST_CASE("Good snowman code - all right arm options")
{
    CHECK((snowman(33421122)) == ("\n   _\n  /_\\ \n (-_o)\n>(] [)<\n (\" \")\n"));
    CHECK((snowman(12341234)) == ("\n _===_\n (O.-)/\n<(> <)\n (   )\n"));
    CHECK((snowman(21214343)) == ("\n  ___ \n .....\n (o,.)\n (   )\\\n (___)\n"));
    CHECK((snowman(11114411)) == ("\n _===_\n (.,.)\n ( : )\n ( : )\n"));
}

TEST_CASE("Good snowman code - all torso options")
{
    CHECK((snowman(11114411)) == ("\n _===_\n (.,.)\n ( : )\n ( : )\n"));
    CHECK((snowman(33421122)) == ("\n   _\n  /_\\ \n (-_o)\n>(] [)<\n (\" \")\n"));
    CHECK((snowman(44332234)) == ("\n  ___\n (_*_)\n\\(O O)/\n (> <)\n (   )\n"));
    CHECK((snowman(44444343)) == ("\n  ___\n (_*_)\n (- -)\n (   )\\\n (___)\n"));
}

TEST_CASE("Good snowman code - all base options")
{
    CHECK((snowman(11114411)) == ("\n _===_\n (.,.)\n ( : )\n ( : )\n"));
    CHECK((snowman(33421122)) == ("\n   _\n  /_\\ \n (-_o)\n>(] [)<\n (\" \")\n"));
    CHECK((snowman(21214343)) == ("\n  ___ \n .....\n (o,.)\n (   )\\\n (___)\n"));
    CHECK((snowman(44332234)) == ("\n  ___\n (_*_)\n\\(O O)/\n (> <)\n (   )\n"));
}

TEST_CASE("Good snowman code - same digit")
{
    CHECK((snowman(11111111)) == ("\n _===_\n (.,.)\n<( : )>\n ( : )\n"));
    CHECK((snowman(22222222)) == ("\n  ___ \n .....\n\\(o.o)/\n (] [)\n (\" \")\n"));
    CHECK((snowman(33333333)) == ("\n   _\n  /_\\ \n (O_O)\n/(> <)\\ \n (___)\n"));
    CHECK((snowman(44444444)) == ("\n  ___\n (_*_)\n (- -)\n (   )\n (   )\n"));
}

TEST_CASE("Too little digits")
{
    CHECK_THROWS(snowman(1231234));
    CHECK_THROWS(snowman(123123));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(22));
    CHECK_THROWS(snowman(333));
    CHECK_THROWS(snowman(4444));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(222222));
    CHECK_THROWS(snowman(3333333));
}

TEST_CASE("Too many digits")
{
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(123412341));
    CHECK_THROWS(snowman(1122233344));
    CHECK_THROWS(snowman(331111122));
}

TEST_CASE("Negative numbers")
{
    CHECK_THROWS(snowman(-23232323));
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-12234)); //negative and too little digits
}

TEST_CASE("Digits out of bound")
{
    CHECK_THROWS(snowman(51111111));
    CHECK_THROWS(snowman(15111111));
    CHECK_THROWS(snowman(11511111));
    CHECK_THROWS(snowman(11151111));
    CHECK_THROWS(snowman(11115111));
    CHECK_THROWS(snowman(11111511));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111115));
    CHECK_THROWS(snowman(12345678));
    CHECK_THROWS(snowman(99999999));
}
