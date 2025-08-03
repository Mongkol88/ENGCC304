#include <stdio.h>
#include <string.h>


int PaymentSystem(int price) {
    printf("%d Payment System Init", price);
}

int ListItems() {
    int Type, List, order, price;
    printf("Type Number '1' to select Water type or Type Number '2' to select Dessert : ");
    scanf("%d", &Type);
    switch (Type)
    {
    case 1 :
        printf("'Water Type Selected'\n");
        printf(" Type Number '1' to select Coke\n Type Number '2' to select green tea\n Type Number '3' to select Americano\n Type Number '4' to select Latte\n");
        scanf("%d", &List);
        switch (List)
        {
            case 1:
                printf("Coke Price = '10 bath'\nType '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                switch (order)
                {
                case 1:
                    printf("Coke Confirm");
                    return price = 10;
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                break;
            case 2:
                printf("green tea Price = '12 bath'\n Type '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                switch (order)
                {
                case 1:
                    printf("green tea Confirm");
                    return price = 12;
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                break;
            case 3:
                printf("Americano Price = '30 bath'\n Type '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                switch (order)
                {
                case 1:
                    printf("Americano Confirm");
                    return price = 30;
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                break;
            case 4:
                printf("Latte Price = '35 bath'\n Type '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                switch (order)
                {
                case 1:
                    printf("Latte Confirm");
                    return price = 35;
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                break;
            default:
                printf("Cancel\n");
                ListItems();
            break;
        }
        break;
    case 2 :
        printf("'Dessert Type Selected'\n");
        printf(" Type Number '1' to select sunflower seeds\n Type Number '2' to select Peanuts\n Type Number '3' to select Steamed Orange Pie\n");
        scanf("%d", &List);
        switch (List)
        {
            case 1:
                printf("sunflower seeds = '13 bath'\n Type '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                switch (order)
                {
                case 1:
                    printf("Latte Confirm");
                    return price = 13;
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                break;
            case 2:
                printf("Peanuts = '20 bath'\n Type '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                switch (order)
                {
                case 1:
                    printf("Latte Confirm");
                    return price = 20;
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                break;
            case 3:
                printf("Steamed Orange Pie = '15 bath'\n Type '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                switch (order)
                {
                case 1:
                    printf("Latte Confirm");
                    return price = 15;
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                break;
            default:
                printf("Cancel\n");
                ListItems();
            break;
        }
        break;
    default:
        printf("Please Select Type of Items agin!\n");
        ListItems();
        break;
    }
}

int main()
{
    char login[5];
    printf("Please Input 'Login' to use TAO BIN : ");
    scanf("%s", &login);

    if (strcmp(login, "Login") == 0) {
        printf("เข้าสู้ระบบสำเร็จ \n");
        int Result = ListItems(), cancel;
        printf("Do you to Cancel Order?\n Type '1' to Continue Type '0' to Cancel : ");
        scanf("%d", &cancel);
        switch (cancel)
        {
        case 1:
            PaymentSystem(Result);
            break;
        
        default:
            printf("Cancel All Order\n");
            main();
            break;
        }
    } else if (strcmp(login, "Admin") == 0)
    {
        char password[10];
        printf("Input Password to Access Admin mode : ");
        scanf("%s", &password);
        if (strcmp(password, "22032550") == 0) {
            printf("Enter Admin Mode!");
        } else
        {
            printf("Password is not correct! \n");
            main();
        }
        
    } else {
        printf("Fail Please Login Agin!\n");
        main();
    }
    
    return 0;
}