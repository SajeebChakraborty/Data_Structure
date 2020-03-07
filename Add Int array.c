#include<stdio.h>
int main()
{
    int array[105],b[105],i,j,n,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d",&array[i]);


    }
    for(j=1;j<=n;j++){

        scanf("%d",&b[j]);


    }
    p = n + n;
    for(i=n+1,j=1;i<=p,j<=n;i++,j++){

        array[i] = b[j];


    }
    for(i=1;i<=p;i++){


        printf("%d\n",array[i]);

    }














}
