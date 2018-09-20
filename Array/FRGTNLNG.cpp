//https://www.codechef.com/problems/FRGTNLNG
#include<iostream>
#include<stdio.h>
#include<set>
#include <iterator>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int N,K;
        cin>>N>>K; //N->No. of Old Words in next line, K->No. of new dictionaries
        string arr[N];//Array of Old 'forgotten' words
        for (int i=0; i<N; i++) {
            cin>>arr[i]; //Filling up of forgotten words
        }
        set<string> new_lang;   //Declaring a set for new words.(No repetition allowed)
        for (int i=0; i<K; i++) {
            int l; cin>>l;     //The integer 'l' before the 'l' new words
            for (int j=0; j<l; j++) {
                string temp;
                cin>>temp;
                new_lang.insert(temp);
            }
        }
        //Now that we have both old and the new words, let's compare them
        set<string>:: iterator it;
        //Outer loop to cycle through 'N' old words
        for (int i=0; i<N; i++) {
            int flag=0;
            for( it = new_lang.begin(); it!=new_lang.end(); ++it){ //Inner loop to cycle through unique new words
                string newWord=*it;
//                int a=strcmp(newWord,arr[i]);
//                if(a==0)cout<<"Yes"<<"\t";
                if (newWord==arr[i]) {
                    flag=1;
                }
        }
            if(flag!=0){cout<<"YES"<<"\t";}
            else if (flag==0){cout<<"NO"<<"\t";}
        
    }
        cout<<"\n";
    
    }
}
//COMPLEXITY
//================
//
//If we implement a brute force solution, there are worst case MAXL∗MAXK words and for each forgotten word, we do a linear search. So total complexity is MAXL∗MAXK∗MAXN.
//Using set, complexity can be reduced to MAXL∗MAXK+MAXN∗log(MAXL∗MAXK).


