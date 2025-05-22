#include "Bank.h"





int main(){

    
    
    Prs_Act per1("mina" , 123456 , eur, 1001 );
    Org_Act per2("fafa" , 999999 , irr, 500 );
    Org_Act per3("faf" , 999999 , irr, 0 );
    Org_Act per4("fa" , 999999 , irr, 50000 );
   // std::cout<<per1.get_balance()<<std::endl; 
   // per1.deposit(10000);
   Fruit apple("apple" , 100 , 10);
    Snack chips("chips", 100, 2);
    Snack ff("chips", 10000, 2);
    Seasoning nmd("nmd",20, 5 );
   // std::cout<<1111;

   per4.take(&ff , 2); // ارور برای رد کردن لیمیت
   per3.take(&apple , 2); // ارور برای پول نداشتن
   per2.take(&chips , 2);
per1.take(&chips , 1);
per1.take(&apple, 6);
per1.take(&nmd, 3);
per2.take(&apple , 11);// چاپ متن برای کم بودن تعداد سیب ها 



   

   per1.calculate();

   per2.calculate();
    per3.calculate();
    per4.calculate();

    return 0;
}

