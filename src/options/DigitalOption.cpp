#include "options/DigitalOption.hpp"

DigitalOption::DigitalOption(
    double strike, 
    double maturity, 
    double payout, 
    OptionType type
)
: strike_(strike), maturity_(maturity), payout_(payout), type_(type) {}

double DigitalOption::payoff(double ST) const
{
    if (type_ == OptionType::Call)
        return  (ST > strike_) ? payout_ : 0.0;
    else 
        return  (ST < strike_) ? payout_ : 0.0;
}