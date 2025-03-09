/*
//program to calculate fine for overdue books
author: rehema mutua 
reg no:D33-5022-2023
version 1
date:2/3/2025
*/
#include<stdio.h>//preprocessor

//main function
int main(){
   //variable declaration
   int bookID;
   int dueDate, returnDate, daysOverdue;
   int fineRate, fineAmount;
   

   //prompt the user to enter bookID
     printf("enter bookID:\n");
     scanf("%d",& bookID);

   //prompt the user to enter dueDate
     printf("enter dueDate:\n");
     scanf("%d",& dueDate);

   //prompt the user to enter returnDate
     printf("enter the returnDate:\n");
     scanf("%d",& returnDate);

   //prompt the user to calculate the number of daysoverdue
     daysOverdue=(returnDate-dueDate);

   //determine the fineRate
     if(daysOverdue>=0 && daysOverdue<=7){
     printf("fine=daysoverdue*20");//ksh 20 per day
   }
   
   else if(daysOverdue>=8 && daysOverdue<=14){
     printf("fine=days overdue*50");//ksh 50 per day
   }
   
   else (daysOverdue>=15);{
     printf("fine=daysoverdue*100");//ksh 100 per day
   }
   

   return 0;
   }
    