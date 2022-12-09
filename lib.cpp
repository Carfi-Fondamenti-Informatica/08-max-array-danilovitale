#include "lib.h"

float massimo(const float max[], int &n){
    int c=0, s=0, y=1;
 for (int i =0;i<n;i++)
       {
         if(max[c]>max[y])
         {
             y++;
             s=max[c];
         }
         else {
             s=max[y];
            c=y;
            y++;
            
         }
       }
    return s;
}
