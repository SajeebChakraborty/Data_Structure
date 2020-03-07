#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    string array[105],b[105];
    cin >> n;
    for(i=1;i<=n;i++){

        cin >> array[i];


    }
    k=1;
    for(i=5;i<=n;i++){

        b[k] = array[i];
        k++;


    }
    array[5] = "karim";
    for(i=6,j=1;i<=n+1,j<=k;i++,j++){

        array[i] = b[j];



    }

    for(i=1;i<=n+1;i++){


        cout << array[i] << endl;



    }

}
