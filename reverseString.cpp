#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str1;
    for(int i=str.length()-1; i>=0; i--){
        str1+=str[i];
    }
    cout<<str1<<endl;
}