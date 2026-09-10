#include "repina.h"
#include <cmath>
double penalty(double dept, double p, int days) {
    return dept*p/100*days;
}
double totalWithPenalty(double dept, double p, int days){
    return penalty(dept,p,days)+dept;
}