# include<iostream.h>
int main()
{
    int n, m;
    int lines;
    printf("Enter the numberof lines: ");
    scanf("%d", &lines);
    for(n=1; n<=lines; n++)
    {
        for(m=1; m<=n; m++)
            printf("%d", m);
        for(m=n-1; m>0; m--)
            printf("%d", m);
        printf("\n");    
    }
    return 0;
}