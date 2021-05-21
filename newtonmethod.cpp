#include<iostream>
#include<cmath>
using namespace std;
float fun(float x)
{
    float  m=x*x-3*x+2;
    return m;
}
float funx(float x)
{
        float  z=2*x-3;
    return z;

}

int main()
        {




        float x=0,e=0.001,m=10,root;
        int i=1;


        while(i<=10)
        {


            if(funx(x)==0)
            {

                cout<<"error";
                break;
            }
            else
            {
               float  x1=x;
                x=x1-(fun(x1)/funx(x1));
             if(fabs(fun(x1)-fun(x))<=e)
             {
             root=x;
             cout<<"iteration number "<<i<<" ";
                             //cout<<root<<"\n";

               break;
             }
             else
             {

                root=x;
                cout<<"iteration number "<<i<<" ";
                cout<<root<<"\n";
             }


            }
            //cout<<"\n";
            //cout<<i;
            i++;
        }
        cout<<"the root is :"<<root;


}
