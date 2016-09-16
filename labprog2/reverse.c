#include<stdio.h>
int main()
{ 
int a,rev=0,temp;
printf("ENTER THE NUMBER\n");
scanf("%d",&a);
temp=a;
while (temp!=0)
{
rev=rev*10;
rev=(rev+temp%10);
temp=temp/10;
}
printf("reverse of number is %d\n",rev);
if (a==rev)
printf("%d is pallandrome\n",a);
else
printf ("%d is not a pallandrome\n",a);
return 0;
}
