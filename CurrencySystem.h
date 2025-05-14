#ifndef  CURRENCYSYSTEM_H  
#define  CURRENCYSYSTEM_H

#include <stdexcept>
#include <iostream>

enum class curr{usd , irr, eur };

class Currency{
    public: 
       float changetocu(curr cu , float sum);
       void getcu();

       int getbace();
       
    private:
       curr  currency; 
             
    protected:
    float base=0 , among; 
};

class Usd : public Currency{
    public: 
         Usd(int am=0);

};

class Eur : public Currency{
    public: 
         Eur(int am=0);     
};
class Irr : public Currency{
    public: 
        Irr(int am=0);          
};


#endif