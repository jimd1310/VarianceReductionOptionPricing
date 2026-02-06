#pragma once 
#include "options/Option.hpp"
#include "options/OptionType.hpp"

class DigitalOption : public Option 
{
public: 
    DigitalOption(
        double strike, 
        double maturity, 
        double payout, 
        OptionType type
    );

    /// Payoff at maturity given underlying price ST.
    double payoff(double ST) const override; 
    double maturity() const override { return maturity_; }

    double strike() const { return strike_; }
    OptionType type() const { return type_; }

private: 
    double strike_; 
    double maturity_; 
    double payout_;
    OptionType type_; 
};