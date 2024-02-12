#include<stdio.h>
#include<conio.h>
void main()
{
    float x[200],y[200],z[200];
    float a11,a12,a13,a21,a22,a23,a31,a32,a33;
    float c1,c2,c3;
    int n;
    printf("Enter A11 A12 A13 A21 A22 A23 A31 A32 A33 Values\n");
    scanf("%f%f%f%f%f%f%f%f%f",&a11,&a12,&a13,&a21,&a22,&a23,&a31,&a32,&a33);
    printf("Enter C1 C2 C3\n");
    scanf("%f%f%f",&c1,&c2,&c3);
    printf("Enter The Number Of Iterations Do You Want\n");
    scanf("%d",&n);
    clrscr();
    x[0]=(c1/a11);
    y[0]=(1/a22)*(c2-(a21*x[0]));
    z[0]=(1/a33)*(c3-(a31*x[0]) -(a32*y[0]));
    if(a11==a22&&a11==a33&&abs(a11)>=abs(a12)+abs(a13)&&abs(a22)>=abs(a21)+abs(a23)&&abs(a33)>=abs(a31)+abs(a32))
    {   printf("Gauss Seidal Iteration Method\n");
        printf("------------------------------\n");
        printf("Iteration   X\t  Y\t  Z\n");
        printf("------------------------------\n");
        printf("1.  |\t%.4f\t%.4f\t%.4f\n",x[0],y[0],z[0]);
        printf("______________________________\n");
        for(int j=1; j<n; j++)
        {
            x[j]=(1/a11)*(c1-a12*(y[j-1])-a13*(z[j-1]));
            y[j]=(1/a22)*(c2-a21*(x[j])-a23*(z[j-1]));
            z[j]=(1/a33)*(c3-a31*(x[j])-a32*(y[j]));
            if(j<9)
            {
                printf("%d.  |\t%.4f\t%.4f\t%.4f\n",j+1,x[j],y[j],z[j]);
                printf("______________________________\n");
            }
            else
            {
                printf("%d. |\t%.4f\t%.4f\t%.4f\n",j+1,x[j],y[j],z[j]);
                printf("______________________________\n");
            }
    }
    }
    else
    {
        printf("Gauss Seidal  Not Suitable\n");
    }
    }