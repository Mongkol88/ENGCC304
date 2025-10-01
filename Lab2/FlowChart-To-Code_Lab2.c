#include <stdio.h>
#include <string.h>

/// สต็อกของ Taobin
// ประเภทขนมม
int Coke = 5;
int green_tea = 4;
int Americano = 2;
int Latte = 2;
// ประเภทน้ำ
int sunflower_seeds = 3;
int Peanuts = 3;
int Steamed_Orange_Pie = 3;

/// จำนวนธนบัตรหรือเหรีบญภายในเครื่อง
// ธนบัตร
int Money_1000 = 2;
int Money_500 = 5;
int Money_100 = 10;
int Money_50 = 10;
int Money_20 = 20;
// เหรียญ
int Coin_10 = 150;
int Coin_5 = 250;
int Coin_2 = 500;
int Coin_1 = 1000;

/// รายการสินค้า
int Max_of_order = 5;
int order1, quatity_order1, order2, quatity_order2, order3, quatity_order3, order4, quatity_order4, order5, quatity_order5;



int PaymentSystem(int price) {
    int status;
    printf("ต้องการเลือกสินค้าหรือไม่ (ใช่ พิมพ์ '1' : ไม่ใช่ พิมพ์ '0') : ");
    scanf(" %d", &status);
    switch (status)
    {
    case 1:
        printf("Continue");
        break;
    case 0:
        printf("Cancel");
        break;
    default:
        printf("กรุณาพิมพ์ตัวเลข : 1 เพื่อจ่ายเงิน หรือ พิมพ์ 0 เพื่อเลือกสินค้าใหม่");
        break;
    }
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
                int quatity;
                printf("Coke Price = '10 bath'\nType '1' to confirm Order or Type '2' to cancel Order : ");
                scanf("%d", &order);
                printf("กรุณาใส่จำนวนสินค้าที่ต้องการ : ");
                scanf("%d", &quatity);
                switch (order)
                {
                case 1:
                    int input;
                    printf("คุณได้เลือกซื้อ โค้ก : ");
                    printf("ต้องการเเก้ไขรายการสินค้าหรือไม่ (ต้องการเเก้ไข พิมพ์ '1' ไม่ต้องการเเก้ไข พิมพ์ '0')\n");
                    scanf("%d", &input);
                    order1 = 1;
                    switch (input)
                    {
                    case 1:
                        printf("ยังไม้ช่ไดเฟดด!!1\n");
                        break;
                    case 0:
                        int input1;
                        printf("ต้องการเเก้ไขจำนวนสินค้าหรือไม่ (ต้องการเเก้ไข พิมพ์ '1' ไม่ต้องการเเก้ไข พิมพ์ '0')\n");
                        scanf("%d", &input1);
                        switch (input1)
                        {
                        case 1:
                            printf("กรุณาใส่จำนวนสินค้าที่ต้องการเเก้ไข : ");
                            scanf("%d", &quatity);
                            printf("%d", quatity);
                            break;
                        case 0:
                            break;
                        default:
                            printf("พิมพ์ '1' หรือ ไม่ต้องการเเก้ไข พิมพ์ '0' เท่านั้น!");
                            break;
                        }
                        break;
                    default:
                        printf("พิมพ์ 0 กับ 1 only!");
                        break;
                    }
                    break;
                default:
                    printf("Cancel Comfirm");
                    ListItems();
                    break;
                }
                if (quatity <= Coke)
                {
                    printf("มีสต็อกเหลืออยู่ %d", Coke);
                    PaymentSystem(10);
                } else
                {
                    printf("ไม่มีสต็อกเหลืออยู่ ตอนนี้มีสต็อกเหลืออยู่ %d\n", Coke);
                    printf("กรุณาเลือกสินค้าใหม่อีกครั้ง\n");
                    ListItems();
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
        printf("\nDo you want to Cancel Order?\n Type '1' to Continue Type '0' to Cancel : ");
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