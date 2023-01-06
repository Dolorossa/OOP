#include "gtest/gtest.h"
#include "task_3.h"

TEST(ConvertTest, TurnToBin)
{   
    EXPECT_EQ(turn_bin(42,8), "00101010");
    EXPECT_EQ(turn_bin(31,6), "011111");

}

TEST(ConvertTest, TurnToDec)
{   
    EXPECT_EQ(convert("01110101"), 117);
    EXPECT_EQ(convert("101011"), 43);

}

TEST(BinStrTest, MakeBinStr){
    EXPECT_EQ(make_bin_encode_str("love marmalads"), "0110110001101111011101100110010100100000011011010110000101110010011011010110000101101100011000010110010001110011");
    EXPECT_EQ(make_bin_decode_str("apple"),"011010101001101001100101011110");
}

TEST(Base64Test, Encode){
    EXPECT_EQ(encode("sit home, watch cartoons"),"c2l0IGhvbWUsIHdhdGNoIGNhcnRvb25z");
    EXPECT_EQ(encode("sit home"),"c2l0IGhvbWU=");
    EXPECT_EQ(encode("eat flower"),"ZWF0IGZsb3dlcg==");

}

TEST(Base64Test, Decode){
    EXPECT_EQ(decode("c2l0IGhvbWUsIHdhdGNoIGNhcnRvb25z"),"sit home, watch cartoons");
    EXPECT_EQ(decode("c2l0IGhvbWU="),"sit home");
    EXPECT_EQ(decode("ZWF0IGZsb3dlcg=="),"eat flower");

}