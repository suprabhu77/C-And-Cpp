#include<stdio.h>
#include<stdlib.h>
struct rectangle {
    int length;
    int breadth;
};
int areacallbyvalue(struct rectangle A)   
{ 
int area;
int temp = 5;
A.breadth = temp;
area = A.breadth*A.length;
return area;
}
int areacallbyrefference(struct rectangle * B)
{
B->breadth = 10 ;
B->length = 25;
return B->length*B->breadth;
};

int main()
{
 struct rectangle r1 = {10,15};
 int result = areacallbyvalue(r1);
 printf("%d",result);
 int result = areacallbyrefference(&r1);
 printf("After calling by callbyrefference function\n %d",result);
 int result = areacallbyvalue(r1);
 printf("You got the same answer after executing the call by value function");
 printf("%d",result);
}