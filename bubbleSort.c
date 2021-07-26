#include<stdio.h>
#include<conio.h>
void bs(int a[100],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void main()
{
    int choice,a[100],i,n;
    printf("1.Bubble Sort\n");
    printf("\nEnter no. of elements u wish to add in array=");
    scanf("%d",&n);
    printf("\nEnter elements of array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bs(a,n);
    printf("\nSorted Array :\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

}
