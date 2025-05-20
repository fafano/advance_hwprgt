#include "Bank.h"
#include "CurrencySystem.h"



int main(){
   Prs_Act per1("mina" , 123456 , usd, 1001 );
    Org_Act per2("fafa" , 999999 , irr, 500 );
   // std::cout<<per1.get_balance()<<std::endl; 
   // per1.deposit(10000);
    Fruit apple("apple" , 100 , 10);
    // Snack chips("chips" , 100 , 2);
    // auto apple = std::make_shared<Item>("apple", 2.5, "kg", 10);
   // std::cout<<1111;
//   
//  // مثال: ساخت apple
    
    // if(per1.take(apple, 2)){
    //     apple.set
    // }
    per1.amount_setter( apple, 11);
//    per1.take(std::make_shared<Item>(apple) , 2);
//     per1.take(std::make_shared<Item>(apple) , 2);
    
//    per1.take(std::make_shared<Item>(chips) , 1);
   //  per2.take(std::make_shared<Item>(apple) , 2);
    
   // per2.take(std::make_shared<Item>(chips) , 1);
   // std::cout<<2222;
   per1.calculate();
   std::cout<<"***************"<<std::endl;
   // per2.calculate();
   //  per1.print();
   // std::cout<<per1.get_balance();
   std::cout <<apple.get_amount(); ; 

   // per1.print();
   
   

    return 0;
}

