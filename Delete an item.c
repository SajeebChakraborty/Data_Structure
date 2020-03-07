#include<stdio.h>
int main()
{
    int array[105],i,j,n,p,b[105];
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d",&array[i]);


    }
    p=1;
    for(j=3;j<=n;j++){

        b[p] = array[j];
        p++;

    }
    for(i=2,j=1;i<=n-1,j<=p;i++,j++){

        array[i] = b[j];

    }
    for(i=1;i<=n-1;i++){

        printf("%d\n",array[i]);

    }















}
