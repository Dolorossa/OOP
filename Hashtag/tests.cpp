#include "gtest/gtest.h"
#include "hashtag.h"

TEST(HashtagTest, HashtagCreate)
{   
    EXPECT_EQ(TurnToHashtag("sit home, watch cartoons"), "#SitHomeWatchCartoons");
    EXPECT_EQ(TurnToHashtag(""), "Exception");

}

