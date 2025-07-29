 #include<iostream>
 using namespace std;


int main(){
    int n;
     cout<<" Enter the array size: ";
     cin>>n;
     double arr[n];
     double average=0.0;
     double totalsum= 0.0;
     cout<<"Enter the integers : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
    totalsum+=arr[i];

  }
     average=totalsum/n;
cout<< "Average is :"<< average<<endl;
 return 0;
}