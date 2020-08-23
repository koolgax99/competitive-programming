
    n = int(input())

i = 1
while i<n:
    c,d = map(int, input().split())
    
    list1 = []
    e = c*d
    f = min(c,d)
    j = 0

    for j in range(1,f+1):
            p = j**2
            h = e % (p)
            if (h == 0 ):
                list1.append(j)
            else:
                continue
            j+=1
        
        

    g = list1[-1]
    print(e/(g*g))
    i+=1
    
        int p,a[p],i,j,even=0, odd = 0,x;
	    cin >>p;

        for(i=0;i<p;i++)
        {
            cin>>a[i]
        }
        for(j=0;j<p;j++)
        {
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        x = even*odd;
        cout>>x>>endl