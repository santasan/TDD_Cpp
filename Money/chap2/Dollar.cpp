#include "Dollar.hpp"

Dollar::Dollar(int _amount){
    this->amount = _amount;
}

Dollar Dollar::ReturnDollarTimes(int multiplier){
    amount *= multiplier;
    return 0;
}