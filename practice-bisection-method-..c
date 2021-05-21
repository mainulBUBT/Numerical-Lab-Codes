#include<stdio.h>
#include<math.h>


float func(float x)
{
        //function x^2-4x-10 aitao mam diye dibe

    float result;
    result=(x*x)-(4*x)-10;
    return result;
}


int main()
{

    float root,e=0.0001,x=-1,y=-2,c;//error rate e and initial guess x,y er value mam diye dibe
    if(func(x)*func(y)>0)
    {
        printf("error");
    }


        while((fabs(x-y)>e) || ((fabs(func(x))>e) &&  (fabs(func(y))>e)))
        {
            c=(x+y)/2;
            if(func(c)==0)
            {
                printf("root is = %f",c);
                break;
            }
            if(func(x)*func(c)<0)
            {
                y=c;
            }
            else{
                x=c;
            }
        }
        if(func(c)<=e)
        {
                            printf("root is = %f",c);

        }



}
