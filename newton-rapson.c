#include<stdio.h>
#include<math.h>


float func(float x)
{
    //function x^2-3x+2 aitao mam diye dibe
    float result;
    result=(x*x)-(3*x)+2;
    return result;
}
float fun(float x)
{
    // differentiation of the function jeta nijer ber kora lagbe
    float result;
    result=(2*x)-3;
    return result;
}



int main()
{

    float root,e=0.001,x=0,y=0; //x er value mam diye dibe and error rate :e er value o mam diye dibe
    int i=0;


    while(1)
    {

                    y=x;

                      x=x-(func(x)/fun(x));

                      i++;
                      printf(" the value of x and after %d iteration \n",i);
                      printf("y= %f  ",y);
                      printf("x=%f\n",x);

                      if(fabs(y-x)<=e)
                       {
                      printf("root is =%f",y);
                      break;
                       }



    }












}

