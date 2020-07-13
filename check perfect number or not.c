#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int i;
    scanf("%d",&number);
    
    for(i = 1;i < number;i++){
        if(number % i == 0){
            sum = sum + i;
        }
    }
    if(number == sum){
        printf("%d is a Perfect Number",number);
    }
    else{
        printf("%d is not a Perfect Number",number);
    }
    
}
