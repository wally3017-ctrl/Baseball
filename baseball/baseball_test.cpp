#include "gmock/gmock.h"
#include "baseball.cpp"

class BaseballFixture : public testing::Test {
public:
    Baseball game{"123"};
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

TEST_F(BaseballFixture, ReturnSolveResultIfMatchNumber) {
    GuessResult result = game.guess("123");

    EXPECT_TRUE(result.solved);
    EXPECT_EQ(3, result.strike);
    EXPECT_EQ(0, result.ball);
}