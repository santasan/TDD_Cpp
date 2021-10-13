#include "Dollar.hpp"

Dollar::Dollar(int _amount){
    this->amount = _amount;
}

void Dollar::times(int multiplier){
    amount *= multiplier;
}