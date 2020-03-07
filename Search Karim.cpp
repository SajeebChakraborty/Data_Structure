#include<iostream>
using namespace std;
int main()
{

    int i,n,a,c=0;

    cin>>n;
     string str[n],name="Karim";
    for(i=0;i<n;i++){
       cin>>str[i];
    }
    for(i=0;i<n;i++){
      if(str[i].compare(name)==0){
          a=i;
          c++;
      }
    }
    if(c>=1){

        cout<<"yes"<<endl;
        cout<<a+1;
    }
    return 0;
}
