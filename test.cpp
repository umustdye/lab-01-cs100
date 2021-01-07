#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, FirstLastCap){
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "First"; test_val[2] = "Last";
	EXPECT_EQ("First Last", echo(3, test_val));
}


TEST(EchoTest, Date){
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "Date:"; test_val[2] = "1/7/2021";
        EXPECT_EQ("Date: 1/7/2021", echo(3, test_val));
}


TEST(EchoTest, FirstLastLower){
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "first"; test_val[2] = "last";
        EXPECT_EQ("first last", echo(3, test_val));
}

 

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
