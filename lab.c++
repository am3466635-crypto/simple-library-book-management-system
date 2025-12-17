#include<iostream>
using namespace std;
#include <string>
void great(){
cout<<"hello welcome lab"<<endl;
cout<<"welcome engAsmaa"<<endl;
}
int add(int a,int b){
return a+b;
}
int multiply(int a,int b){
return a*b;}
bool even (int n){
return n%2==0;
}
int findmax(int arr [],int size){
int maxvalue =arr[0];
for(int i=1;i<size;i++){
if(arr[i]>maxvalue)maxvalue=arr[i];
}
return maxvalue;
}
int findmin(int arr[],int size){
int minvalue=arr[0];
for( int i=1;i<size;i++){
if(arr[i]<minvalue)minvalue=arr[i];
}
return minvalue;
}
int sumArray(int arr[],int size){
int sum=0;
for (int i=0;i<size;i++)
sum+=arr[i
];
return sum;
}
bool search(int arr[],int size,int target)
{  for(int i=0;i<size;i++){
       if(arr[i]==target)
         return true;
}

    return false;}
int factorial(int n){if(n==0||n==1)return 1;return n*factorial(n-1);}
int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int sumdigits(int n){
    if (n==0)
        return 0;
    return (n%10)+sumdigits(n/10);
}
void reversearray(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
great(); 
cout<<add(5,10)<<endl;
cout<<multiply(5,10)<<endl;
cout<<even(4)<<endl;
int nums[5];
cout<<"enter 5 numbers:"<<endl;
for(int i=0;i<5;i++){
    cin>>nums[i];
}   
cout<<"your entered";
for(int i=0;i<5;i++){
    cout<<nums[i]<<" ";
}
cout<<"max value is:"<<findmax(nums,5)<<endl;               
cout<<"min value is:"<<findmin(nums,5)<<endl;
cout<<"sum of array is:"<<sumArray(nums,5)<<endl;
cout<<"search for number 3:"<<search(nums,5,3)<<endl;
cout<<"factorial of 5 is:"<<factorial(5)<<endl; 
cout<<"fibonacci of 6 is:"<<fibonacci(6)<<endl;
cout<<"sum of digits of 1234 is:"<<sumdigits(1234)<<endl;
return 0;
}