#include <bits/stdc++.h>
using namespace std;

//koolgax99
int main()
{
	int T; cin >> T; 
	while(T--)
    {
		int N, M; cin >> N >> M;
        vector<int> f(N);
        vector<int> p(N);
        int i;

        for(i=0 ; i<N; i++)
        {
            cin>> f[i];
        }

        for(i=0 ; i<N; i++)
        {
            cin>> p[i];
        }

        //mappig the vectors
        map<int,int> m;

        //lookig for the same fruits
	    for(i=0 ; i<N; i++)
	    {
	        m[f[i]]+=p[i];
	        cout<< m[f[i]]<<endl;
	    }

	    int min = INT_MAX;

        //counting the min value 
	    for(auto itr=m.begin(); itr!=m.end(); itr++)
	    {
	        if(itr -> second<min)
	            min = itr -> second;
	            //cout<<min<<endl;
	       
	    }
	    cout<< min<< endl;
	}

	return 0;
}