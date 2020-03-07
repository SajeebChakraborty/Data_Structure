#include<iostream>
using namespace std;
int main()
{

    int i,n,a,j,count=0,k,t;

    cin>>n;
     string str[n],name="Karim";
    for(i=0;i<n;i++){
       cin>>str[i];
    }
    k =n;
    for(i=0;i<k;i++){
      if(str[i].compare(name)==0){
          a=i;
            n=n-1;
        if(str[i+1].compare(name)==0 && i==0){
            a =a+1;
            n=n-1;
            str[i]=str[i+2];
        }

        else{
           for(j=a;j<n;j++){
                //if(str[i+1]!=str[i])
                str[j]=str[j+1];
            }
        }

            count++;

      }
    }

    //cout<<"Output";
    for(i=0;i<k-count;i++){
       cout<<str[i]<<endl;
    }
    return 0;
}
