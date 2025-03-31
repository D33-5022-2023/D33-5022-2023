//2D Array
#include<stdio.h>

int main()
{

int i;
int j;
//Declaration and initialization 
int marks [3][2]={
{50,60};
{70,80}
{90,100}
}
for(i=0;i<3;i++){
for(j=0;j<2;j++){
printf("%d\t",marks[i] [j])};
}
printf("\n");
}
return 0;
}

