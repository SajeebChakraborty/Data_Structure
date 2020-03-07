#include<stdio.h>
int main()
{
    int array[105],n,b[105],i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d",&array[i]);


    }
    k=1;
    for(i=5;i<=n;i++){

        b[k] = array[i];
        k++;


    }
    array[5] = 99;
    for(i=6,j=1;i<=n+1,j<=k;i++,j++){

        array[i] = b[j];



    }

    for(i=1;i<=n+1;i++){


        printf("%d\n",array[i]);



    }

}
