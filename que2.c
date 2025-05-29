#include<stdio.h>

void cube(int size)
{
    

    int a[size][size];
    int *ptr[size][size];
    

    printf("please enter element of a array : ");
    printf("\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }

    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            ptr[i][j] = &a[i][j];
        }

    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",*ptr[i][j] * *ptr[i][j] * *ptr[i][j] );
        }
        printf("\n");

    }

    


    
    

}


int main()
{

    int size;
    
    

    printf("enter size of 2D array : ");
    scanf("%d", &size);

    
    
    cube(size);

   



    return 0;
}