//
// Created by gyuri on 2019.02.07..
//
#include <appleclass.h>
#include "gtest/gtest.h"

TEST(Apple, Apple1)
{
    // Arrange
    std::string apple = "Apple";
    appleclass a;

    // Act


    // Assert
    EXPECT_EQ(a.getApple(), apple);
}