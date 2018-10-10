#include<stdio.h>
#include <math.h>


int main(){
        int n, num, a, i, reversed;
        float j = 0;
        printf("enter a number\n");
        scanf("%d",&n);
        num = n;
        for(i=1; n>10; i++){
            a = n%10;
            j = j + (a/pow(10,i));
            a = n/10;
            n=a;
            if(n<10){
                 i++;
                j = j + (a/pow(10,i));
            }

        }
        printf("%f\n",j);
        printf("%d\n",i);
        reversed = j*(pow(10,--i));

        printf("%d",reversed);



    return 0;
}









