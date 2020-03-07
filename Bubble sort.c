#include<stdio.h>
int main()
{
    int array[105],i,j,n,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d",&array[i]);


    }
    for(i=1;i<=n;i++){

        for(j=i+1;j<=n;j++){

            if(array[i]>array[j]){

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;




            }




        }


    }
    for(i=1;i<=n;i++){

        printf("%d\n",array[i]);


    }













}
