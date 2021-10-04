#include <stdio.h>
int main()
{
    int n,n2,n3;            
    printf("\nEnter the size of first array ");
    scanf("%d",&n);
    printf("\nEnter the size of second array ");
    scanf("%d",&n2);
    n3=n+n2;
    printf("\nEnter the sorted array elements");
    int a[n],b[n2],c[n3];   
    for(int i=0;i<n;i++)      
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=n;
    printf("\nEnter the sorted array elements");
    for(int i=0;i<n2;i++)     
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<n3;i++)
    printf("%d ",c[i]);        
    printf("\nAfter sorting...\n");
    for(int i=0;i<n3;i++)         
    {
        int temp;
        for(int j=i+1; j<n3 ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }       
    for(int i=0 ; i<n3 ; i++)       
    {
        printf(" %d ",c[i]);
    }
    return 0;   
}
