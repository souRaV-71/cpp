//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
            int rev_var=0;
            int temp = a[i];
            
            while(temp>0){
                int r = temp%10;
                
                temp/=10;
                
                rev_var = (rev_var*10)+r;
            }
            
            if(rev_var!=a[i]){
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends