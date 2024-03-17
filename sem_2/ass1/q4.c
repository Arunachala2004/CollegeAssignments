#include <stdio.h>
int main(){

float length, breadth;
int int_length, int_breadth;
int area;
printf("Enter the length : ");
scanf("%f", &length);
printf("Enter the breadth : ");
scanf("%f", &breadth);
int_length=(int)length;
int_breadth=(int)breadth;
area=int_length * int_breadth;
printf("Area = %d ", area);
return 0;

}
