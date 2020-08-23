#include<stdio.h>

int main()
{ 
    int m,n,p,q,c,d,k, sum=0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("enter the rows and columns for the first matrix\n";);
    scanf("%d%d", &m, %n);
    printf("enter the elements of the first matrix\n");

    for(c=0; c<m; c++)
    for(d=0; d<n; d++)
    scanf("%d", &first[10][10]);

    printf("enter the rows and columns for the second matrix\n";);
    scanf("%d%d", &p, %q);

    if (n!=p)
    printf("the matrix multiplication is not possible for the given values\n ");

    else 
    printf("enter the elements of the second matrix\n");
    
    for(c=0; c<m; c++)
    for(d=0; d<n; d++)
    scanf("%d", &second[10][10]);

    for(c=0; c<m; c++)
    {
        for(d=0; d<q; d++)
        {
            for(k=0; k<p; k++)
            {
                sum= sum+ first[c][k]*second[k[d]];
                

            }   
            multiply[c][d] = sum;
            sum=0;
        }
    }
    printf("product of the entered matrices:-\n");

    for(c=0; c<m; c++)
    {
        for(d=0; d<q;d++)
        printf("%d\t"; multiply[c][d]);
        
    }
    return 0;
}











