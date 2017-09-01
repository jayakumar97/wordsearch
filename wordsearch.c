#include<stdio.h>
//using namespace std;
char a[200][200];
char b[20][20];
int n,m,n2,count=0;
int comp(int x,int y)
{
int temp=0,k;int i=0,j=0,d;
for(k=0;k<n2;k++)
{

int len=strlen(b[k]);

for(i=x,j=y,d=0;i<n&&b[k][d]!='\0';i++,d++)
{
if(a[i][j]!=b[k][d])
    break;
}
if(d==len)
   {

    temp++;
    printf("\nfound:\"%s\"at %d,%d to %d,%d",b[k],x+1,y+1,i,j+1);
   }
for(i=x,j=y,d=0;j<n&&b[k][d]!='\0';j++,d++)
{
    if(a[i][j]!=b[k][d])
    break;

}
if(d==len)
    {temp++;
    printf("\nfound:\"%s\"at %d,%d to %d,%d",b[k],x+1,y+1,i+1,j);
    }
    for(i=x,j=y,d=0;j>=0&&b[k][d]!='\0';j--,d++)
{
    if(a[i][j]!=b[k][d])
    break;

}
if(d==len)
    {temp++;
    printf("\nfound:\"%s\"at %d,%d to %d,%d",b[k],x+1,y+1,i+1,j+2);
    }
for(i=x,j=y,d=0;i>=0&&b[k][d]!='\0';i--,d++)
{
    if(a[i][j]!=b[k][d])
    break;

}
if(d==len)
    {temp++;
    printf("\nfound:\"%s\"at %d,%d to %d,%d",b[k],x+1,y+1,i+2,j+1);
    }
}
return temp;
}
int main()
{
int i,j;
printf("Enter n ");
scanf("%d",&n);
printf("\nEnter matrix\n");
for(i=0;i<n;i++)
{
//for(j=0;j<m;j++)
scanf("%s",a[i]);
}
printf("\nEnter no of words to be searched ");
scanf("%d",&n2);
printf("\nEnter the Words\n");
for(i=0;i<n2;i++)
scanf("%s",b[i]);

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
count+=comp(i,j);
}
printf("\nno of words found are %d",count);
}
