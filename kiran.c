#include<stdio.h>
int main()
{
int a[100],search,i,n,pos=-1;
printf("enter the size of array");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the number to search");
scanf("%d",&search);
for(i=0;i<n;i++)

if(a[i]==search)
{
printf("%d is present at location %d",search,i);
break;
}
{
if(pos>=0)
printf("key is found=%d",pos);
else
printf("key is not f0und");
}
return 0;
}
