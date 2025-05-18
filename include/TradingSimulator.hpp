#pragma once
#include <string>
#include <vector>

struct TradeResult {
    double entry_price;
    double exit_price;
    std::string entry_date;
    std::string exit_date;
    double pnl;
};

class TradingSimulator {
public:
    TradingSimulator(const std::string& data_file);
    void run_backtest();
    void print_results() const;

private:
    std::vector<TradeResult> results;
    void load_data(const std::string& file);
    bool buy_signal();
    bool sell_signal();
};
