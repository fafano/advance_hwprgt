#include "item.h"

Item::Item(std::string n, double p, std::string u, int a = 100):name(n), price(p), unit(u), amount(a){}
Item::Item(){}
Item::~Item(){}


Item& Item::operator=(const Item & other){
    this->amount = other.amount;
    this->price = other.price;
    this->unit = other.unit;
    return *this;
}
void Item:: operator-=(int a){
    this->amount = this->amount - a;
    
}

double Item:: get_price() const{
    return price;
}
int Item:: get_amount() const{
    return amount;
}
std::string Item :: get_unit() const{
    return unit;
}


//--------------------------------------------------------------------------------------------------------

Fruit::Fruit(std::string n, double p, int a=100): Item(n,p, "kg", a ){}
double Fruit::get_price() const{
    return Item::get_price();
}
int Fruit::get_amount() const{
    return Item::get_amount();
}
void Fruit:: operator-=(int a){
    this->amount = this->amount - a;
    
}
std::ostream& operator<<(std::ostream& output, const Item & item){
    output <<"\nname: " << item.name <<
            "   price: " << item.price <<
            "   unit: " << item.unit;
            return output;
}




//------------------------------------------------------------------------------------------------------------

Seasoning::Seasoning(std::string n, double p, int a=100) : Item(n, p, "g", a){}
double Seasoning::get_price() const{
    return Item::get_price();
}
int Seasoning:: get_amount() const{
    return Item::get_amount();
}
void Seasoning:: operator-=(int a){
    this->amount = this->amount - a;
    
}
// std::ostream& operator<<(std::ostream& output, const Seasoning & item){
//     output <<"\nname: " << item.name <<
//             "\namount: " << item.amount <<
//             "\nprice: " << item.price <<
//             "\nunit: " << item.unit << std::endl;
//             return output;
// }

//------------------------------------------------------------------------------------------------------------

Snack::Snack(std::string n,double p, int a=100) : Item(n, p, "package", a){}
void Snack:: operator-=(int a){
    this->amount = this->amount - a;
    
}
// std::ostream& operator<<(std::ostream& output, const Snack & item){
//     output <<"\nname: " << item.name <<
//             "\namount: " << item.amount <<
//             "\nprice: " << item.price <<
//             "\nunit: " << item.unit << std::endl;
//             return output;
// }