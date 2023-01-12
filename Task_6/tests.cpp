#include "gtest/gtest.h"
#include "task_6.h"

TEST(RPNTest, RPNCalc)

{   
    EXPECT_EQ(CalcRPN("45 2 +"), 47);
    EXPECT_EQ(CalcRPN("5 3 *"), 15);
}

TEST(ReadTest, Reading)
{
    vector <string> test1={"5","2","*"};
    vector <string> test2={"36","4","+"};
    EXPECT_EQ(Read("5 2 *"), test1);
    EXPECT_EQ(Read("36 4 +"), test2);

}
