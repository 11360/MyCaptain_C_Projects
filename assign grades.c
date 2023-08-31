#include<stdio.h>
int main()
{

 int n;
 printf("Enter marks");
 scanf("%d",&n);

  if(n<40)
 {
     printf("Grade f");
 }

else if(n<55 && n>39)
 {
     printf("Grade D");
 }
else if(n<70 && n>54)
 {
     printf("Grade C");
 }

  else if(n<85 && n>69)
 {
     printf("Grade B");
 }
   else if(n<=100 && n>84)
 {
     printf("Grade A");
 }
 return 0;
}
