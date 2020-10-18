#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {   long long n,k,temp,c;
        cin>>n>>k;
        long long  letterscount[n];
        for(int i=0;i<n;i++)
        {
            cin>>letterscount[i];

        }
        if(n==1)
        {
            c=letterscount[0]/k;
            c=c+1;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(letterscount[i]<k)
                {
                    c=i+1;
                    cout<<c<<endl;
                    break;
                }
                else
                {   c++;
                    temp=letterscount[i]-k;
                    letterscount[i+1]+=temp;;
                    letterscount[i]=letterscount[i]-k;
                }
            }
            if(c==n)
            {
                if(letterscount[n-1]>k)
                {
                    long long p=temp/k;
                    p=p+1;
                    c+=p;
                }
            }
        }
        cout<<c<<endl;

    }
    return 0;

}
