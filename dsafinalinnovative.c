/*
THIS CODE IS MADE IN COLLABORATION WITH -
Aaryan Chokshi (20BCE002)
Aryan Mehta (20BCE018)
Kanav Avasthi (20BCE023)
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
struct node
{

char name[30];
int quantity;
int price;
struct node *next;

};

int bill=0;
struct node *head=NULL;
struct node *ptr;
struct node *temp;


void additem(int m,int a, int b)
{
    if(m==1)
    {


    if(a==1)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="APPLE";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=50;
      ptr->next=NULL;


      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }

    else if(a==2)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="BANANA";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=30;
      ptr->next=NULL;


      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }


    }
    else if(a==3)
    {
       ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="MANGO";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=150;
      ptr->next=NULL;


      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }
    else if(a==4)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="GRAPES";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=60;
      ptr->next=NULL;


      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }
    else if(a==5)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="KIWI";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=90;
      ptr->next=NULL;


      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }
     printf("\tItem has been successfully added to cart!\n");

    }

    else if(m==2)
    {

     if(a==1)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="CARROT";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=45;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }

    else if(a==2)
    {
         ptr=(struct node*)malloc(sizeof(struct node));

      char s[30]="BITTERGOURD";


     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=20;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }
    else if(a==3)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="RADISH";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=35;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==4)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="BRINJAL";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=50;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==5)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="LADY'S FINGER";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=70;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }

         printf("\tItem has been successfully added to cart!\n");

    }

    else if(m==3)
    {
 if(a==1)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="SPRITE";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=30;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }

    else if(a==2)
    {
         ptr=(struct node*)malloc(sizeof(struct node));

      char s[30]="THUMBS UP";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=40;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }
    else if(a==3)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="COKE";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=25;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==4)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
       char s[30]="LIMCA";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=20;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==5)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="MAAZA";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=30;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
         printf("\tItem has been successfully added to cart!\n");
    }
    else if(m==4)
    {
 if(a==1)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="WHEAT";

     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=120;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }

    else if(a==2)
    {
         ptr=(struct node*)malloc(sizeof(struct node));

      char s[30]="BARLEY";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=170;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }
    else if(a==3)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="RICE";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=210;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==4)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="CORN";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=150;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==5)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="OATS";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=300;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
         printf("\tItem has been successfully added to cart!\n");
    }
    else if(m==5)
    {
         if(a==1)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="WALNUTS";

      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=550;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }

    else if(a==2)
    {
         ptr=(struct node*)malloc(sizeof(struct node));

      char s[30]="DATES";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=700;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==3)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="ALMONDS";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=450;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==4)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="APRICOT";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=600;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==5)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="CASHEWNUTS";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=500;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }

         printf("\tItem has been successfully added to cart!\n");
    }
    else if(m==6)
    {

     if(a==1)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="SUNFLOWER OIL";

     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=150;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }

    else if(a==2)
    {
         ptr=(struct node*)malloc(sizeof(struct node));

      char s[30]="OLIVE OIL";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=170;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }

    }
    else if(a==3)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="GROUNDNUT OIL";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=200;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==4)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="SESAME OIL";
      strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=140;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
    else if(a==5)
    {
         ptr=(struct node*)malloc(sizeof(struct node));
      char s[30]="COCONUT OIL";
     strcpy(ptr->name,s);
      ptr->quantity=b;
      ptr->price=160;

      ptr->next=NULL;

      if(head==NULL)
      {
          temp=head=ptr;



      }
      else{

      temp->next=ptr;
        temp=ptr;
        temp->next=NULL;

      }
    }
         printf("\tItem has been successfully added to cart!\n");
    }
    else{

        printf("\tNo proper option chosen. Cart not updated.\n");
    }
}

void Delete(struct node* &head, char name[50])
{
    struct node* temp = head;

    if(temp == NULL){
      printf("\t\nList is empty. Consider adding to cart first\n");
      return;
    }

    while(temp != NULL)
    {
      if(strcmpi(temp->name, name) == 0){
        printf("\tEnter the quantity you want to delete: ");
        int q_to_delete;
        scanf("%d",&q_to_delete);

        if(q_to_delete == temp->quantity){
            if(temp == head){
              head = temp->next;
              printf("\t\nItem Deleted Successfully!\n");
              return;
            }

            struct node* prev = head;
            while(prev->next != temp)
              prev = prev->next;

            prev->next = temp->next;
            printf("\t\nItem Deleted Successfully!\n");
            return;
        }
        else if(q_to_delete > temp->quantity)
        {
          printf("\t\nCannot remove more than present.\n");
          return;
        }
        else{
          temp->quantity -= q_to_delete;
          printf("\t\nItem Deleted Successfully!\n");
          return;
        }
      }
      temp = temp->next;
    }
    printf("\t\nItem does not exist in the list. Try again\n");
    return;
}

int Bill_Finder(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL){
        bill = bill + (temp->price * temp->quantity);
        temp = temp->next;
    }
    return bill;
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}


int display()
{
    printf("Below are the items that have been added to the cart:\n");
    struct node *h;

    h=head;
    printf("\t................................................................................\n");
    printf("\t. \tProduct                       | Price |                     Quantity      .\n");
    printf("\t................................................................................\n");
    while(h!=NULL)
    {
    printf("\t->\t%s\t                           ",h->name);

    printf("%d\t                  ",h->price);

    printf("%d\n",h->quantity);
    printf("\t................................................................................\n\n");
        h=h->next;
    }
    bill = 0;
    printf("\n\t..............................");
    printf("\n\t  \t   TOTAL AMOUNT - %d",Bill_Finder(head));
    printf("\n\t..............................\n\n");

    printf("\tpress 1 for checkout:\n");
    printf("\tpress 2 to delete an item from cart\n");
    printf("\tpress 3 to continue shopping:\n");
    printf("\tEnter your choice: ");
    int nx1;
    scanf("%d",&nx1);
    return nx1;
}



int main()
{

    int menu;
    printf("\t        ---------------------------------\n");
    printf("\t                    FRESH MART\n");
    printf("\t             Freshness in every bite!\n\n");

mm:
{    for(int i=0;;i++)
    {


    printf("\t                     ***********\n");

    printf("\t                      MAIN MENU\n");
    printf("\t                     ***********\n\n");
    printf("\t....................................................\n");
    printf("\t->\tFRUITS                 |            1      .\n");
    printf("\t->\tVEGETABLES             |            2      .\n");
    printf("\t->\tBEVERAGES              |            3      .\n");
    printf("\t->\tFOOD GRAINS            |            4      .\n");
    printf("\t->\tDRY FRUITS             |            5      .\n");
    printf("\t->\tCOOKING OIL            |            6      .\n");
    printf("\t->\tMANAGE CART            |            7      .\n");
    printf("\t....................................................\n\n");
    printf("\tEnter the number corresponding to the item you want:-");

    scanf("\t%d",&menu);


    if(menu==7)
    {
        int nx=display();
        if(nx==1)
        {

        if(bill == 0){
          printf("\t\nAre you sure you want to exit without buying anything? Y/N: ");
          char opt;
          fflush(stdin);
          scanf("%c",&opt);
          if(opt == 'Y'){
            exit(0);
          }
          else{
            goto mm;
          }
        }
        printf("\t....................................................\n");
            printf("\t...............       CHECKOUT       ...............\n");
            printf("\t....................................................\n\n");

        FILE *fp;
        fp=fopen("Clientdata.txt","a");

        if(fopen==NULL)
        {
            printf("Sorry, an unexpected error has occurred!\n");
        }

        else{

        char namec[30];
        char address[50];
        long long int contact;

        printf("\tPlease Enter name of customer: ");
        fflush(stdin);
        gets(namec);
        printf("\n");

        printf("\tPlease Enter your address: ");
        fflush(stdin);
        gets(address);
        printf("\n");

        printf("\tPlease enter your contact information: ");
        scanf("%lld",&contact);
        printf("\n");

        fprintf(fp, "%s\n %s\n %lld\n", namec, address, contact);
        printf("\tBelow is the information you entered...\n");
        printf("\n");
        fclose(fp);

        printf("\tName: %s\n",namec);
        printf("\tAddress: %s\n",address);
        printf("\tContact: %lld\n",contact);

        }
                printf("\n");
                printf("\tHow do you want to pay?\n");
                printf("\t1. UPI\n");
                printf("\t2. Credit / Debit Card\n");
                printf("\t3. Cash on Delivery\n");
                printf("\tEnter your choice: ");

                int option;
                scanf("%d",&option);

                switch(option)
                {
                    case 1://UPI Transaction
                    {

                    printf("\tEnter your UPI ID: ");
                    char upi_id[14];
                    scanf("%s",&upi_id);
                    printf("\n");
                    printf("\tEnter PIN: ");
                    char upi_pin[4];
                    scanf("%s",upi_pin);
                    printf("\n");

                    printf("\n\tConnecting to the server. Please wait....\n\n");

                    delay(3000);
                    printf("\n\tVerifying transaction....\n\n");
                    delay(3000);
                    printf("\tPayment done successfully\n\n");
                    printf("Thank you for shopping with us!!\n\n");
                    exit(0);
                    }

                    case 2://Credit / Debit Card
                    {

                        printf("\tEnter card number : ");
                        char card_no[16];
                        scanf("%s",card_no);

                        printf("\tEnter name on card : ");
                        char name_on_card[50];
                        fflush(stdin);
                        gets(name_on_card);
                        printf("\n");

                        printf("\tEnter expiry date of card : ");
                        char exp_date[5];
                        scanf("%s",exp_date);

                        printf("\tEnter PIN: ");
                        char card_pin[4];
                         int p=0;
                     do{
                        card_pin[p]=getch();
                      if(card_pin[p]!='\r'){
                           printf("*");
                        }
                         p++;
                       }while(p!=5);
                      card_pin[p-1]='\0';
                      printf("\nYou have entered %s as password.",card_pin);
                      getch();


                        printf("\t\nInitiating Transaction\n\n");
                        printf("\tPlease do not close the window.......\n\n");
                        delay(5000);
                        printf("\n\tEnter OTP received on registered mobile no: ");
                        char otp[6];
                        scanf("%s",otp);
                        printf("\t\n\nProcessing Transaction, please wait.......\n\n");
                        delay(5000);

                        printf("\tTransaction completed successfully!\n\n");
                        printf("\n\tThank you for shopping with us!!\n\n");
                        exit(0);
                    }

                    case 3://Cash on delivery
                    printf("\t\n\nThank you for shopping with us! Have a nice day!\n\n");
                    exit(0);
                    break;

                    default:
                    printf("\t\n\nInvalid Input. Check and try again\n");
                }


        }
        else if(nx == 2)
        {
            char name_to_delete[50];
            printf("\tEnter name to delete: ");
            fflush(stdin);
            gets(name_to_delete);

            Delete(head, name_to_delete);

        }
        else
        goto mm;

    }
     else if(menu==6)
    {

      int item;

            printf("\t....................................................\n");
            printf("\t. \tOils             |  Price   |    Selection .\n");
            printf("\t....................................................\n");
            printf("\t->\tSUNFLOWER OIL    | Rs  150  |        1     .\n");
            printf("\t->\tOLIVE OIL        | Rs  170  |        2     .\n");
            printf("\t->\tGROUNDNUT OIL    | Rs  200  |        3     .\n");
            printf("\t->\tSESAME OIL       | Rs  140  |        4     .\n");
            printf("\t->\tCOCONUT OIL      | Rs  160  |        5     .\n");
            printf("\t->\tMAIN MENU        |          |        0     .\n");
            printf("\t...................................................\n\n");
            printf("\tEnter the number corresponding to the oil you want: ");

        scanf("\t%d",&item);
        if(item==0)
        goto mm;
        else
        {int q;
        printf("\tEnter quantity you want to add: ");
        scanf("%d",&q);
            additem(menu,item,q);
        }
    }
     else if(menu==5)
    {
        int item;

            printf("\t....................................................\n");
            printf("\t. \tDry Fruits       | Price |    Selection    .\n");
            printf("\t....................................................\n");
            printf("\t->\tWALNUTS        | Rs  550  |        1       .\n");
            printf("\t->\tALMONDS        | Rs  700  |        2       .\n");
            printf("\t->\tDATES          | Rs  450  |        3       .\n");
            printf("\t->\tAPRICOTS       | Rs  600  |        4       .\n");
            printf("\t->\tCASHEWS        | Rs  500  |        5       .\n");
            printf("\t->\tMAIN MENU      |          |        0       .\n");
            printf("\t....................................................\n\n");
            printf("\tEnter the number corresponding to the dry fruit you want: ");

        scanf("\t%d",&item);
         if(item==0)
        goto mm;
        else
        {
        int q;
        printf("\tEnter quantity you want to add: ");
        scanf("%d",&q);
            additem(menu,item,q);
    }
    }
     else if(menu==4)
    {
        int item;

            printf("\t....................................................\n");
            printf("\t. \tGrains          | Price |     Selection    .\n");
            printf("\t....................................................\n");
            printf("\t->\tWHEAT         | Rs  120  |        1        .\n");
            printf("\t->\tBARLEY        | Rs  170  |        2        .\n");
            printf("\t->\tRICE          | Rs  210  |        3        .\n");
            printf("\t->\tCORN          | Rs  150  |        4        .\n");
            printf("\t->\tOATS          | Rs  300  |        5        .\n");
            printf("\t->\tMAIN MENU     |          |        0        .\n");
            printf("\t....................................................\n\n");
            printf("\tEnter the number corresponding to the beverage you want: ");

        scanf("\t%d",&item);
         if(item==0)
        goto mm;
        else
        {
        int q;
        printf("\tEnter quantity you want to add: ");
        scanf("%d",&q);
            additem(menu,item,q);
        }
    }
     else if(menu==3)
    {
        int item;

            printf("\t....................................................\n");
            printf("\t. \tBeverages          | Price |    Selection  .\n");
            printf("\t....................................................\n");
            printf("\t->\tSPRITE         | Rs  30  |        1        .\n");
            printf("\t->\tTHUMBS UP      | Rs  40  |        2        .\n");
            printf("\t->\tCOKE           | Rs  25  |        3        .\n");
            printf("\t->\tLIMCA          | Rs  20  |        4        .\n");
            printf("\t->\tMAAZA          | Rs  30  |        5        .\n");
            printf("\t->\tMAIN MENU      |         |        0        .\n");
            printf("\t....................................................\n\n");
            printf("\tEnter the number corresponding to the beverage you want: ");

        scanf("\t%d",&item);
         if(item==0)
        goto mm;
        else
        {
        int q;
        printf("\tEnter quantity you want to add: ");
        scanf("%d",&q);
            additem(menu,item,q);

    }}
     else if(menu==2)
    {
        int item;

            printf("\t....................................................\n");
            printf("\t. \tVegetables     | Price   |     Selection   .\n");
            printf("\t....................................................\n");
            printf("\t->\tCARROT         | Rs  45  |        1        .\n");
            printf("\t->\tBITTERGOURD    | Rs  20  |        2        .\n");
            printf("\t->\tRADISH         | Rs  35  |        3        .\n");
            printf("\t->\tBRINJAL        | Rs  50  |        4        .\n");
            printf("\t->\tLADY'S FINGER  | Rs  70  |        5        .\n");
            printf("\t->\tMAIN MENU      |         |        0        .\n");
            printf("\t....................................................\n\n");
            printf("\tEnter the number corresponding to the vegetable you want: ");

        scanf("\t%d",&item);
         if(item==0)
        goto mm;
        else
        {
        int q;
        printf("\tEnter quantity you want to add: ");
        scanf("%d",&q);
            additem(menu,item,q);

    }}
     else if(menu==1)
    {
        int item;

            printf("\t....................................................\n");
            printf("\t. \tFruits         | Price    |    Selection   .\n");
            printf("\t....................................................\n");
            printf("\t->\tAPPLE          | Rs  50   |        1       .\n");
            printf("\t->\tBANANA         | Rs  30   |        2       .\n");
            printf("\t->\tMANGO          | Rs  150  |        3       .\n");
            printf("\t->\tGRAPES         | Rs  60   |        4       .\n");
            printf("\t->\tKIWI           | Rs  90   |        5       .\n");
            printf("\t->\tMAIN MENU      |          |        0       .\n");
            printf("\t....................................................\n\n");
            printf("\tEnter the number corresponding to the fruit you want: ");

        scanf("\t%d",&item);
         if(item==0)
        goto mm;
        else
        {
        int q;
        printf("\tEnter quantity you want to add: ");
        scanf("%d",&q);
            additem(menu,item,q);

    }
}
    else
        printf("\tPlease Enter a correct menu option.\n");

    }
}
    return 0;
}
