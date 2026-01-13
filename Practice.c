#include<stdio.h>
int main() {
  int P,R,T,SI;
  printf("Enter the Principal value:");
  scanf("%d,&P");
  printf("Enter the Rate of Interest: ");
  scanf("%d,&R");
  printf("Enter the Time: ");
  scanf("%d,&T");
  SI = P*R*T/100;
  printf("The Simple Intrest is: ");
  scanf("%d,&SI");
  return 0;
}