#include <stdio.h>

int main() {
int num , i = 0 , multiplier = 1 , decimal = 0;
scanf("%d" , &num);

while(num > 0){
    decimal += (num % 10) * multiplier;
    num = num/10;
    multiplier *= 8;
}

printf("%d" , decimal );

return 0;
}
