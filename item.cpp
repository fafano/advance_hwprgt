#include "item.h"

Item::Item( std::string n, double p, std::string u, int a = 100 ): name(n), price(p), unit(u), amount(a){}
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
void Item:: set_amount(int number){
    this->amount = number;
}
std::string Item::get_name(){
    return this->name;
}
void Item:: operator+=(int a){
    this->amount = this->amount + a;
}
std::ostream& operator<<(std::ostream& output, const Item & item) {
   
    
    output  << "|Name: " << std::setw(12) << std::left  << item.name
            << "|Price per each 1 " << std::setw(10) << std::left << (item.unit + ":")
            << std::fixed << std::setprecision(2) << std::setw(10) << item.price << "$    ";
           
    return output;
}


//--------------------------------------------------------------------------------------------------------Fruit


Fruit::Fruit( std::string n, double p, int a=100 ): 
    Item(n,p, "kg", a ){}


//--------------------------------------------------------------------------------------------------------Seasoning


Seasoning::Seasoning( std::string n, double p, int a=100 ): 
    Item(n, p, "g", a){}


//--------------------------------------------------------------------------------------------------------Snack


Snack::Snack(std::string n, double p, int a=100): 
    Item(n, p, "package", a){}
