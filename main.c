//
//program to understand union and struct
//
//by Pooja v
#include <stdio.h>
#include<stdlib.h>
union class { 
//defining a union
char Section[32]; 
int reg_no;
}u;
//defining a struct 
struct detail{ 
char name[32];
float per; 
float math;
float phy;
float che;
float cg;
}d;
//percentage
float cal()
 {
d.per=((d.math+d.phy+d.che)/300)*100;

return d.per;
 }
 //cgpa
float cgpa()
{
  d.cg=d.per/9.5;
return d.cg;
}
//display
void display()
 {
  float a;
  printf("\n\tDisplaying Information");
  printf("\nName:%s",d.name);
  printf("\nSection:%s",u.Section);
  printf("\nRegNo:%d",u.reg_no);
  a=cal();
  printf("\nyour Major sub percentage:%.2f \n\n",a);
 }
//main function
int main(void)
{ float a;
int c;
printf("1 To get help \n2 For percentage calculation\n3 For cgpa\nEnter your chose: \n");
scanf("%d",&c);
switch(c)
{
  case 1:
  printf("->Enter the details Asked\n->To calculate Percentage choose 2 \n->To calculate cgpa also choose 3");
  break;
  case 2:
  printf("Enter the name:");
  scanf("%s",d.name);
  printf("Enter the Section:");
  scanf("%s",u.Section);
  printf("Enter the regno:");
  scanf("%d",&u.reg_no);
  printf("Enter the mark for Maths:");
  scanf("%f",&d.math);
  printf("Enter the mark for Physics:");
  scanf("%f",&d.phy);
  printf("Enter the mark for Chemistry:");
  scanf("%f",&d.che);
  a=cal();
  printf("your Major sub percentage:%.2f",a);
  display();
  break;
  case 3:
  printf("Enter the name:");
  scanf("%s",d.name);
  printf("Enter the Section:");
  scanf("%s",u.Section);
  printf("Enter the regno:");
  scanf("%d",&u.reg_no);
  printf("Enter the mark for Maths:");
  scanf("%f",&d.math);
  printf("Enter the mark for Physics:");
  scanf("%f",&d.phy);
  printf("Enter the mark for Chemistry:");
  scanf("%f",&d.che);
  a=cal();
  printf("your Major sub percentage:%.2f",a);
  display();
  cgpa();
  break;
  default:
  printf("Information Unavailable");

}
return 0; 
}

