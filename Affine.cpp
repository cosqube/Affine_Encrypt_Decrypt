#include<bits/stdc++.h>
using namespace std;
void encrypt(string str,int a,int b){
    string cipher = "";
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            cipher+=' ';
        }
        else if(isupper(str[i])){
            cipher+=char((((a*(int(str[i])-65))+b)%26)+65);
        }
        else{
            cipher+=char((((a*(int(str[i])-97))+b)%26)+97);
        }
    }
    cout<<cipher;
}
void decrypt(string text,int a,int b){
    int ai = 0;
    for(int i=0;i<26;i++){
        if ((a*i)%26==1)
        {
            ai=i;
            break;
        }
        
    }
    string ans="";
    for(int j=0;j<text.size();j++){
        if(text[j]==' '){
            ans+=' ';
        }
        else if(isupper(text[j])){
            int y = text[j]-'A';
            int x = ai*(y-b)+26;
            ans+=char(((x%26+26)%26)+65);
        }

        else{
            int m = text[j]-'a';
            int n = ai*(m-b)+26;
            ans+=char(((n%26+26)%26)+97);
        }

    }
    cout<<ans;
}

int main(){
    string str;
    string text;
    int a;
    int b;
    cout<<"Enter text to encrypt: ";
    getline(cin,str);
    cout<<endl;
   
    cout<<"Enter slope A: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter slope B: ";
    cin>>b;
    cout<<endl;
    cin.ignore();
    encrypt(str,a,b);
    cout<<endl;
    cout<<"Enter text to decrypt: ";
    getline(cin,text);
    cout<<endl;
    decrypt(text,a,b);
}