#include "Bank.h"
#include "CurrencySystem.h"



int main(){
   Prs_Act per1("mina" , 123456 , usd, 1001 );
//    Org_Act per1("fafa" , 999999 , irr, 500 );
   // std::cout<<per1.get_balance()<<std::endl; 
   // per1.deposit(10000);
   Fruit apple("apple" , 100 , 10);
    Snack chips("chips" , 100 , 2);
   // std::cout<<1111;
   per1.take(&apple , 2);
    
   per1.take(&chips , 1);
   // std::cout<<2222;
   per1.calculate();
   per1.print();
   std::cout<<per1.get_balance();
   // per1.print();
   
   

    return 0;
}

