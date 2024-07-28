#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    if(r==c)
    {
        int flag=0;

        for(int i=0; i<r; i++)
        {
        for(int j=0; j<=i; j++)
            {
            if(arr[i][j]==1)
                {
                    continue;
                }
                else
                {
                    flag++;
                    break;
                }
                
            }
            
        }
        
        
        for(int i=0; i<r; i++)
        {
        for(int j=c-1; j>=0; j--)
            {
            if(arr[i][j]==1)
                {
                    continue;
                }
                else{
                    flag++;
                    break;
                }
                
            }  
            
        }

        if(flag==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else{
        printf("NO");
    }

    return 0;
}