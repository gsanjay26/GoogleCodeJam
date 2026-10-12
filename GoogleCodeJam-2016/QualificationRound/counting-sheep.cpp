#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n=0;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            cout<<"INSOMNIA";
            continue;
        }
        set<int> s1;
        int x;
        int k=0;
        while(s1.size()!=10)
        {
            k+=n;
            x=k;
            while(x!=0)
            {
                s1.insert(x%10);
                x=x/10;
            }

        }
        cout<<k;
    }
}


