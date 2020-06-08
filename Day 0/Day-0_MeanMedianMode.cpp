#include<bits/stdc++.h>
using namespace std;


int main() 
{
    
    int n; 
	cin>>n;
	 int a[n]; 
	 long sum=0;
    
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    double mean, median;
    
    mean = (double)sum/n;
    
    sort(a,a+n);
    if(n%2==0) 
        median = (double)(a[n/2-1]+a[n/2])/2;
    else 
        median = a[n/2];
    
    int mode=a[0], maxi=1, ctr=1;
    for(auto i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) {
            ctr++;
        }
        else 
            ctr=1;
        if(ctr>maxi) 
        {
            maxi=ctr;
            mode=a[i];
        }
    }
    
    cout<<mean<<"\n"<<median<<"\n"<<mode;
    
    return 0;
}




