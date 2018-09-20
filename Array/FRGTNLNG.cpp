//https://www.codechef.com/problems/FRGTNLNG
#include<iostream>
#include<set>
#include <iterator>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int N,K;
        cin>>N>>K; //N->No. of Old Words in next line, K->No. of dictionaries
        string arr[N];//Array of Old 'forgotten' words
        for (int i=0; i<N; i++) {
            cin>>arr[i]; //Filling up of forgotten words
        }
        set<string> new_lang;   //Declaring a set for new words.(No repetition allowed)
        for (int i=0; i<K; i++) {
            int l; cin>>l;     //The integer before the 'l' new words
            for (int j=0; j<l; j++) {
                string temp;
                cin>>temp;
                new_lang.insert(temp);
            }
            
            
        }
    }
    
    
    
}
