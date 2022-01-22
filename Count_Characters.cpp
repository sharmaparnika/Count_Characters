#include<iostream>
using namespace std;

int main(){
    char c;
    int ch=0,in=0,sp=0;
    while(c!=36){
        c=cin.get();
    
    if (c==' ' || c=='\n' || c=='\t'){
        sp++;
    }
    if(c>=48 && c<=57){
        in++;
    }
    if((c>=65 && c<=90) || (c>=97 && c<=122)){
        ch++;
    }
    
    }
    cout<<ch<<" "<<in<<" "<<sp;
    
}