#include<stdio.h>
int main()
{
    float x[20][20],y[10],c;
    int i,j,k,n;
        printf("Enter the size of the matrix :");
        scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("x[%d][%d] = ",i,j);
            scanf("%f",&x[i][j]);

        }
    }
    for(i=1;i<n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
        c=x[j][i]/x[i][i];
        for(k=1;k<=n+1;k++)
        {
           x[j][k]=x[j][k]-c*x[i][k];
        }
    }
    }

// for result
y[n]=x[n][n+1]/x[n][n];
for(i=n-1;i>=1;i--)
{
    y[i]=x[i][n+1];
    for(j=i+1;j<=n;j++)
    {
        y[i]=y[i]-x[i][j]*y[j];
    }
    y[i]=y[i]/x[i][i];
}

 printf("result : \n");
      for(i=1;i<=n;i++)
      {
          if(i==1)
          {
                        printf("x%d= %f \n",i,y[i]);

          }
          if(i==2)
          {
                        printf("y%d= %f \n",i,y[i]);

          }
          if(i==3)
          {
                        printf("z%d= %f \n",i,y[i]);

          }
        }






















}
