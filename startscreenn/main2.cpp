#include<iostream>
#include<cmath>
using namespace std;
int main(){
    bool prime[1000] = {0};
    prime[0] = prime[1] = 1;
    for(int i=2;i<=sqrt(1000);++i){
        if(prime[i] == 0){
            for (int j=2*i;j<1000;j+=i){
                prime[j]=1;
            }
        }
        for(int i=2; i<1000; ++i){
            if(prime[i]==0)cout<<i<<endl;
        }
    }
    return 0;
}