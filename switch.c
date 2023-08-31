#include<stdio.h>
int main()
{
char fooditem;
int price;
int choice;
printf("enter ur coice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("food item-pizza\n");
printf("price-%i",239);
break;
case 2:
printf("food item-burger\n");
printf("price-%i",129);
break;
case 3:
printf("food item-pasta\n");
printf("price-%i",179);
break;
case 4:
printf("food item-frenchfries\n");
printf("price-%i",99);
break;
case 5:
printf("food item-sandwich\n");
printf("price-%i",149);
break;
case 6:
printf("default\n");
printf("default");
break;
}
}
