// calculate the Summation of odd values between 1 and 99
#include <stdio.h>

int main(){
int i = 1 , sum = 0;

while(i<=99){
sum += 1;
i+= 2;
}
printf("summation of odd values between (1 and 99) is : %d\n" , sum);
return 0;
}
