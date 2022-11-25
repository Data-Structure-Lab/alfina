#include<stdio.h>
int main()
{
int sum=0,num;
printf("enter the number");
scanf("%d",&sum);
while(num>0)
{
  r=num%10;
  sum=sum+r;
  num=num/10;
}
}
 

