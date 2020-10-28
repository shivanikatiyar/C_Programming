#include<stdio.h>   //Program of pointer with Arithmetic Operator
int main()
{
  int a,b,*p1,*p2,x,y,z;
  a=12;
  b=4;
  p1=&a;
  p2=&b;
  x=*p1* *p2-6;  //(*p1)x(*p2)-6
  y=4* *p1+*p2;
  printf("address of a=%u\n",p1);  // Use in %u print of the p1 address 
  printf("address of b=%u\n",p2);  
  printf("\n");
  printf("a=%d,b=%d\n",a,b); 
  printf("x=%d,y=%d\n",x,y);
  *p2=*p2+3;   // 7
  *p1=*p2-5;   // 2
  z=*p1* *p2-6;	   // 2x7-6 =8
  printf("\na=%d,b=%d\n",a,b);
  printf("z=%d\n",z);
}

