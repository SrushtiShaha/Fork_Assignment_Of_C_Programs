/// Write A Program For Swapping Two Numbers ( Without Functional Approach ).
/// Using Three Variables.

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    int iNo1 = 0, iNo2 = 0, iSwap = 0;
    
    printf("\n Enter Two Numbers => ");
    scanf("%d%d",&iNo1,&iNo2);
  
    iSwap = iNo1;
    iNo1 = iNo2;
    iNo2 = iSwap;
  
    printf("\n After Swapping The Values Of Numbe1 = %d And Number2 = %d \n", iNo1, iNo2);
  
    getch();
    return 0;
}
