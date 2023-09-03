#include<stdio.h>
int main()
{
   int a[100],n,p,i,num;
   printf("enter limit");
   scanf("%d",&n);
   printf("enter n numbers");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter number to insert");
   scanf("%d",& num);
   sam:
   printf("\n enter position");
   scanf("%d",&p);
   if(p>=n)
   {
   for(i=p;i<n;i++)
      printf("invalid position");
       goto sam;
   }
     for(i=n;i>=p;i--)
   {
     a[i+1]=a[i];
   }
     a[p]=num;
     printf("\n array");
     for(i=0;i<n;i++)
     printf("%d\t",a[i]);
}
