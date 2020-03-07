#include<stdio.h>
int main()
{
    int array[105],n,i,j,sum=0,avg,max,min;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d",&array[i]);
        sum = sum + array[i];



    }
    avg = sum/n;
    max = array[1];
    min = array[1];
    for(i=1;i<=n;i++){

        if(max<array[i]){

            max = array[i];

        }
        if(min>array[i]){

            min = array[i];


        }


    }
    printf("Maximum Value = %d\n",max);
    printf("Minimum Value = %d\n",min);
    printf("Average Value = %d\n",avg);
    printf("Total Value = %d\n",sum);


}
