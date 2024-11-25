#include<stdio.h>

int main()
{  int k=0,n,n1;
    int *a=(int*)calloc(30,sizeof(int));
    printf("enter the number of elements\n");
    scanf("%d",&n);
   printf("enter the array 1");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *b=(int*)calloc(10,sizeof(int));
     printf("enter the number of elements\n");
    scanf("%d",&n1);
    printf("enter the array 2");
    for(int i=0;i<n1;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<n1;i++)
    a[n+i]=b[i];
   for(int i=0;i<n+n1;i++)
    printf("%d",a[i]);
    return 0;
}