//
// Created by gyuri on 2019.03.04..
//
extern "C" {
#include "poker_lib.h"
}
#include <gtest/gtest.h>

TEST(HIGHERCARD, HIGHERCAR1)
{
EXPECT_TRUE(is_higher(card_value("3K"), card_value("2P")));
}
TEST(HIGHERCARD, HIGHERCAR2)
{
	EXPECT_EQ(card_value("3K"), card_value("3P"));
}
TEST(HIGHERCARD, HIGHERCAR3)
{
	EXPECT_TRUE(is_higher(card_value("AK"), card_value("3P")));
}
TEST(HIGHERCARD, HIGHERCAR4)
{
	printf("%d\n", card_value("JK"));
	EXPECT_TRUE(is_higher(card_value("JK"), card_value("3P")));
}
TEST(HIGHERCARD, HIGHERCAR5)
{
	EXPECT_FALSE(is_higher(card_value("QK"), card_value("KP")));
}
TEST(HIGHERCARD, HIGHERCAR6)
{
	EXPECT_FALSE(is_higher(card_value("9K"), card_value("TP")));
}
TEST(HIGHERCARD, WHITEWINS1)
{
	//Black: 2H 3D 5S 9C KD White: 2C 3H 4S 8C AH expected : white wins
	char Black[5][3] = {"2H", "3D", "5S", "9C", "KD"};
	char White[5][3] = {"2C",  "3H", "4S", "8C", "AH"};

	EXPECT_TRUE(stronger_hand(White, Black));
}
TEST(HIGHERCARD, BACKWINS1)
{
	//Black: 2H 3D 5S 9C KD White: 2C 3H 4S 8C AH expected : white wins
	char Black[5][3] = {"2H", "3D", "5S", "9C", "KD"};
	char White[5][3] = {"2C",  "3H", "4S", "8C", "7H"};

	EXPECT_FALSE(stronger_hand(White, Black));
}