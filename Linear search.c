#include<stdio.h>
int main()
{
    int array[105],i,j,n,count=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d",&array[i]);


    }
    for(i=1;i<=n;i++){

        if(array[i]==77){

            count = count + 1;
            k = i;
        }



    }
    if(count>=1){

        printf("yes.position %d",k);

    }




}
