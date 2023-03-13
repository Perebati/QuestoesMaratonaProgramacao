#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i, n, x, aux = 20, count=0;

    scanf("%d" , &n);

    for(i = 0; i < n ; i++){
        scanf("%d" , &x);
        
        /*if(i == 0){
            aux = x;
        }*/
        
        if(aux > x){
            aux = x;
            count = i + 1;
        }

        /*else if(x > aux){
            aux = x;
        }

        if(i > 0 && x == aux){
           count++;
        }
    */
    }

    printf("%d\n",count);

    return 0;
}