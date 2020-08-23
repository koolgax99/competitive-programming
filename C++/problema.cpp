#include <bits/stdc++.h>
#include <list>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
//koolgax99
int main()
{
	int T; 
	cin >> T;
	while(T--)
    {
        int n,i,j;
        cin>>n;
        cout<<n;
        int a[n], c[n];
        
        for(j=0;j<n;j++){
            fo(i,n){
                cin>>a[i]>>c[i];
            }
        }
        
        int count=0;
        
        
        if(a[0]>=c[0]){
                count++;
            }
        else{
            count;
        }

        for(i=1;i<n;i++){
            
            if((a[i-1]<a[i] && c[i-1]<c[i] && a[i]>=c[i])){
                count++;
                
            }
            else{
                break;
            }
        }


        if(count==n){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
        cout<<n<<endl;;
    }
    return 0;
}
