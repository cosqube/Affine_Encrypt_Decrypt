#include<bits/stdc++.h>
using namespace std;
int main(){
    int ai=0;
    int a = 3;
    int b = 2;
    for(int i=0;i<26;i++){
        if ((a*i)%26==1)
        {
            ai=i;
            break;
        }
        
    }
    string text="";
    string str;
    cout<<"Enter text to decrypt: ";
    getline(cin,str);
    for(int j=0;j<str.size();j++){
        if(str[j]==' '){
            text+=' ';
        }
        else if(isupper(str[j])){
            int y = str[j]-'A';
            int x = ai*(y-b)+26;
            text+=char(((x%26+26)%26)+65);
        }

        else{
            int m = str[j]-'a';
            int n = ai*(m-b)+26;
            text+=char(((n%26+26)%26)+97);
        }

    }
    cout<<text;

}