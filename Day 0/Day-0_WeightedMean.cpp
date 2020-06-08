#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int sum1=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sum1+=b[i];
    }
    double sum2=0.0;
    for(int i=0;i<n;i++)
    {
        sum2+=a[i]*b[i];
    }
    sum2=sum2/sum1;
    cout<<fixed<<setprecision(1)<<sum2<<endl;

}

