#include "TradingSimulator.hpp"

int main() {
    TradingSimulator simulator("data/sample_data.csv");
    simulator.run_backtest();
    simulator.print_results();
    return 0;
}
