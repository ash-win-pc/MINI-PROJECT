#include <stdio.h>

int main()
{
    int n1,n2,res=13;
    printf("Total chocolate=13\n\n");
     
    while(res>0)
    {
        printf("Player 1 turn\n\n");
        printf("Pick chocolate (0-3):\n\n");
        scanf("%d",&n1);
        if(n1<1 || n1>3)
        {
            printf("enter valid number\n\n");
            continue;
        }
        res=res-n1;
        
        if(res==0)
        {
            printf("Only chilli remains\nPlayer 2 gets chilli\nplayer 2 LOST\n\nPlayer 1 WON\n");
            break;
        }
        printf("Chocolate Remaining=%d\n\n",res);

        label:

        printf("Player 2 turn\n\n");
        printf("Pick chocolate (0-3):\n\n");
        scanf("%d",&n2);
            if(n2<1 || n2>3)
               {
                   printf("enter valid number\n");
                   goto label;
                }
        res=res-n2;
        
        if(res==0)
        {
            printf("Only chilli remains\nPlayer 1 gets chilli\nplayer 1 LOST\n\nPlayer 2 WON\n");
            break;
        }
        printf("Chocolate Remaining=%d\n\n",res);
    

    }

    return 0;

}