
#include <stdio.h>

int main() {
    double  first ,second , temp;
    printf("Enter first number: ");
    scanf("%lf",&first);
    
    printf("Enter second number: ");
    scanf("%lf",&second);
    
    // value of first is assigned to temp
    temp = first;
    
    // value of second is assigned to first
    first = second;
    
    // value of temp is assigned to second
    second = temp;
 
    printf("Hello, World!\n");
    
    printf("\n After swapping , firstNumber = %.2lf\n",first);
    
    printf("\n After swapping , SecondNumber = %.2lf\n",second);
    
 
    return 0;
}

