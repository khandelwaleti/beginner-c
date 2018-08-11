#include <stdio.h>
int add(){
  int a,b;
  printf("enter the value of a");
  scanf ("%d",&a);
  printf("enter the value of b");
  scanf("%d",&b);
  return a+b;
}
int main(){
  int sum;
  sum=add();
  printf("%d",sum);
  return 0;
}
