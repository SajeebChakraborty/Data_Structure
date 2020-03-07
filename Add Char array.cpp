#include<iostream>
using namespace std;
int main()
{
    int i,j,n,p;
    char array[105],b[105];
    cin >> n;
    for(i=1;i<=n;i++){

        cin >> array[i];


    }
    for(j=1;j<=n;j++){

        cin >> b[j];


    }
    p = n + n;
    for(i=n+1,j=1;i<=p,j<=n;i++,j++){

        array[i] = b[j];


    }
    for(i=1;i<=p;i++){


        cout << array[i];

    }














}
