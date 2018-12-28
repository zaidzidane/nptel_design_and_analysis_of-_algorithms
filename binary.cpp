#include <iostream>

using namespace std;
int binarysearch(int arr[],int a,int b, int c)
{   
    //cout<<"zaid";
    if((c-b)==0)
    {
        cout<<"False";
    }
    int mid=(c+b)/2;
    cout<<mid;
    if(a==arr[mid]){
        cout<<"true"<<endl;
        cout<<mid+1;
    }
    if(a<arr[mid])
    {
        return(binarysearch(arr,a,b,mid-1));
        
    }
    else
    {
        return(binarysearch(arr,a,mid+1,c));
        cout<<"zaid";
    }
}
    

int main()
{  int arr[10]={4,9,12,18,77,85,89,99};
   int a;
   int b;
   int c;
   cout<<"enter the element to be searched";
   cin>>a;
   cout<<"Enter the location of start";
   cin>>b;
   cout<<" Enter the location of end";
   cin>>c;
   binarysearch(arr,a,b,c);
   
   return 0;
}