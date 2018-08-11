
// #include <stdio.h>
// int add(){
//   int a,b;
//   printf("enter the value of a");
//   scanf ("%d",&a);
//   printf("enter the value of b");
//   scanf("%d",&b);
//   return a+b;
// }
// #include <stdio.h>
// int sub(){
//   int a,b;
//   printf("enter the value of a");
//   scanf ("%d",&a);
//   printf("enter the value of b");
//   scanf("%d",&b);
//   return a-b;
// }
#include <stdio.h>
int multiplication(){
  int a,b;
  printf("enter the value of a");
  scanf ("%d",&a);
  printf("enter the value of b");
  scanf("%d",&b);
  return a*b;
}

int main(){
  int multi;
  multi = multiplication();
  printf("%d",multi);
  return 0;
}