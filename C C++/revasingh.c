#include <stdio.h>
 
int main()
{
    int i,w=1189,h=841,t;
     for(int i=0; i<9; i++)
  
    {
       printf("A%d: %d x %d\n",i,w,h);
       t = w; 
       w = h;  
       h = t/2; 
    }
       return 0;
    

}    
