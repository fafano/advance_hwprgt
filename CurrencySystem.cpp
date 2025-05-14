#include "CurrencySystem.h"

using namespace std;


float Currency::changetocu(curr cu , float sum){
          if(cu==curr::usd){
            currency= cu;
            base = sum;
            getcu();
           return base;
        }else if(cu==curr::irr){
           currency= cu;
            base = sum/3;
            getcu();
           return base;
        }else if(cu==curr::eur){
           currency= cu;
            base = sum/2;
            getcu();
           return base;
        }else{
            
            throw std::invalid_argument("This currency is not acceptable!!sorry.");
        }
}

void Currency::getcu(){
         if(currency==curr::usd){
             std::cout<<base<<" $_usd"<<std::endl;
          
        }else if(currency==curr::irr){
         std::cout<<base<<" IR_irr"<<std::endl;
          
        }else if(currency==curr::eur){
            std::cout<<base<<" €_eur"<<std::endl;
          
        }
}
int Currency::getbace(){
          return base;
}

Eur::Eur(int am=0){
         among=am;
         base += among*2;
} 
Irr::Irr(int am=0){
        among=am;
        base += among*3;
} 
Usd::Usd(int am=0){
        among=am;
        base += among*1;

}
//*************** for test
//     Usd a(5);
//     Irr b(2);Eur c(3);
//   float v=  a.changetocu(curr::irr , a.getbace() + b.getbace() + c.getbace()); all case
//     cout<<endl<<v; praice they must pay
    