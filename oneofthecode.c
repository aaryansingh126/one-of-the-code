#include<stdio.h>
int main()
{
    int n,i,length[100],width[100],height[100];
     scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&length[i]);
        scanf("%d",&width[i]);
        scanf("%d",&height[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(height[i]<41)
        {
            printf("%d\n",length[i]*height[i]*width[i]);
        }
        
        
    }
    return 0;
}