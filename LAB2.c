#include<stdio.h>
#include<math.h>

float val(float x){
    float res;
    res= (x*x)-x-2;
    return res;
}
int main(){

    int i=1;
    float x1=1.00,x2=3.00,fx1,fx2,x0,fx0,root;
    float error=.0001;
    fx1=val(x1);
    fx2=val(x2);


    while(1){
        x0=((val(x2)*x1)-(val(x1)*x2))/(val(x2)-val(x1));

        printf("Iteration no-> %d        x0= %.4f\n",i,x0);

        if(val(x0)*val(x1)<0){
            x2=x0;
        } else {
            x1=x0;
        }

        if(val(x0)==0){
                root=x0;
                break;
            }

        if(fabs(val(x0))<=error){
            root=x0;
            break;
        }
        i++;

    }

    printf("root is %.4f",root);





}
