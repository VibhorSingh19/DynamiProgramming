
//Equal sum partition problm
#include <iostream>

using namespace std;

int main()
{
    int arr[]={2,3,4,6};
    int l=sizeof(arr)/sizeof(arr[0]);
    int s=0;
     for(int i=0;i<l;i++)
     {
         s+=arr[i];
     }
     int ar[100][100];
     if(s%2==0)
     {
         int sum=s/2;
         for(int i=0;i<=sum;i++)
         {
           for(int j=0;j<=l;j++)
           {
               if(i==0)
               {
                   ar[i][j]=0;
               }
               if(j==0)
               {
                   ar[i][j]=1;
               }
           }      
         }
         for(int i=1;i<=sum;i++)
         {
           for(int j=1;j<=l;j++)
           {
               if(arr[i-1]<=j)
               {
                     ar[i][j]=max(ar[i-1][j-arr[i-1]],ar[i-1][j]);
                     
               }
               else
                ar[i][j]=ar[i-1][j];
              
           }      
         }
         for(int i=0;i<=sum;i++)
         {
           for(int j=0;j<=l;j++)
           {
            cout<<ar[i][j]<<" ";
           }      
           cout<<endl;
         }
         
         if(ar[sum][l]==1)
         cout<<"equal sum is possible";
         else
         cout<<"equal sum is not possible";
         
     }
     else
     {
         cout<<"equal sum is not possible";
     }
    return 0;
}

