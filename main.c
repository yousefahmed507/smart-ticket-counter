#include <stdio.h>
#include <stdlib.h>

int main()
{
 const int AskingPrice=12000000;
 int REVENUE=0;
 int visitors[100],price[100],N,j;
 scanf("%d",&N); //N is number of traction
     for ( j = 0; j < N; j++){
        scanf("%d %d",&visitors[j],&price[j]);
     }
     for ( j = 0; j < N; j++){
        REVENUE+=(visitors[j])*(price[j]);
     }
     printf("%d\n\n",AskingPrice);
     if(REVENUE>AskingPrice){
        printf("%d\nYes",REVENUE);
     }
     else{
        printf("%d\nNo",REVENUE);
     }
    return 0;
}
