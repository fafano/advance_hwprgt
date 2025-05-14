#include "item.h"

Item::Item(double p, std::string u, int a): price(p), unit(u), amount(a = 100){}

double Item::cal_price(int number){
    int free = number / 5;
    return (number - free) * price ;
}
//--------------------------------------------------------------------------------------------------------

Fruit::Fruit(double p, int a): Item(p, "kg", a = 100){}

//------------------------------------------------------------------------------------------------------------

Seasoning::Seasoning(double p, int a) : Item(p, "g", a = 100){}

//------------------------------------------------------------------------------------------------------------

Snack::Snack(double p, int a) : Item(p, "package", a = 100){}