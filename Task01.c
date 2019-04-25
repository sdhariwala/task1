#include<stdio.h>
struct customer
{char name[100];
int age[2];
int number[10];
}c;
main()
{
struct customer c;
printf("Enter the Customer information:\n");

printf("Customer Name: ");
scanf("%s",&c.name);

printf("Customer Age: ");
scanf("%s",&c.age);

printf("Customer Mobile Number: ");
scanf("%s",&c.number);

printf("Customer Data");
printf("\n Name:%s",c.name);
printf("\n Age:%s",c.age);
printf("\n Mobile number:%s",c.number);
}


