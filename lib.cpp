#include "lib.h"

float massimo(const float max[], int &n){
    int c=0, y=1;
    float s=0;
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
