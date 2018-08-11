
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
// 
// #include <stdio.h>
// int multiplication(){
//   int a,b;
//   printf("enter the value of a");
//   scanf ("%d",&a);
//   printf("enter the value of b");
//   scanf("%d",&b);
//   return a*b;
// }

#include <stdio.h>
int division(){
  int a,b;
  printf("enter the value of a");
  scanf ("%d",&a);
  printf("enter the value of b");
  scanf("%d",&b);
  return a/b;
}

int main(){
  int div;
  div = division();
  printf("%d",div);
  return 0;
}