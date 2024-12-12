/*
Task 2: Fibonacci sequence
Develop a program to generate the Fibonacci sequence up to a given number of terms.
•	Input: Number of terms n.
•	Output: Fibonacci sequence up to n terms.
Example:
Input: 6
Output: 0, 1, 1, 2, 3, 5
*/
#include <stdio.h>
int main (){
  
        int uinput;
        printf("Input the number : ");
        scanf("%d",&uinput);
        
        if(uinput > 0){
            
            if(uinput == 1){
                printf("The fibonacci sequence for 1 is 0");
            }
            else if(uinput == 2){
                printf("The fibonacci sequence for 2 is 0,1");
            }
            
            else{
                
                printf("The fibonacci sequence for %i is 0,1",uinput);
                int z=0;
                int y=1;
                int o;
                for(int i=3; i <= uinput; i++){
                    
                    o=y+z;
                    printf(",%d",o);
                    z=y;
                    y=o;
                }
      
            }
            
        }
        else{
            printf("Invaild Number.Input Integer value");
        }
 
    return 0;
}
