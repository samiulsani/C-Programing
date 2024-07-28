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
        for(int j=0; j<c; j++)
            {
            if((i==j )|| (i+j==r-1))
                {
                   if(arr[i][j]!=1)
                   {
                    flag++;
                    break;
                   }
                }
                else if(arr[i][j]!=0)
                {
                    flag++;
                    break;
                }
                
            }
            
        }
        
        
        // for(int i=0; i<r; i++)
        // {
        //     for(int j=0; j<c; j++)
        //     {
        //     if(i+j==r-1)
        //         {
        //             continue;
        //         }
        //         if(arr[i][i]!=0)
        //         {
        //             flag++;
        //         }
        //     }  
            
        // }

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