#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    int j=0;
 
   
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        if (arr[i] == 0)   
        {
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            j++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
        
    }
return 0;
}

//time complexity=O(n)
//space complexity=O(n)
