#include<stdio.h>
int main()
{
  int year;

  printf("Enter Your Year : ");
  scanf("%d",&year);

int a=year%400;
int b =  year%4;
  
  if(a==0||b==0)
  {
    
    printf("%d Is Leap Year",year);
  }
  else
  {
    printf("%d Is Not Leap Year",year);
  }

  return 0;
}