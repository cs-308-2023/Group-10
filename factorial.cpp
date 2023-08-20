#include "functions.h"

int factorial(int n){
    if (n<=0){
    	return "Please re-enter a positive number";
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
