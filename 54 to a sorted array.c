#include<stdio.h>
int main()
{
    int array[105],i,j,n,k[105],t,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d",&array[i]);


    }
    for(i=1;i<=n;i++){

        if(array[i]<54 && array[i+1]>54){

            //k= array[i+1];
            p=1;
            for(j=i+1;j<=n;j++){


                k[p]=array[j];
                p++;



            }

            array[i+1] = 54;
            //array[i+2] = k;
            for(j=i+2,t=1;j<=n+1,t<=p;j++,t++){

                array[j] = k[t];


            }


        }
        else if(array[i]>54 && i==1){


            p=1;
            for(j=i;j<=n;j++){


                k[p]=array[j];
                p++;



            }
            array[i] = 54;
            for(j=2,t=1;j<=n+1,t<=p;j++,t++){

                array[j] = k[t];


            }






        }


    }
    for(i=1;i<=n+1;i++){

        printf("%d\n",array[i]);


    }














}
