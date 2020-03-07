#include<iostream>
using namespace std;
int main()
{
    string array[105],temp;
    int i,j,n;
    cin >> n;
    for(i=1;i<=n;i++){

        cin >> array[i];


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

        cout << array[i] << endl;


    }













}
