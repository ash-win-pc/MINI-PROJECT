#include <stdio.h>

int main()
{
    int ch,total,pay;
    int pizza=0,coffee=0,burger=0,pasta=0;
    int price1=0,price2=0,price3=0,price4=0;
    float gst,grand_total;
    printf("------WELCOME TO STAR BUCKS-------\n");

    do{
        label:
        printf("1. pizza=99\n2. coffee=40\n3. burger=200\n4. pasta=150\n5. for exit\n\n");
        printf("enter your choice\n\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("you orderd pizza\n\n");
            pizza++;
            printf("Quantity --pizza*%d\n\n",pizza);
            break;

            case 2:
            printf("you orderd coffee\n\n");
            coffee++;
            printf("Quantity --coffee*%d\n\n",coffee);
            break;

            case 3:
            printf("you orderd burger\n\n");
            burger++;
            printf("Quantity --burger*%d\n\n",burger);
            break;

            case 4:
            printf("you orderd pasta\n\n");
            pasta++;
            printf("Quantity --pasta*%d\n\n",pasta);
            break;

            case 5:
            break;

            default:
            printf("no item found\n\n");
            goto label;

        }
    }while(ch>=1 && ch<=4);

    printf("-------Total items are-------\n\n");
    
    if(pizza>0)
    {
        price1=pizza*99;
        printf("pizza*%d=%d\n",pizza,price1);
    }
     if(coffee>0)
    {
        price2=coffee*40;
        printf("coffee*%d=%d\n",coffee,price2);
    }
     if(burger>0)
    {
        price3=burger*200;
        printf("burger*%d=%d\n",burger,price3);
    }
     if(pasta>0)
    {
        price4=pasta*150;
        printf("pasta*%d=%d\n",pasta,price4);
    }

    gst=(float)(price1+price2+price3+price4)*0.08;
   

    printf("-----------------------------\n\n");

    total=price1+price2+price3+price4;


    printf("Total\t=%d\n",total);
    printf("GST\t=%g\n",gst);

    printf("-----------------------------\n\n");

    grand_total=price1+price2+price3+price4+gst;

    printf("GRAND TOTAL=%G\n\n\n",grand_total);

    label2:

    printf("Pick the payment option\n\n1.CASH\n2.UPI\n\n");
    scanf("%d",&pay);

    switch(pay)
    {
        case 1:

        printf("You selected Cash payment\n\n");
        break;
        

        case 2:

        printf("You selected UPI payment\n\n");
        break;

        default:
        printf("Select a valid payment option\n\n ");

        goto label2;

        
    }

    printf("****THANKYOU COME AGAIN****\n\n");


    return 0;
}