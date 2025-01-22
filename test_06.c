#include <stdio.h>
int main(){
    char a[3];
    printf("Enter the word how \n");
    for (int i=0; i<3; i++){
        scanf("%c",&a[i]);
    }
    if(a[0]=='h'){
        if(a[1]=='o'){
            if (a[2]=='w')
            {
                printf("Your accuracy is 100 percent");
            }
            else if (a[2]!='w')
            {
                printf("Your accuracy is 66.66 percent");
            }
            
        }
        else if(a[1]!='o'){
            if (a[2]!='w')
            {
                printf("your accuracy is 33.33 percent");
            }
            else if(a[2]=='w'){
                printf("your accuracy is 66.66 percent");
            }
        }
    
    }
    else 
    {
        
    
        
        if (a[1]=='o')
        {
            if (a[2]=='w')
            {
                printf("your accuracy 66.66 percent");
                }
            else if (a[2]!='w')
            {
                printf("your accuracy 33.33 percent");
                }
            
            }
        else if(a[1]!='o'){
            if (a[2]=='w'){
                printf("your accuracy is 33.33 percent");

                }
                else if(a[2]!='w')
                    {
                        printf("your accuracy is 0 percent");
                    }
            }
        
                }
        
    
    return 0;
}