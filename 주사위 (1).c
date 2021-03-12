#include<stdio.h>
#include<math.h>
#include<time.h>
int v,p;
void dice(){
    int average=100000/6;
    srand(time(0));
    for(int j=1;j<=100;j++){

        int random,a[7]={0,};
    for(int i=1;i<=100000;i++){
        random=rand()%6+1;
        a[random]++;
    }
    v=0;
    for(int i=1;i<=6;i++){
        v+=pow(average-a[i],2);
        printf("%d ",a[i]);
        }printf("\n");
        p+=sqrt(v/6);
    }
    printf("%d",p/100);
}

int main(){
    dice();
}
