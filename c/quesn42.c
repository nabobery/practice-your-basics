//Write a program to check if a number entered is an Armstrong Number.

#include<stdio.h>
#include<math.h>

int main()    
{  

int n,x,r,sum=0;    
printf("Enter the number you want to check:");    
scanf("%d",&n);                // taking number from user
x=n;  

while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}   

if(x==sum)    
printf("Entered number is an armstrong  number ");    
else    
printf("Entered number is not an armstrong number");    

return 0;  
}   
