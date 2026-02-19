
#include <stdio.h>
int main(){
    int n,i,f=1;
    printf("Enter some value=");
    scanf("%d",&n);
    if (n<0)
    {printf("Factorial not defined");
    }
    else 
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("factorial = %d",f);
    }
    return 0;
}
