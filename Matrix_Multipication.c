#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
    int a[5][5],b[5][5],mul[10][10],r,c,i,j,k;     
    printf("Enter the number of rows:");    
    scanf("%d",&r);    
    printf("Enter the number of columns:");    
    scanf("%d",&c);    
    printf("Enter the first matrix elements:\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
        scanf("%d",&a[i][j]);    
        }    
    }    
    printf("Enter the second matrix elements:\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            scanf("%d",&b[i][j]);    
        }    
    }       
    printf("Multiplication:\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<c;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }      
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            printf("%d\t",mul[i][j]);    
        }       
        printf("\n");    
    }     
} 