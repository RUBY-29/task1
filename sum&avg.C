
#include <stdio.h>

int main() {
    int n,height[10],i,sum=0;
    float avg;
    printf("Enter the numbers:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("element %d:",i);
        scanf("%d",&height[i]);
        sum = sum + height[i];
    }
    printf("enter value of sum:%d\n",sum);
    avg = (float)sum/n;
    printf("enter avg:%f",avg);

    return 0;
}
