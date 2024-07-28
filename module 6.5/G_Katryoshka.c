#include<stdio.h>
int main()
{
    long long int e, m, b,sum=0;
    scanf("%lld %lld %lld",&e,&m,&b);
    if(e<=0 || m<=0 || b<=0)
    {
        printf("%d\n",0);
    }
    else{
        if(e>=m && m<=b)
        {
            sum=m;
            e=e-m;
            b=b-m;
            e=e/2;
            if(e<=b)
            {
                sum=sum+e;      
            }
            else{
                sum=sum+b;   
            }
            printf("%lld",sum);        
        }
        
        else if(m>=b && b<=e)
        {
            sum=b;
            e=e-b;
            m=m-b;
            e=e/2;
            if(b==sum)
            {
                printf("%lld\n",sum);
            }
            else if(e<=m)
            {
                sum=sum+e;
                printf("%lld",sum); 
                
            }
            else{
                sum=sum+m;
                printf("%lld",sum); 
            }
                  
        }

        else if(m>=e && e<=b)
        {
            sum=e;
            m=m-e;
            b=b-e;
            m=m/2;
            if(e==sum)
            {
                printf("%lld\n",sum);
            }
            else if(m<=b)
            {
                sum=sum+m;
                printf("%lld\n",sum);          
            }
            else{
                sum=sum+b;
                printf("%lld\n",sum);
            }              
        }
    }
    
    return 0;
}