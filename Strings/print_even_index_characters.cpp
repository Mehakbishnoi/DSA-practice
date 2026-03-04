#include<iostream>
#include<strings>
using namespace std;

int main(){

    string s="hello";
    int len=s.size();

    for(int i=0; i<len;i++){
        if(i%2==0){
            cout<< s[i];
        }
    }
    return 0;

}