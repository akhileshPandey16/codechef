//https://www.codechef.com/problems/CNOTE
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        //Declaring and initializing X,Y,K,N
         --t;
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        if (y>=x) {
            cout<<"LuckyChef"<<"\n";
        }
        else{ int flag;
            int dif=x-y;int p,c;
        for (int i=0; i<n; i++) {
            cin>>p>>c;
            if((p>=dif)&&(k>=c)){
                flag=1;
                
            }
            else if(flag!=1){
                if(i==(n-1)){cout<<"UnluckyChef"<<"\n";}
            }
        }
            if (flag==1) {
                cout<<"LuckyChef"<<"\n";
            }
            flag=0;
        }
    }
}
