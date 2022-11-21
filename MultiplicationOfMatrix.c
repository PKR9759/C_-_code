// Online C compiler to run C program online
#include<stdio.h>
// #define m 4 
// #define n 3

int main(){
    int m1,n1,m2,n2;
    printf("enter the no of rows and columns in matrix 1 \n");
    scanf("%d %d",&m1,&n1);
    printf("enter the no of rows and columns in matrix 2 \n");
    scanf("%d %d",&m2,&n2);

    if(m2!=n1)
    { 
        printf("those matrix's multiplication not possible!!!!");
    }
    else
    {


    int mat1[m1][n1],mat2[m2][n2],res[m1][n2],i,j,k;
    printf("enter the elements of  matrix 1 row by row \n");
    
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&mat1[i][j]);   
        }    
    }
    
    printf("enter the elements of  matrix 2 row by row \n");

    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&mat2[i][j]);
               
        }    
    }

     for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            
            for(k=0;k<n2;k++)
            {

            
                res[i][j]=(mat1[i][k]*mat2[k][j]);

            }
            
        } 
        
        
    }
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",res[i][j]);
               
        }   
        printf("\n");
    }



    }
    
   
    return 0;
}