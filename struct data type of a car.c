#include<stdio.h>
#include<string.h>

struct Car {
    char brand [20] ;
    int year ;
    float price ;
} ;

int main () {
    
    // strcpy function to copy the characters "Toyota" into the brand member of the myCar struct//
    struct Car myCar ;
    
    strcpy (myCar.brand , "Toyota");
    myCar.year = 2002 ;
    myCar.price = 2500.00 ; 
    
    printf ("My car is %d %s, and it costs $%.2f \n", myCar.year, myCar.brand, myCar.price) ;
    
    return 0;
}
