#include<stdio.h>
int main()
{
    float prin,rate,time,simple_interest;
    printf("principle:");
    scanf("%f",&prin);
    printf("rate_of_interest:");
    scanf("%f",&rate);
    printf("time:");
    scanf("%f",&time);
    simple_interest=prin*rate*time/100.0 ;
    printf("simple_interest=%.2f",simple_interest);
    return 0 ;
}
