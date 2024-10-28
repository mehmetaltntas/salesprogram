#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "productsale.h"

void print_menu()
{

    system("cls");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t\t    MAIN MENU");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t > Press 1 - SALES");
    printf("\n\t\t > Press 2 - CUSTOMER INFORMATION");
    printf("\n\t\t > Press 3 - PRODUCT INFORMATION");
    printf("\n\t\t > Press 4 - CUSTOMER ANALYSES");
    printf("\n\t\t > press 5 - PRODUCT ANALYSES");
    printf("\n\t\t > press 0 - QUIT");
    printf("\n\t\t________________________________________\n\n");
    printf("->");
}
void print_menu_2()
{
    system("cls");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t > Press 1 - ALL CUSTOMERS");
    printf("\n\t\t > Press 2 - ACCORDING THE CUSTOMER TYPE");
    printf("\n\t\t > Press 3 - SINGLE CUSTOEMR");
    printf("\n\t\t > Press 0 - BACK");
    printf("\n\t\t________________________________________\n\n");
    printf("->");
}
void print_menu_3()
{
    system("cls");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t > Press 1 - ALL PRODUCTS");
    printf("\n\t\t > Press 2 - ACCORDING THE PRODUCTS");
    printf("\n\t\t > Press 3 - SINGLE PRODUCT");
    printf("\n\t\t > Press 0 - BACK");
    printf("\n\t\t________________________________________\n\n");
    printf("->");
}
void print_menu_4()
{
    system("cls");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t > Press 1 - Products purchased by a customer");
    printf("\n\t\t > Press 2 - The total amount a customer buys");
    printf("\n\t\t > Press 3 - The total amount of products purchased by all the customer");
    printf("\n\t\t > Press 0 - Back");
    printf("\n\t\t________________________________________\n\n");
    printf("->");
}

void insertCustomer(CustomerPtr *cPtr, int c_ID, char *c_name, int c_type, double c_x, double c_y)
{
    CustomerPtr newPtr;
    CustomerPtr previousPtr;
    CustomerPtr currentPtr;

    newPtr = malloc(sizeof(CustomerPtr));
    if (newPtr != NULL)
    {
        newPtr->ID = c_ID;
        newPtr->name = c_name;
        newPtr->type = c_type;
        newPtr->x_coord = c_x;
        newPtr->y_coord = c_y;
        newPtr->nextCusPtr = NULL;

        previousPtr = NULL;
        currentPtr = *cPtr;

        while (currentPtr != NULL && c_ID > currentPtr->ID)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextCusPtr;
        }
        if (previousPtr == NULL)
        {
            newPtr->nextCusPtr = *cPtr;
            *cPtr = newPtr;
        }
        else
        {
            previousPtr->nextCusPtr = newPtr;
            newPtr->nextCusPtr = currentPtr;
        }
    }
    else
    {
        printf("No memory available.\n");
    }
}

void printCustomer(CustomerPtr currentcPtr)
{

    int choice, choice_2, choice_3;
    printf("-->");
    scanf("%d", &choice);

    if (choice == 1)
    {

        puts("The customers  are ->\n");

        while (currentcPtr != NULL)
        {
            printf("%d\t%s\t%u\t%lf\t%lf", currentcPtr->ID, currentcPtr->name, currentcPtr->type, currentcPtr->x_coord, currentcPtr->y_coord);
            currentcPtr = currentcPtr->nextCusPtr;
        }
        puts("NULL\n");
    }
    if (choice == 2)
    {

        printf("Choose customer type -> ");
        scanf("%d", &choice_2);

        printf("The Customers are ->\n");

        if (choice_2 == 0)
        {
            while (currentcPtr != NULL)
            {
                if (currentcPtr->type == 0)
                {
                    printf("%d\t%s\t%u\t%lf\t%lf", currentcPtr->ID, currentcPtr->name, currentcPtr->type, currentcPtr->x_coord, currentcPtr->y_coord);
                    currentcPtr = currentcPtr->nextCusPtr;

                    puts("NULL\n");
                }
            }
        }
        if (choice_2 == 1)
        {
            while (currentcPtr != NULL)
            {
                if (currentcPtr->type == 1)
                {
                    printf("%d\t%s\t%u\t%lf\t%lf", currentcPtr->ID, currentcPtr->name, currentcPtr->type, currentcPtr->x_coord, currentcPtr->y_coord);
                    currentcPtr = currentcPtr->nextCusPtr;

                    puts("NULL\n");
                }
            }
        }
    }
    if (choice == 3)
    {

        printf("Enter your customer ID :");
        scanf("%d", &choice_3);

        puts("The customer  is ->\n");

        while (currentcPtr != NULL)
        {
            if (choice == currentcPtr->ID)
            {
                printf("%d\t%s\t%u\t%lf\t%lf", currentcPtr->ID, currentcPtr->name, currentcPtr->type, currentcPtr->x_coord, currentcPtr->y_coord);
                currentcPtr = currentcPtr->nextCusPtr;

                puts("NULL\n");
            }
        }
    }
}

void insertProduct(ProductPtr *pPtr, int p_ID, char *p_name, int p_type, double p_price)
{
    ProductPtr newPtr;
    ProductPtr previousPtr;
    ProductPtr currentPtr;

    newPtr = malloc(sizeof(ProductPtr));
    if (newPtr != NULL)
    {
        newPtr->ID = p_ID;
        newPtr->name = p_name;
        newPtr->type = p_type;
        newPtr->price = p_price;
        newPtr->nextProPtr = NULL;

        previousPtr = NULL;
        currentPtr = *pPtr;

        while (currentPtr != NULL && pPtr > currentPtr->ID)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextProPtr;
        }
        if (previousPtr == NULL)
        {
            newPtr->nextProPtr = *pPtr;
            *pPtr = newPtr;
        }
        else
        {
            previousPtr->nextProPtr = newPtr;
            newPtr->nextProPtr = currentPtr;
        }
    }
    else
    {
        printf("No memory available.\n");
    }
}

void printProduct(ProductPtr currentpPtr)
{

    int choice, choice_2, choice_3;
    printf("-->");
    scanf("%d", &choice);

    if (choice == 1)
    {

        puts("The Products  are ->\n");

        while (currentpPtr != NULL)
        {
            printf("%d\t%s\t%u\t%lf\t%lf", currentpPtr->ID, currentpPtr->name, currentpPtr->type, currentpPtr->price);
            currentpPtr = currentpPtr->nextProPtr;
        }
        puts("NULL\n");
    }
    if (choice == 2)
    {

        printf("Choose product type -> ");
        scanf("%d", &choice_2);

        printf("The Customers are ->\n");

        if (choice_2 == 1)
        {
            while (currentpPtr != NULL)
            {
                if (currentpPtr->type == 1)
                {
                    printf("%d\t%s\t%u\t%lf\t%lf", currentpPtr->ID, currentpPtr->name, currentpPtr->type, currentpPtr->price);
                    currentpPtr = currentpPtr->nextProPtr;

                    puts("NULL\n");
                }
            }
        }
        if (choice_2 == 2)
        {
            while (currentpPtr != NULL)
            {
                if (currentpPtr->type == 2)
                {
                    printf("%d\t%s\t%u\t%lf\t%lf", currentpPtr->ID, currentpPtr->name, currentpPtr->type, currentpPtr->price);
                    currentpPtr = currentpPtr->nextProPtr;

                    puts("NULL\n");
                }
            }
        }
        if (choice_2 == 3)
        {
            while (currentpPtr != NULL)
            {
                if (currentpPtr->type == 3)
                {
                    printf("%d\t%s\t%u\t%lf\t%lf", currentpPtr->ID, currentpPtr->name, currentpPtr->type, currentpPtr->price);
                    currentpPtr = currentpPtr->nextProPtr;

                    puts("NULL\n");
                }
            }
        }
    }
    if (choice_2 == 4)
    {
        while (currentpPtr != NULL)
        {
            if (currentpPtr->type == 4)
            {
                printf("%d\t%s\t%u\t%lf\t%lf", currentpPtr->ID, currentpPtr->name, currentpPtr->type, currentpPtr->price);
                currentpPtr = currentpPtr->nextProPtr;

                puts("NULL\n");
            }
        }
    }
    if (choice == 3)
    {

        printf("Enter your product ID :");
        scanf("%d", &choice_3);

        puts("The customer  is ->\n");

        while (currentpPtr != NULL)
        {
            if (choice == currentpPtr->ID)
            {
                printf("%d\t%s\t%u\t%lf\t%lf", currentpPtr->ID, currentpPtr->name, currentpPtr->type, currentpPtr->price);
                currentpPtr = currentpPtr->nextProPtr;

                puts("NULL\n");
            }
        }
    }
}

void insertPurchased(PurchasedPtr *hPtr, int h_ID, int h_invoice_ID, int h_customer_ID, int h_product_ID, double h_cost)
{
    PurchasedPtr newPtr;
    PurchasedPtr previousPtr;
    PurchasedPtr currentPtr;

    newPtr = malloc(sizeof(PurchasedPtr));
    if (newPtr != NULL)
    {
        newPtr->ID = h_ID;
        newPtr->invoice_ID = h_invoice_ID;
        newPtr->customer_ID = h_customer_ID;
        newPtr->product_ID = h_product_ID;
        newPtr->cost = h_cost;
        newPtr->nextPurchasedPtr = NULL;

        previousPtr = NULL;
        currentPtr = *hPtr;

        while (currentPtr != NULL && hPtr > currentPtr->ID)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPurchasedPtr;
        }
        if (previousPtr == NULL)
        {
            newPtr->nextPurchasedPtr = *hPtr;
            *hPtr = newPtr;
        }
        else
        {
            previousPtr->nextPurchasedPtr = newPtr;
            newPtr->nextPurchasedPtr = currentPtr;
        }
    }
    else
    {
        printf("No memory available.\n");
    }
}

void printPurchased(PurchasedPtr currenthPtr, CustomerPtr *CusPtr)
{
    int choice, choice_2, choice_3, id;
    printf("-->");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter customer ID:");
        scanf("%d", &id);

        if (id == 1 && currenthPtr->customer_ID == 1)
        {
            printf("%d\t%d\t%d\t%d\t%lf", currenthPtr->ID, currenthPtr->invoice_ID, currenthPtr->customer_ID,
                   currenthPtr->product_ID, currenthPtr->cost);
        }
        if (id == 2 && currenthPtr->customer_ID == 2)
        {
            printf("%d\t%d\t%d\t%d\t%lf", currenthPtr->ID, currenthPtr->invoice_ID, currenthPtr->customer_ID,
                   currenthPtr->product_ID, currenthPtr->cost);
        }
        if (id == 3 && currenthPtr->customer_ID == 3)
        {
            printf("%d\t%d\t%d\t%d\t%lf", currenthPtr->ID, currenthPtr->invoice_ID, currenthPtr->customer_ID,
                   currenthPtr->product_ID, currenthPtr->cost);
        }
        if (id == 4 && currenthPtr->customer_ID == 4)
        {
            printf("%d\t%d\t%d\t%d\t%lf", currenthPtr->ID, currenthPtr->invoice_ID, currenthPtr->customer_ID,
                   currenthPtr->product_ID, currenthPtr->cost);
        }
        if (id == 5 && currenthPtr->customer_ID == 5)
        {
            printf("%d\t%d\t%d\t%d\t%lf", currenthPtr->ID, currenthPtr->invoice_ID, currenthPtr->customer_ID,
                   currenthPtr->product_ID, currenthPtr->cost);
        }

        puts("NULL\n");
    }
    if (choice == 2)
    {

        printf("Enter customer Id -> ");
        scanf("%d", &id);

        if (id == 1 && currenthPtr->ID == 1)
        {
            printf("Mehmet -> %d", currenthPtr->cost);
        }
        if (id == 2 && currenthPtr->ID == 2)
        {
            printf("Nehir -> %d", currenthPtr->cost);
        }
        if (id == 3 && currenthPtr->ID == 3)
        {
            printf("Umit -> %d", currenthPtr->cost);
        }
        if (id == 4 && currenthPtr->ID == 4)
        {
            printf("Yunus -> %d", currenthPtr->cost);
        }
        if (id == 5 && currenthPtr->ID == 5)
        {
            printf("Zeynep -> %d", currenthPtr->cost);
        }
    }
    int x1, x2, x3, x4, x5;
    if (choice == 3)
    {
        if (choice == 3 && currenthPtr->ID == 1)
        {
            currenthPtr->cost = x1;
        }
        if (choice == 3 && currenthPtr->ID == 2)
        {
            currenthPtr->cost = x2;
        }
        if (choice == 3 && currenthPtr->ID == 3)
        {
            currenthPtr->cost = x3;
        }
        if (choice == 3 && currenthPtr->ID == 4)
        {
            currenthPtr->cost = x4;
        }
        if (choice == 3 && currenthPtr->ID == 5)
        {
            currenthPtr->cost = x5;
        }

        printf("Total Cost is ->%d", (x1 + x2 + x3 + x4 + x5));
    }
}

