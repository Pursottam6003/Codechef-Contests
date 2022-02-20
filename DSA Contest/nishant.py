t= int(input())

for _ in range(t):
    k= int(input())

    start=1
    end=10**9
    ans=None

    while start<=end:
        midd=(start+end)//2
        if midd*(midd+1)//2+1<=k:
            ans= midd+1
            start= midd+1
        else:
            end=midd-1
        
    print(2*ans)
