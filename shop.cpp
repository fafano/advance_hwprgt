#include "shop.h"
using namespace std;


double Shop::balance = 0;

void Shop::withdraw( double amount){
    balance += amount;
}


//------------------------------------------------------------------------------------------------------------------cart_shop


cart_Shop::cart_Shop( std::string ahn ):
    name( ahn ){}

void cart_Shop:: return_item(){
    for(int i = 0 ; i < items.first.size() ; i++ )
        items.first[i] += items.second[i];
} 


void cart_Shop::take( Item* it, int amount ){
    try{
            if( it->get_amount() < amount ){
                cout<< "Sorry!Theres no enough amount of: " << it->get_name();
                throw std::invalid_argument("!!" );
            }
            
            else if( amount < 0 ){
                throw std::out_of_range("You've entered a number lower than zero!!" );
            }

            items.first.push_back(it );
            items.second.push_back(amount );
            *it -= amount; 
            int free = amount / 5;
            amount -= free;
            price += ( amount * ( it->get_price() ) );
    }
    catch( std::invalid_argument &e ){
        cout<< e.what() << endl;
    }
    catch( std::out_of_range &a ){
        cout<< a.what() << endl;
    }
}

double cart_Shop::getprice(){
    return price;
}
void cart_Shop :: setprice( double amount ){
    price = amount;
}
cart_Shop::~cart_Shop(){
    items.first.clear();
}



void cart_Shop::print(){
    if( items.first.empty() ){
        return;
    }
    cout<<endl<< "****************************************************List****************************************************" << endl;
    for(auto it : items.first){
        cout<<*it
            << "|Amount you buy : " << std::setw(4) << std::left <<items.second[i] 
            << "|Total: " << std::setw(10) << std::left <<it->get_price()*items.second[i]<<"$"<<endl;
        i++;
        for(int i = 1 ; i < 109 ; i++){
            cout << '-';
        }
        cout << endl;
    }
    cout<<std::setw(54) << std::left << "" 
        << std::setw(5) << "."<< endl<<std::setw(54) << std::left << ""
        << std::setw(5) << "." << endl <<std::setw(54) << std::left << ""  
        << std::setw(5) << "." << endl << std::setw(108) << std::setfill('_') << ""
        << std::endl
        << endl<<"Dear " << this->name <<", thank you for your choice. final amount with discount "<<getprice()<<endl
        << std::setw(108) << std::setfill('_') << ""
        << std::endl;
}                