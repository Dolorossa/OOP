#include "gtest/gtest.h"
#include "hashtag.h"

TEST(HashtagTest, HashtagCreate)
{   
    EXPECT_EQ(TurnToHashtag("sit home, watch cartoons"), "#SitHomeWatchCartoons");
}

TEST(ExeptionTest, EmptyString)
{
    ASSERT_THROW(TurnToHashtag(""), const char*);
}