#include <bits/stdc++.h>
using namespace std;

//koolgax99
int main()
{
	long long int T; cin >> T; 
	while(T--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int x =1; 
		x = ceil((-1.0+sqrt(1+8*k))/2.0);
		
        long long int bob = n-x-1;
		long long int ace = n-(k-(x*(x-1)/2));
		
		for(long long int i=0;i<n;i++)
		{
			if(i != bob && i != ace)
				cout<<'a';
			else
				cout<<'b';
				
		}
		
		cout<<"\n";
    }
    return 0;
}