#include<stdio.h>
void readarray(int a[],int n);
void readarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void printarray(int a[],int n);
void printarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void swap(int *x, int *y);
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
void sortarray(int a[],int n);
void sortarray(int a[],int n)
{
int i,j,min;

for(i=0;i<n-1;i++){
 min=i;
 for(j=i+1;j<n;j++)
 {
  if(a[j]<a[min])
  min=j;
 }
 if(min!=i)
swap(&a[i],&a[min]);
}
}
int main()
{
int a[50],n;
printf("ENETER THE OF SIZE");
scanf("%d",&n);
printf("enter the array elements");
readarray(a,n);
printf("sorting in ORDER");
sortarray(a,n);
printarray(a,n);
return 0;
}

