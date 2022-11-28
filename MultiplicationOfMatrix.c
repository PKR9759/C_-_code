#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int m1,n1,m2,n2,sum=0;
    
    scanf("%d %d",&m1,&n1);
    scanf("%d %d",&m2,&n2);

    if(m2!=n1)
    { 
        printf("MULTIPLICATION NOT POSSIBLE");
    }
    else
    {


    int mat1[m1][n1],mat2[m2][n2],res[m1][n2],i,j,k;
    printf("%d\t%d\n",m1,n2);
    
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&mat1[i][j]);   
        }    
    }
    

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
            sum=0;
            
            for(k=0;k<n1;k++)
            {

            
                sum+=(mat1[i][k]*mat2[k][j]);

            }
            res[i][j]=sum;        
        
           
            
            
        } 
         
         
        
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d\t",res[i][j]);
               
        }   
        printf("\n");
    }



    }
    
   
    return 0;
}
