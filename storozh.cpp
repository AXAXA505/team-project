#include "storozh.h"
#include <cmath>

double futurePrice(double price, double inf, int n){
    return price*pow(1+inf/100, n);
}
double purchasingPower(double sum, double inf, int n){
    return sum/pow(1+inf/100, n);
}