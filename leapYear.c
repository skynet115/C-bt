#include <stdio.h>
int main()
{
  int a;
  printf("nhap nam: ");scanf("%d",&a);
  if (ly(a)==1) printf("\nNam %d la nam nhuan\n",a); else printf("\nNam %d khong phai la nam nhuan\n",a);
}
int ly(int b)
{
  if((b%4==0) && (b%100!=0)) b=1; else if (b%400==0) b=1; else b=0;
  return (b);
}
