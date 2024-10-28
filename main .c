#include <stdio.h>
#include <stdlib.h>
#include "productsale.h"

int main()
{

    CustomerPtr *Customer_1, *Customer_2, *Customer_3, *Customer_4, *Customer_5, *CusPtr;

    (*Customer_1)->ID = 1;
    (*Customer_1)->name = "Mehmet";
    (*Customer_1)->type = 1;
    (*Customer_1)->x_coord = 12.5;
    (*Customer_1)->y_coord = 26.7;

    insertCustomer(Customer_1, 1, "Mehmet", 1, 12.5, 26.7);

    (*Customer_2)->ID = 2;
    (*Customer_2)->name = "Nehir";
    (*Customer_2)->type = 0;
    (*Customer_2)->x_coord = 28.4;
    (*Customer_2)->y_coord = 3.7;

    insertCustomer(Customer_2, 2, "Nehir", 0, 28.4, 3.7);

    (*Customer_3)->ID = 3;
    (*Customer_3)->name = "Yunus";
    (*Customer_3)->type = 0;
    (*Customer_3)->x_coord = 14.7;
    (*Customer_3)->y_coord = 7.9;

    insertCustomer(Customer_3, 3, "Yunus", 0, 14.7, 7.9);

    (*Customer_4)->ID = 4;
    (*Customer_4)->name = "Umit";
    (*Customer_4)->type = 1;
    (*Customer_4)->x_coord = 39.2;
    (*Customer_4)->y_coord = 1.2;

    insertCustomer(Customer_4, 4, "Umit", 1, 39.2, 1.2);

    (*Customer_5)->ID = 5;
    (*Customer_5)->name = "Zeynep";
    (*Customer_5)->type = 0;
    (*Customer_5)->x_coord = 11.0;
    (*Customer_5)->y_coord = 17.1;

    insertCustomer(Customer_5, 5, "Zeynep", 0, 12.0, 17.1);

    ProductPtr *Product_1, *Product_2, *Product_3, *Product_4, *Product_5, *Product_6, *ProPtr;

    (*Product_1)->ID = 1;
    (*Product_1)->name = "Apple";
    (*Product_1)->type = 1;
    (*Product_1)->price = 1.35;

    insertProduct(Product_1, 1, "Apple", 1, 1.35);

    (*Product_2)->ID = 2;
    (*Product_2)->name = "Coke";
    (*Product_2)->type = 3;
    (*Product_2)->price = 0.95;

    insertProduct(Product_2, 2, "Coke", 3, 0.95);

    (*Product_3)->ID = 3;
    (*Product_3)->name = "Onion";
    (*Product_3)->type = 2;
    (*Product_3)->price = 1.15;

    insertProduct(Product_3, 3, "Onion", 2, 1.15);

    (*Product_4)->ID = 4;
    (*Product_4)->name = "Chicken";
    (*Product_4)->type = 4;
    (*Product_4)->price = 4.98;

    insertProduct(Product_4, 4, "Chicken", 4, 4.98);

    (*Product_5)->ID = 5;
    (*Product_5)->name = "Water";
    (*Product_5)->type = 3;
    (*Product_5)->price = 0.45;

    insertProduct(Product_5, 5, "Water", 3, 0.45);

    (*Product_6)->ID = 6;
    (*Product_6)->name = "Banana";
    (*Product_6)->type = 1;
    (*Product_6)->price = 2.60;

    insertProduct(Product_6, 6, "Banana", 1, 2.60);

    PurchasedPtr *purPtr;
    int choice;
    int ch;
    int id = 1;
    int iid = 1;
    while (1)
    {
        print_menu();

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                while (1)
                {

                    int pid, amount, cid; //product id
                    double price;
                    system("cls");
                    printf("ID :%d", id);
                    printf("Customer ID - Customer Name\n");
                    printf("1 ->\tMehmet\n2 ->\tNehir\n3 ->\tYunus\n4 ->\tUmit\n5 ->\tZeynep\n0 ->\tQuit");
                    printf("\nCustomer ID :");
                    scanf("%d", &cid);
                    if (cid == 0)
                    {
                        break;
                    }
                    system("cls");
                    printf("Product Id - Product Name");
                    printf("1 ->\tApple\n2 ->\tCoke\n3 ->\tOnion\n4 ->\tChicken\n5 ->\tWater\n6 ->\tBanana");
                    printf("\nEnter the product id you want to buy ->");
                    scanf("%d", &pid);
                    printf("Enter amount ->");
                    scanf("%d", &amount);

                    if (pid == 1)
                    {
                        if (cid == 1)
                        {
                            price = (amount * 1.35) + (0.08 * (*Customer_1)->x_coord * (*Customer_1)->y_coord);
                        }
                        if (cid == 2)
                        {
                            price = (amount * 1.35) + (0.08 * (*Customer_2)->x_coord * (*Customer_2)->y_coord);
                        }
                        if (cid == 3)
                        {
                            price = (amount * 1.35) + (0.08 * (*Customer_3)->x_coord * (*Customer_3)->y_coord);
                        }
                        if (cid == 4)
                        {
                            price = (amount * 1.35) + (0.08 * (*Customer_4)->x_coord * (*Customer_4)->y_coord);
                        }
                        if (cid == 5)
                        {
                            price = (amount * 1.35) + (0.08 * (*Customer_5)->x_coord * (*Customer_5)->y_coord);
                        }
                    }
                    else if (pid == 2)
                    {
                        if (cid == 1)
                        {
                            price = (amount * 0.95) + (0.08 * (*Customer_1)->x_coord * (*Customer_1)->y_coord);
                        }
                        if (cid == 2)
                        {
                            price = (amount * 0.95) + (0.08 * (*Customer_2)->x_coord * (*Customer_2)->y_coord);
                        }
                        if (cid == 3)
                        {
                            price = (amount * 0.95) + (0.08 * (*Customer_3)->x_coord * (*Customer_3)->y_coord);
                        }
                        if (cid == 4)
                        {
                            price = (amount * 0.95) + (0.08 * (*Customer_4)->x_coord * (*Customer_4)->y_coord);
                        }
                        if (cid == 5)
                        {
                            price = (amount * 0.95) + (0.08 * (*Customer_5)->x_coord * (*Customer_5)->y_coord);
                        }
                    }
                    else if (pid == 3)
                    {
                        if (cid == 1)
                        {
                            price = (amount * 1.15) + (0.08 * (*Customer_1)->x_coord * (*Customer_1)->y_coord);
                        }
                        if (cid == 2)
                        {
                            price = (amount * 1.15) + (0.08 * (*Customer_2)->x_coord * (*Customer_2)->y_coord);
                        }
                        if (cid == 3)
                        {
                            price = (amount * 1.15) + (0.08 * (*Customer_3)->x_coord * (*Customer_3)->y_coord);
                        }
                        if (cid == 4)
                        {
                            price = (amount * 1.15) + (0.08 * (*Customer_4)->x_coord * (*Customer_4)->y_coord);
                        }
                        if (cid == 5)
                        {
                            price = (amount * 1.15) + (0.08 * (*Customer_5)->x_coord * (*Customer_5)->y_coord);
                        }
                    }
                    else if (pid == 4)
                    {
                        if (cid == 1)
                        {
                            price = (amount * 4.98) + (0.08 * (*Customer_1)->x_coord * (*Customer_1)->y_coord);
                        }
                        if (cid == 2)
                        {
                            price = (amount * 4.98) + (0.08 * (*Customer_2)->x_coord * (*Customer_2)->y_coord);
                        }
                        if (cid == 3)
                        {
                            price = (amount * 4.98) + (0.08 * (*Customer_3)->x_coord * (*Customer_3)->y_coord);
                        }
                        if (cid == 4)
                        {
                            price = (amount * 4.98) + (0.08 * (*Customer_4)->x_coord * (*Customer_4)->y_coord);
                        }
                        if (cid == 5)
                        {
                            price = (amount * 4.98) + (0.08 * (*Customer_5)->x_coord * (*Customer_5)->y_coord);
                        }
                    }
                    else if (pid == 5)
                    {
                        if (cid == 1)
                        {
                            price = (amount * 0.45) + (0.08 * (*Customer_1)->x_coord * (*Customer_1)->y_coord);
                        }
                        if (cid == 2)
                        {
                            price = (amount * 0.45) + (0.08 * (*Customer_2)->x_coord * (*Customer_2)->y_coord);
                        }
                        if (cid == 3)
                        {
                            price = (amount * 0.45) + (0.08 * (*Customer_3)->x_coord * (*Customer_3)->y_coord);
                        }
                        if (cid == 4)
                        {
                            price = (amount * 0.45) + (0.08 * (*Customer_4)->x_coord * (*Customer_4)->y_coord);
                        }
                        if (cid == 5)
                        {
                            price = (amount * 0.45) + (0.08 * (*Customer_5)->x_coord * (*Customer_5)->y_coord);
                        }
                    }
                    else if (pid == 6)
                    {
                        if (cid == 1)
                        {
                            price = (2.60 * amount) + (0.08 * (*Customer_1)->x_coord * (*Customer_1)->y_coord);
                        }
                        if (cid == 2)
                        {
                            price = (2.60 * amount) + (0.08 * (*Customer_2)->x_coord * (*Customer_2)->y_coord);
                        }
                        if (cid == 3)
                        {
                            price = (2.60 * amount) + (0.08 * (*Customer_3)->x_coord * (*Customer_3)->y_coord);
                        }
                        if (cid == 4)
                        {
                            price = (2.60 * amount) + (0.08 * (*Customer_4)->x_coord * (*Customer_4)->y_coord);
                        }
                        if (cid == 5)
                        {
                            price = (2.60 * amount) + (0.08 * (*Customer_5)->x_coord * (*Customer_5)->y_coord);
                        }
                    }
                    PurchasedPtr *Purchased;
                    insertPurchased(Purchased, id, iid, cid, pid, price);
                    Purchased++;
                    id++;
                }
                iid++;
                break;
            case 2:
                print_menu_2();
                printCustomer(*CusPtr);
                break;
            case 3:
                print_menu_3();
                printProduct(*ProPtr);
                break;
            case 4:
                print_menu_4();
                printPurchased(*purPtr, *CusPtr);
                break;

            case 0:
                exit(EXIT_FAILURE);

            default:
                printf("Unknown choice");
        }
    }

    return 0;
}
