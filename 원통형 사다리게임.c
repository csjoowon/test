#include<stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리
#include <time.h>
#include <windows.h>
#include <math.h>


int s[600][600];
int c[100000];
void ladder(){
/*for(i=0;i<a;i++){
        scanf("%d",&c[i]);
        p+=c[i];
    }
    average=(int)(p/a);
    for(i=0;i<a;i++){
        v+=pow(average-c[i],2);
    }
    f=(float)sqrt(v/a);
    printf("%.3f",f);*/


    int i,j,k,l,a,b, random;
    int average,f;
    long long int p=0,v=0;


    scanf("%d %d", &a, &b);
    average=(int)(100000/a);
    srand(time(NULL));
    for(int t=1;t<=100;t++){
        int result[600]= {0,};
    for(k=1; k<=100000; k++)
    {

        for (i=1; i<=b+2; i++)
        {
            for (j=1; j<=2*a+1; j++)
            {
                s[i][j]=0;
            }
        }

        for(i=2; i<=b+1; i++)
        {

            for(j=1; j<=2*a+1; j=j+2)
            {
                random = (rand()%a)+1;

                if(j/2==random)
                    s[i][j]=1;
                if(s[2*a+1][j]==1)
                {
                    s[1][j]==1;
                }

            }
        }

        for (i=1; i<=b+2; i++)
        {

            if(s[i][1]==1)
                s[i][2*a+1]=1;
            if(s[i][2*a+1]==1)
                s[i][1]=1;
        }

        //사다리 생성+무작위 가로선 생성+양끝 똑같이 취급


        for(i=1; i<=b+1; i++)
        {
            if(s[i][3]);
        }


        for (i=1; i<=b+2; i++)
        {

            for (j=1; j<=2*a+1; j++)
            {
               //    printf("%d", s[i][j]);
            }
             //    printf("\n");
        }




        j=2;
        for(i=1; i<=b+2; i++)
        {

            if(s[i][j+1]==1)
                j=j+2;
            else if(s[i][j-1]==1)
                j=j-2;
            if(j<=1)
                j=2*a;
            else if(j>=2*a+1)
                j=2;

            //    printf("%d %d\n", i, j);


        }
        //  printf("%d", j/2);

        result[j/2]++;

    }
    //printf("\n");
    v=0;
    for(i=1; i<=a; i++)
    {
        v+=pow(average-result[i],2);
        printf("%d ", result[i]);
    }printf("\n");

    p+=sqrt(v/a);
}
    //ladder();
    printf("%d",p/100);
}

int main()
{
   ladder();

    return 0;
}
