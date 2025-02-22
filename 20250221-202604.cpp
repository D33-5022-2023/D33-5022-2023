/*
author: rehema mutua 
reg no:d33-5022-2023
program:to find compound intrest
date:20/2/2025
*/
#include<stdio.h>//printf()
int main(){
//variable declarations and initialization;
int double_amount;
int double_principle;
int double_rate;
int double_time;
int double_compound_interest;
int n;
int total_amount;
printf("program to calculate compound interest:\n");
    printf("enter principle amount:\n");
    scanf("%lf",&double_principle);
    printf("enter the rate of interest:\n");
    scanf("%lf",&double_rate);
    printf("enter the time in years:\n");
    scanf("%lf",&double_time);
    printf("enter the number of times interest compounded per year:\n");
    scanf("%d",&n);
    double_rate=double_rate/100;
    total_amount=double_principle*((1+double_rate/n),(n*double_time));
    double_compound_interest=total_amount-double_principle;
    printf("total amountis %.2f",total_amount);
    printf("the compound intrest is %2f",double_compound_interest);
    return 0;}


