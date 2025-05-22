#include "Bank.h"





int main(){

    
    
    Prs_Act per1("mina" , 123456 , usd, 1001 );
    Org_Act per2("fafa" , 999999 , irr, 500 );
   // std::cout<<per1.get_balance()<<std::endl; 
   // per1.deposit(10000);
   Fruit apple("apple" , 100 , 10);
    Snack chips("chips", 100, 2);
    Seasoning nmd("nmd",20, 5 );
   // std::cout<<1111;

   

   per2.take(&chips , 2);
per1.take(&chips , 1);
per1.take(&apple, 6);
per1.take(&nmd, 3);
per2.take(&apple , 11);



   
   // std::cout<<2222;
   per1.calculate();
   // std::cout << "..............." ; 
   per2.calculate();
//    per1.get_balance();
//    per1.print();
//    std::cout<<per1.get_balance();
   // per1.print();
   
//    std::cout <<Shop::get_balance();

    return 0;
}

