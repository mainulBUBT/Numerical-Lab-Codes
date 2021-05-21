#include<stdio.h>
float func(float a)
{
    float result;
    result = (a*a)-(4*a)-10;
    return result;
}


int main()
{
    float e = .0001;
    float fa, fb,c, root;
     float a = -1.00;
     float b = -2.00;


     fa= func(a);
     fb = func(b);
     if(fa*fb>0)
     {
         printf("Error");
     }
     while((fabs(b-a) >e || (fabs(func(a)))>e && fabs(func(b))>e))
     {

       c = (a+b)/2;
       if(func(c)==0)
       {
           root=c;
           break;
       }
       if((func(c)*func(a))<0)
       {
           b = c;
       }
       else
       {
           a=c;
       }

     }
     if(func(c)<=e)
        root = c;

     printf("%.2f", root);




 }
