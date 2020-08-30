/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    int arr[]={3, 4, 5, 2};
    //int l=sizeof(arr);
    int l=4;
    
    int sum=6;
    int ar[100][100];
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
            ar[i][j]=0;
            if(j==0)
            ar[i][j]=1;
            
        }
    }
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i]<sum)
            {
                ar[i][j]=max(ar[i][j-arr[i-1]],ar[i-1][j]);
            }
            else
            ar[i][j]=ar[i-1][j];
            
        }
       
    }
     for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            cout<<ar[i][j]<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}
