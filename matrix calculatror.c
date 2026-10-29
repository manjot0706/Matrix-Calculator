#include<stdio.h>

int main()
{
    int raw,colm,choice;
    int A[10][10],B[10][10],C[10][10];
    int i,j,k;

    

    printf("Please Select for operation : \n");
    printf("1.Addition\n");
    printf("2.Substraction \n");
    printf("3.Multiplication \n");
    printf("4.Transpose \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:

        printf("Enter Number Of Rows :\n");
        scanf("%d",&raw);

        printf("Enter Number Of colm :\n");
        scanf("%d",&colm);

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("Enter rows for Matrix A[%d][%d] : \t",i,j);
                scanf("%d",&A[i][j]);

            }
            
        }

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("Enter colums for Matrix B[%d][%d] : \t",i,j);
                scanf("%d",&B[i][j]);

            }
            
        }
        
        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
            
        }

        //For printing

        printf("Matrix A : \n");
        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("%d \t",A[i][j]);
            }
            printf("\n");
            
        }
        printf("\n");

        printf("Matrix B : \n");

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("%d \t",B[i][j]);
            }
            printf("\n");
            
        }

        printf("\n");

        printf("Additiion : \n");

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("%d \t",C[i][j]);
            }
            printf("\n");
            
        }
        
        break;

    //Substraction    
        
    case 2:

        printf("Enter Number Of Rows :\n");
        scanf("%d",&raw);

        printf("Enter Number Of colm :\n");
        scanf("%d",&colm);

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("Enter rows for Matrix A[%d][%d] : \t",i,j);
                scanf("%d",&A[i][j]);

            }
            
        }

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("Enter colums for Matrix B[%d][%d] : \t",i,j);
                scanf("%d",&B[i][j]);

            }
            
        }
        
        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                C[i][j] = A[i][j] - B[i][j];
            }
            
        }

        //For printing

        printf("Matrix A : \n");
        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("%d \t",A[i][j]);
            }
            printf("\n");
            
        }
        printf("\n");

        printf("Matrix B : \n");

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("%d \t",B[i][j]);
            }
            printf("\n");
            
        }

        printf("\n");

        printf("Subjtraction : \n");

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("%d \t",C[i][j]);
            }
            printf("\n");
            
        }
        
        break;

    // multiplication
    case 3:
{
    int r1,r2,c1,c2;

    printf("Enter the number of row and colum of Matrix A:\n");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number of row and colum of Matrix B:\n");
    scanf("%d %d",&r2,&c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication of this two matrix is not possible \n");
    }
    else
    {
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c1; j++)
            {
                printf("Enter th elements of Matrix A [%d][%d] : \t",i,j);
                scanf("%d",&A[i][j]);
            }
            
        }

        for ( i = 0; i < r2; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                printf("Enter th elements of Matrix B [%d][%d] : \t",i,j);
                scanf("%d",&B[i][j]);
            }
            
        }

        //Multiplicaton formula

        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                C[i][j]=0;
                for ( k = 0; k < c1; k++)
                {
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
                
            }
            
        }
        // For printing

        printf("Matrix A \n");
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                printf("%d \t",A[i][j]);
            }
        printf("\n");
        }



        printf("Matrix B \n");
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                printf("%d \t",B[i][j]);
            }
        printf("\n");
        }


        printf("Your product is \n");
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                
                printf("%d \t",C[i][j]);
            }
        printf("\n");
        }
        
    }
    break;

    case 4:

        printf("Enter Number Of Rows :\n");
        scanf("%d",&raw);

        printf("Enter Number Of colm :\n");
        scanf("%d",&colm);

        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                printf("Enter Matrix Elements [%d][%d] : \t",i,j);
                scanf("%d",&A[i][j]);

            }
            
        }

        
        //Logic
        
        for ( i = 0; i < raw; i++)
        {
            for ( j = 0; j < colm; j++)
            {
                C[i][j] = A[j][i];
            }
            
        }

        //For printing

        printf("Transpose of Matrix : \n");
        for ( i = 0; i < colm; i++)
        {
            for ( j = 0; j < raw; j++)
            {
                printf("%d \t",A[i][j]);
            }
            printf("\n");
        }      
    break;
}

    default:
        break;
    }
}