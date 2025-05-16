#include "Bank.h"



int main(){
   Prs_Act per1("mina" , 123456 , irr, 1001 );
//    Org_Act per1("fafa" , 999999 , irr, 500 );
   
   Fruit apple("apple" , 200 , 10);
   Snack chips("chips" , 100 , 2);

   per1.take(&apple , 2);
   per1.take(&chips , 1);

   per1.calculate();
   

    return 0;
}

