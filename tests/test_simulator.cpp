#include <gtest/gtest.h>
#include "../include/TradingSimulator.hpp"

TEST(TradingSimulatorTest, BasicBuySignal) {
    TradingSimulator simulator("data/sample_data.csv");
    EXPECT_TRUE(simulator.buy_signal());
}
