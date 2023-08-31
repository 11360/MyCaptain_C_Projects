#include<stdio.h>
int main()
//initialize the values of a and b
{    int a=2;
     int b=4;
//using print() function the values of a and b are written before swapping i.e a=2, b=4
     printf("before swapping a=%d b=%d",a,b);
//we swap the values of a and b here
//we add values of a and b and assign it to a i.e a+b=2+4=6 and a=6
     a=a+b;
//substitute a in this and find b value after swapping i.e b=6-4=2
     b=a-b;
//substituting a and b we get a value after swapping i.e a=6-2=4
     a=a-b;
//values of a and b are printed after swapping i.e a=4, b=2
     printf("After swapping a=%d b=%d",a,b);
     return 0;
}
