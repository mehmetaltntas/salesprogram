#ifndef productsale_h_
#define productsale_h_

struct customer{
    int ID;
    char *name;
    int type;
    double x_coord;
    double y_coord;
    struct Customer *nextCusPtr;
};
typedef struct customer Customer;
typedef Customer * CustomerPtr;

struct product {
    int ID;
    char *name;
    int type ;
    double price;
    struct Product *nextProPtr;
};
typedef struct product Product;
typedef Product * ProductPtr;

struct purchased {
    int ID;
    int invoice_ID;
    int customer_ID;
    int product_ID;
    double cost;
    struct Purchased *nextPurchasedPtr;
};
typedef struct purchased Purchased;
typedef Purchased * PurchasedPtr;


void insertCustomer( CustomerPtr *cPtr, int c_ID, char *c_name, int c_type, double c_x, double c_y);
void printCustomer( CustomerPtr currentcPtr);


void insertProduct(ProductPtr *pPtr, int p_ID, char *p_name , int p_type , double p_price);
void printProduct( ProductPtr currentpPtr);

void insertPurchased( PurchasedPtr *hPtr, int h_ID, int h_invoice_ID, int h_customer_ID, int h_product_ID, double h_cost);
void printPurchased( PurchasedPtr currenthPtr,CustomerPtr *CusPtr);


void print_menu();
void print_menu_2();
void print_menu_3();
void print_menu_4();


#endif

