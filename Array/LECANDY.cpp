//https://www.codechef.com/problems/LECANDY
#include<iostream>
using namespace std;
int main(){
    //Declare a int for t test cases
    int t;
    cin>>t;
    while (t>0) {
        int n,c;
        cin>>n>>c;
        for (int i=0; i<n; i++) {   //Using for loop for n test cases
            int a;   //Declaring integer a
            cin>>a;
            c=c-a;
        } t-=1;
        //This logic can be replaced with
//        if(c<0){
//            cout<<"No"<<"\n";
//        }
//        else if(c>=0){
//            cout<<"Yes"<<"\n";
//        }
        //*******************************
        cout<<(c<0? "No":"Yes")<<"\n";
        //*******************************
    }
    return 0;
}
