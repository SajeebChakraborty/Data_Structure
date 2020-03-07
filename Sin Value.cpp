#include<iostream>
#include<math.h>
#define PI 3.1416
using namespace std;
int main()
{
    int n,i;
    double array[105],r[105],value;

    cin >> n;

    value = PI/180;

    for(i=1;i<=n;i++){

        cin >> array[i];

        r[i] = sin(value*array[i]);

        cout << r[i] << endl;


    }


}
