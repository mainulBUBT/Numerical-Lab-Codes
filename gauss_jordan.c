#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n,c,s;
    double arr[20][20],x[10],y[20][20];

    printf("Enter the value of matrix");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            printf("Enter value [%d][%d]: ", i,j);
            scanf("%lf", &arr[i][j]);
        }
    }


    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                c = arr[i][j]/arr[j][j];
                for(k=1; k<=n+1; k++)
                {
                    arr[i][k] = arr[i][k]-(c*arr[j][k]);
                }

            }
        }
    }
printf("Result Matrix");
for(i=1; i<=n; i++){
    x[i] = arr[i][n+1]/arr[i][i];
    printf("%lf\n", x[i]);
}

}
