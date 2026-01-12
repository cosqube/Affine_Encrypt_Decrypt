#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string cipher_text="";
    int a = 3;
    int b=2;
    string str;
    cout<<"Enter text to encrypt: ";
    getline(cin,str);
    cout<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            cipher_text+=' ';
        }
        else if(isupper(str[i])){
            cipher_text+=char((((a*(int(str[i])-65))+b)%26)+65);
        }
        else{
            cipher_text+=char((((a*(int(str[i])-97))+b)%26)+97);
        }
    }
    cout<<cipher_text; 
}