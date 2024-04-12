#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int a[MAX];
int top=-1;
void push(int d);
void push(int d)
{
if(top==MAX-1)
{
printf("stack overflow");
exit(1);
}
top++;
a[top]=d;
}
int display();
int display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d",a[i]);
}
}
int main()
{
push(10);
push(20);
display();
return 0;
}
