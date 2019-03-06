#include<stdio.h>
#include<string.h>

int n,r;
int min(int a,int b)
{
    if(a<b) return(a);
    else    return(b);
}

int c_1d(int n,int r)
{
    int c[r+1];
    memset(c,0,sizeof(c));
    c[0]=1;
    int i,j;
    for(i=1;i<=n;i++)
        for(j=min(i,r);j>0;j--)
            c[j]+=c[j-1];
    return(c[n,r]);
}
int c_2d(int n,int r)
{
    int i,j;
    int c[n][n];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=min(i,r);j++)
        {
            if((j==0) || (i==j))
                c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
    return(c[n][r]);


}
int main()
{
    printf("Enter n and r : ");
    scanf("%d%d",&n,&r);
    printf("%dC%d=%d",n,r,c_2d(n,r));

}
