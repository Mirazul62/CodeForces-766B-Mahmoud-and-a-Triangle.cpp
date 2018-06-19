#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,count=0,j,k;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n-2; i++)
    {
        /// cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
        for(j=i+1; j<=i+1; j++)
        {
            for(k=j+1; k<=j+1; k++)
            {
                if(a[i]+a[j]<=a[k]);
                else
                {
                    count++;
                     if(count>0)
                         break;
                }
            }
        }

    }
  ///  cout<<count<<endl;
    if(count>0)
        cout<<"YES";
    else
        cout<<"NO";
}
