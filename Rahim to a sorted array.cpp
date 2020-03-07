#include<iostream>
using namespace std;
int main()
{
    string array[105],k[105];
    int i,j,n,t,p;
    cin >> n;
    for(i=1;i<=n;i++){

        cin >> array[i];


    }
    for(i=1;i<=n;i++){

        if(array[i]<"Rahim" && array[i+1]>"Rahim"){

            //k= array[i+1];
            p=1;
            for(j=i+1;j<=n;j++){


                k[p]=array[j];
                p++;



            }

            array[i+1] = "Rahim";
            //array[i+2] = k;
            for(j=i+2,t=1;j<=n+1,t<=p;j++,t++){

                array[j] = k[t];


            }


        }
        else if(array[i]>"Rahim" && i==1){


            p=1;
            for(j=i;j<=n;j++){


                k[p]=array[j];
                p++;



            }
            array[i] = "Rahim";
            for(j=2,t=1;j<=n+1,t<=p;j++,t++){

                array[j] = k[t];


            }






        }


    }
    for(i=1;i<=n+1;i++){

        cout << array[i] << endl;


    }














}
