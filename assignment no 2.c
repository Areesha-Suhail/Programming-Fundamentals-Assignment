#include<stdio.h>
#include<conio.h>
int main()
{
  int number;
  printf("Enter a number");
  scanf("%d",& number);
  printf("The square of %d is: %d", number, number*number);
  getch();
}