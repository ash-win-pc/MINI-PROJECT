#include <stdio.h>

int main()
{
    int n1,n2,res=13;
    printf("Total chocolate=13\n");
     
    while(res>0)
    {
        printf("Player 1 turn\n");
        printf("Pick chocolate (0-3):\n");
        scanf("%d",&n1);
        if(n1<1 || n1>3)
        {
            printf("enter valid number\n");
            continue;
        }
        res=res-n1;

        if(res < 0)
        {
            printf("Enter the correct value\n\n");
            res=res+n1;
            continue;
        }
        
        if(res==0)
        {
            printf("Only chilli remains\nPlayer 2 gets chilli\nplayer 2 LOST\nPlayer 1 WON\n");
            break;
        }

        label2:
        label1:
        printf("Chocolate Remaining=%d\n",res);

        printf("Player 2 turn\n");
        printf("Pick chocolate (0-3):\n");
        scanf("%d",&n2);
        if(n2<1 || n2>3)
            {
                printf("enter valid number\n");
                goto label1;
            }
    
        res=res-n2;

        if(res < 0)
        {
            printf("Enter the correct value\n\n");
            res=res+n2;
            goto label2;
        }
        
        if(res==0)
        {
            printf("Only chilli remains\nPlayer 1 gets chilli\nplayer 1 LOST\nPlayer 2 WON\n");
            break;
        }
        printf("Chocolate Remaining=%d\n",res);
    

    }

    return 0;

}