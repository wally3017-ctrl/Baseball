#include "gmock/gmock.h"
#include "baseball.cpp"

class BaseballFixture : public testing::Test {
public:
    Baseball game;
    void assertIlegalArgument(string guessNumber) {
         try {
            game.guess(guessNumber);
            FAIL();
        }
        catch (exception e) {
            // PASS
        }
    }
};

TEST_F(BaseballFixture, TryGameTest) {
    EXPECT_EQ(1,1);
}

TEST_F(BaseballFixture, ThrowExcpetionWhenInvalidCase) {
    assertIlegalArgument("12");
    assertIlegalArgument("12s");
    assertIlegalArgument("121");
}