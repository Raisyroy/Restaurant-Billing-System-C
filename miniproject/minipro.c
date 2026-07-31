#include <stdio.h>

int main()
{
    int choice, qty, item;
    int pizza = 0, burger = 0, sandwich = 0, coke = 0;
    int total = 0;
    float gst, final;

    printf("------ Welcome to Royal Dhaba ------\n");

    do
    {
        printf("\n1. Pizza - 250");
        printf("\n2. Burger - 100");
        printf("\n3. Sandwich - 150");
        printf("\n4. Coke - 50");
        printf("\n5. Remove Item");
        printf("\n6. Bill & Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &qty);

                pizza += qty;
                total += qty * 250;

                printf("%d Pizza added to cart\n", qty);
                break;

            case 2:
                printf("Enter quantity: ");
                scanf("%d", &qty);

                burger += qty;
                total += qty * 100;

                printf("%d Burger added to cart\n", qty);
                break;

            case 3:
                printf("Enter quantity: ");
                scanf("%d", &qty);

                sandwich += qty;
                total += qty * 150;

                printf("%d Sandwich added to cart\n", qty);
                break;

            case 4:
                printf("Enter quantity: ");
                scanf("%d", &qty);

                coke += qty;
                total += qty * 50;

                printf("%d Coke added to cart\n", qty);
                break;

            case 5:

                printf("\nRemove Item");
                printf("\n1. Pizza");
                printf("\n2. Burger");
                printf("\n3. Sandwich");
                printf("\n4. Coke");

                printf("\nEnter item number: ");
                scanf("%d", &item);

                printf("Enter quantity to remove: ");
                scanf("%d", &qty);

                switch(item)
                {
                    case 1:
                        if(qty <= pizza)
                        {
                            pizza -= qty;
                            total -= qty * 250;
                            printf("%d Pizza removed from cart\n", qty);
                        }
                        else
                            printf("Not enough Pizza in cart\n");
                        break;

                    case 2:
                        if(qty <= burger)
                        {
                            burger -= qty;
                            total -= qty * 100;
                            printf("%d Burger removed from cart\n", qty);
                        }
                        else
                            printf("Not enough Burger in cart\n");
                        break;

                    case 3:
                        if(qty <= sandwich)
                        {
                            sandwich -= qty;
                            total -= qty * 150;
                            printf("%d Sandwich removed from cart\n", qty);
                        }
                        else
                            printf("Not enough Sandwich in cart\n");
                        break;

                    case 4:
                        if(qty <= coke)
                        {
                            coke -= qty;
                            total -= qty * 50;
                            printf("%d Coke removed from cart\n", qty);
                        }
                        else
                            printf("Not enough Coke in cart\n");
                        break;

                    default:
                        printf(" Sorry! We don't have this.\n");
                }
                break;

            case 6:

                printf("\n------ Your Order ------\n");

                if(pizza)
                    printf("Pizza      : %d x 250 = %d\n", pizza, pizza * 250);

                if(burger)
                    printf("Burger     : %d x 100 = %d\n", burger, burger * 100);

                if(sandwich)
                    printf("Sandwich   : %d x 150 = %d\n", sandwich, sandwich * 150);

                if(coke)
                    printf("Coke       : %d x 50 = %d\n", coke, coke * 50);

                printf("-----------------------------\n");

                printf("Total      = %d\n", total);

                gst = total * 18 / 100.0;
                printf("GST (18%%)  = %.g\n", gst);

                final = total + gst;
                printf("Final Bill = %.g\n", final);

                printf("\nThank You! Visit Again.\n");
                break;

            default:
                printf(" Sorry! We don't have this. \n");
        }

    } while(choice != 6);

    return 0;
}