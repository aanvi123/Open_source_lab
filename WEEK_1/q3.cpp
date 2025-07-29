#include<bits/stdc++.h>
using namespace std;

int main(){
string text;
string reverse="";
cout<<" Enter the string : ";
cin>>text;
for(int i=text.length()-1;i>=0;i--){
reverse+=text[i];
}
cout<<"Reversed string is : "<< reverse;

return 0;

}
