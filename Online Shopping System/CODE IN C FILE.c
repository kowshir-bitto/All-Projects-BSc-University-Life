#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define size 30

#define NAME 30
#define PASSWORD 30

typedef struct Customer
{
    char name[NAME];
    char pass[PASSWORD];
} Customer;

int i;
FILE *bitto;
struct buying
{
    char product_name[size][30],product_price[size][30],product_code[size][30];
};
struct buying b;
struct pay
{
    char names[20];
    char add[30];
    char pays[12];
    char code[10];
} j;
void information(void);
void rocket(void);
void ucash(void);
void bkash(void);
void confirm(void);
void again(void);
void shoes3(void);
void cloths3(void);
void electronics_product3(void);
void computer_product3(void);
void shop(void);
void signin(void);
void sign_up(void);
void shoes2(void);
void cloths2(void);
void electronics_product2(void);
void computer_product2(void);
void visitors(void);
void customer(void);
void shoes1(void);
void cloths1(void);
void electronics_product1(void);
void computer_product1(void);
void available_product(void);
void shoes(void);
void cloths(void);
void electronics_product(void);
void computer_product(void);
void add_product(void);
void admin_page(void);
void admin(void);
int main()
{
    int i;
    system("COLOR 5B");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    printf("\t\t\t1. Administration\n\n\n");
    printf("\t\t\t2. Customer Service\n\n\n");
    printf("\t\t\t3. Exit\n\n");
    int choice;
    printf("\n\t\t\tEnter Your Choice = ");
    scanf("\t%d",&choice);
    switch(choice)
    {
    case 1:
    {
        admin();
        break;
    }
    case 2:
    {
        customer();
        break;
    }
    case 3:
    {
        system("COLOR 5B");
        system("cls");
        printf("\n\n");
        time_t t;
        time(&t);
        printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
        printf("\n\n");
        char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
        for(i=0; a[i]!=0; i++)
        {
            Sleep(100);
            printf("%c",a[i]);
        }
        printf("\n\n");
        printf("\t\t\t THANKS FOR VISITING US\n\n\n");
        printf("\t\t\t COME AGAIN\n\n\n");
        printf("\t\t\t STAY TUNE,STAY TOGETHER\n\n\n");

        break;
    }
    default:
    {
        system("cls");
        system("color 5B");
        printf("\n\n\n\t\t\tWrong Choice ??");
        printf("\\n\n\n\t\t\tChoice Again ");
        printf("\\n\n\n\t\t\tPress Enter For Choice Again ");
        getch();
        main();
        break;
    }
    }
}
void admin()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int o=0,i=0;
    char username[10],c=' ';
    char password[10];
    char user[10]="bitto";
    char pass[10]="181352379";
    do
    {
        printf("\n\n\n\t\tUser Name = ");
        scanf("%s", &username);
        printf(" \n\n\n\t\t Password = ");
        while(i<10)
        {
            password[i]=getch();
            c=password[i];
            if(c==13)
                break;
            else
                printf("*");
            i++;
        }
        password[i]='\0';
        i=0;
        if(strcmp(username,"bitto")==0 && strcmp(password,"181352379")==0)
        {
            printf("\n\n\nLOGIN IS SUCCESSFUL");
            admin_page();
            break;
        }
        else
        {
            printf("\n\n\tSORRY !!!!\n\n\tLOGIN IS UNSUCESSFUL");
            system("cls");
            system("color 5B");
            o++;
            getch();

        }
    }
    while(o<=2);
    if (o>2)
    {
        printf("\n\n\t\tSorry you have entered the wrong USERNAME and PASSWORD for 4 times!!!");
        getch();
        system("cls");
        main();
    }

}
void admin_page()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int ab;
    printf("\t\t\t1. Add Product\n\n");
    printf("\t\t\t2. Available Product List\n\n");
    printf("\t\t\t3. Information of buy \n\n");
    printf("\t\t\t4. Exit\n\n");
    printf("\t\t\tEnter Your Choice = ");
    scanf("\t%d",&ab);
    switch(ab)
    {
    case 1:
    {
        add_product();
        break;
    }
    case 2:
    {
        available_product();
        break;
    }
    case 3:
    {
        information();
        break;
    }
    case 4:
    {
        system("COLOR 5B");
        system("cls");
        printf("\n\n");
        time_t t;
        time(&t);
        printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
        printf("\n\n");
        char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
        for(i=0; a[i]!=NULL; i++)
        {
            Sleep(100);
            printf("%c",a[i]);
        }
        printf("\n\n");
        printf("\n\t\t\tHI SIR\n\n");
        printf("\t\t\tHAVE A GOOD DAY\n\n");
        break;
    }
    default:
    {

        system("COLOR 5B");
        system("cls");
        printf("\n\n");
        time_t t;
        time(&t);
        printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
        printf("\n\n");
        char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
        for(i=0; a[i]!=0; i++)
        {
            Sleep(100);
            printf("%c",a[i]);
        }
        printf("\n\n");
        printf("\n\t Wrong Choice\n");
        printf("\n\t Enter Your Choice From The Menu\n\n\tPress Enter For Choice Again ");
        getch();
        admin_page();
        break;
    }
    }


}
void add_product()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int l;
    printf("\t\t\t1. Computer product \n\n");
    printf("\t\t\t2. Electronics product \n \n");
    printf("\t\t\t3. Cloths \n\n");
    printf("\t\t\t4. Sheos \n\n");
    printf("Enter your choices = ");
    scanf("%d",&l);
    switch(l)
    {
    case 1:
    {
        computer_product();
        break;
    }
    case 2:
    {
        electronics_product();
        break;
    }
    case 3:
    {
        cloths();
        break;
    }
    case 4:
    {
        shoes();
        break;
    }
    default:
        system("COLOR 5B");
        system("cls");
        printf("\n\n");
        time_t t;
        time(&t);
        printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
        printf("\n\n");
        char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
        for(i=0; a[i]!=NULL; i++)
        {
            Sleep(100);
            printf("%c",a[i]);
        }
        printf("\n\n");
        printf("\n\t\t\tHI SIR\n\n");
        printf("\t\t\tHAVE A GOOD DAY\n\n");
        break;

    }
}
void computer_product()
{

    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");

    bitto=fopen("computer.txt","a+");

    printf("\n\n\tEnter your product name: ");
    fflush(stdin);
    gets(b.product_name[i]);
    printf("\n\n\tEnter your product Amount: ");
    fflush(stdin);
    gets(b.product_price[i]);
    printf("\n\n\tEnter your product Code: ");
    fflush(stdin);
    gets(b.product_code[i]);
    fprintf(bitto,"PRODUCT NAME = %s\tPRICE = %s\tCODE = %s",b.product_name[i],b.product_price[i],b.product_code[i]);
    fclose(bitto);
    printf("\nPress enter for go to admin again ");
    getch();
    admin_page();
}

void electronics_product()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");

    bitto=fopen("electronics.txt","a+");

    printf("\n\n\tEnter your product name: ");
    fflush(stdin);
    gets(b.product_name[i]);
    printf("\n\n\tEnter your product Amount: ");
    fflush(stdin);
    gets(b.product_price[i]);
    printf("\n\n\tEnter your product Code: ");
    fflush(stdin);
    gets(b.product_code[i]);
    fprintf(bitto,"PRODUCT NAME = %s\tPRICE = %s\tCODE = %s",b.product_name[i],b.product_price[i],b.product_code[i]);
    fclose(bitto);
    printf("\nPress enter for go to admin again ");
    getch();
    admin_page();
}

void cloths()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("cloths.txt","a+");

    printf("\n\n\tEnter your product name: ");
    fflush(stdin);
    gets(b.product_name[i]);
    printf("\n\n\tEnter your product Amount: ");
    fflush(stdin);
    gets(b.product_price[i]);
    printf("\n\n\tEnter your product Code:  ");
    fflush(stdin);
    gets(b.product_code[i]);
    fprintf(bitto,"PRODUCT NAME = %s\tPRICE = %s\tCODE = %s",b.product_name[i],b.product_price[i],b.product_code[i]);
    fclose(bitto);
    printf("\n Press enter for go to admin again ");
    getch();
    admin_page();

}

void shoes()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("shoes.txt","a+");
    printf("\n\n\tEnter your product name: ");
    fflush(stdin);
    gets(b.product_name[i]);
    printf("\n\n\tEnter your product Amount: ");
    fflush(stdin);
    gets(b.product_price[i]);
    printf("\n\n\tEnter your product Code: ");
    fflush(stdin);
    gets(b.product_code[i]);
    fprintf(bitto,"PRODUCT NAME = %s\tPRICE = %s\tCODE = %s",b.product_name[i],b.product_price[i],b.product_code[i]);
    fclose(bitto);
    printf("\n Press enter for go to admin again ");
    getch();
    admin_page();
}
void available_product()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    for(i=0; ctime(&t)==1; i++)
        printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int m;
    printf("\t\t\t1. Computer product list\n\n");
    printf("\t\t\t2. Electronics product list\n\n");
    printf("\t\t\t3. cloths\n\n");
    printf("\t\t\t4. shoes\n\n");
    printf("Enter your choice = ");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
    {
        computer_product1();
        break;
    }
    case 2:
    {
        electronics_product1();
        break;
    }
    case 3:
    {
        cloths1();
        break;
    }
    case 4:
    {
        shoes1();
        break;
    }
    }
}
computer_product1()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("computer.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n Press enter for go to admin again ");
    getch();
    admin_page();
}
electronics_product1()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("electronics.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\t Press enter for go to admin again ");
    getch();
    admin_page();
}
cloths1()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("cloths.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\nPress enter for go to admin again ");
    getch();
    admin_page();

}
shoes1()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("sheos.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\nPress enter for go to admin again ");
    getch();
    admin_page();
}
void customer()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    printf("\t\t\t1. Visitors\n\n");
    printf("\t\t\t2. Sign In\n\n");
    printf("\t\t\t3. Sign Up\n\n");
    int choice2;
    printf("\n\nEnter Your Choice= ");
    scanf("%d",&choice2);
    switch(choice2)
    {
    case 1:
        visitors();
        break;
    case 2:

        signin();
        break;
    case 3:
        sign_up();

        break;
    }

}
void visitors()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int j;
    printf("\t\t\t1. Computer product\n\n");
    printf("\t\t\t2. Electronics product\n\n");
    printf("\t\t\t3. cloths\n\n");
    printf("\t\t\t4. sheos\n\n");
    printf("\nEnter your choice = ");
    scanf("%d",&j);
    switch(j)
    {
    case 1:
    {
        computer_product2();
        break;
    }
    case 2:
    {
        electronics_product2();
        break;
    }
    case 3:
    {
        cloths2();
        break;
    }
    case 4:
    {
        shoes2();
        break;
    }
    }
}
void computer_product2()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("computer.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nPress enter for go to visitor choice ");
    getch();
    visitors();
}
void electronics_product2()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("electronics.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nPress enter for go to visitor choice ");
    getch();
    visitors();
}
void cloths2()

{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    for(i=0; ctime(&t)==1; i++)
        printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("cloths.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nPress enter for go to visitor choice ");
    getch();
    visitors();
}
void shoes2()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("sheos.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nPress enter for go to visitor choice ");
    getch();
    visitors();
}
void sign_up()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    Customer account;
    Customer fileAccount;
    int NameFound = 0;
    FILE *fp;
    printf("\n\n");
    printf("\n\nEnter your name = ");
    fflush(stdin);
    fgets(account.name,NAME, stdin);
    printf("\n\nEnter your password = ");
    fflush(stdin);
    fgets(account.pass,PASSWORD, stdin);
    fp = fopen("customer database.bin","a+");
    if (fp == NULL)
    {
        fp = fopen("customer database.bin","w+");
    }
    while(fread(&fileAccount, sizeof(Customer), 1, fp))
    {
        if (strncmp(fileAccount.name, account.name, NAME) == 0)
        {
            printf("Name already exists.");
            NameFound = 1;
            break;
        }
    }
    if(NameFound == 0)
    {
        fwrite(&account, sizeof(Customer), 1, fp);

    }
    fclose(fp);

}

void signin()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    Customer account;
    Customer fileAccount;
    int Found = 0;
    FILE *fp;
    fp = fopen("customer database.bin","r");
    printf("\n\n\nEnter Name = ");
    fflush(stdin);
    fgets(account.name, NAME, stdin);
    printf("\n\n\nEnter Password = ");
    fflush(stdin);
    fgets(account.pass, PASSWORD, stdin);
    while(fread(&fileAccount, sizeof(Customer), 1, fp))
    {
        if (strncmp(fileAccount.name, account.name, NAME) == 0
                && strncmp(fileAccount.pass, account.pass, PASSWORD) == 0)
        {
            printf("\nLog in successful.");
            Found = 1;
            printf("\n\tPress enter for shop ");
            getch();
            shop();
            break;
        }
    }
    if(Found == 0)
    {

        printf("\nLog in not successful.");
    }
    fclose(fp);
}

void shop()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int lm;
    printf("\t\t\t1. Computer product list\n\n");
    printf("\t\t\t2. Electronics product list\n\n");
    printf("\t\t\t3. cloths\n\n");
    printf("\t\t\t4. shoes\n\n");
    printf("Enter your choice which type product you want to buy = ");
    scanf("%d",&lm);
    switch(lm)
    {
    case 1:
    {
        computer_product3();
        break;
    }
    case 2:
    {
        electronics_product3();
        break;
    }
    case 3:
    {
        cloths3();
        break;
    }
    case 4:
    {
        shoes3();
        break;
    }
    }
}
void computer_product3()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("computer.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nEnter to continue ");
    getch();
    again();
}
void electronics_product3()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("electronics.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nEnter to continue ");
    getch();
    again();
}
void cloths3()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("cloths.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nEnter to continue ");
    getch();
    again();

}
void shoes3()
{
    system("COLOR 5B");
    system("cls");
    printf("\n\n");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=NULL; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    bitto=fopen("sheos.txt","r+");
    while(fgets(b.product_name[i],10000,bitto)!=NULL)
        printf("%s",b.product_name[i]);
    fclose(bitto);
    printf("\n\nEnter to continue ");
    getch();
    again();
}
void again()
{
    system("cls");
    system("COLOR 5B");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int kzm;
    printf("\n\n\t\t1.Confirm buy");
    printf("\n\n\t\t2. Exit");
    printf("\n\n\tEnter your choice = ");
    scanf("%d",&kzm);
    switch(kzm)
    {
    case 1:
    {
        confirm();
        break;
    }
    case 2:
    {
        system("cls");
        system("COLOR 5B");
        time_t t;
        time(&t);
        printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
        printf("\n\n");
        char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
        for(i=0; a[i]!=0; i++)
        {
            Sleep(100);
            printf("%c",a[i]);
        }
        printf("\n\n");
        printf("Thanks for come");
    }
    }
}
void confirm()
{
    system("cls");
    system("COLOR 5B");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    int kxm;
    printf("\n\n\t\tWhich method you want to pay money ");
    printf("\n\n\t\t1. Bkash");
    printf("\n\n\t\t2. Ucash");
    printf("\n\n\t\t3. Rocket");
    printf("\n\n\tEnter your choice = ");
    scanf("%d",&kxm);
    switch(kxm)
    {
    case 1:
    {
        bkash();
        break;
    }
    case 2:
    {
        ucash();
        break;
    }
    case 3:
    {
        rocket();
        break;
    }
    }
}

void bkash()
{
    system("cls");
    system("COLOR 5B");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    printf("Pay in this number = 01706159566\n\n");
    FILE *pay;
    pay=fopen("information.txt","ab+");
    printf("Enter your product name: ");
    fflush(stdin);
    scanf("%s",j.names);
    printf("Enter your product code: ");
    fflush(stdin);
    scanf("%s",j.code);
    printf("Enter your address: ");
    fflush(stdin);
    scanf("%s",j.add);
    printf("Enter your money pay number: ");
    fflush(stdin);
    scanf("%s",j.pays);
    fwrite(&j,sizeof(j),1,pay);
    fclose(pay);
}
void ucash()
{

    system("cls");
    system("COLOR 5B");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    printf("Pay in this number = 01706159566\n\n");
    FILE *pay;
    pay=fopen("information.txt","ab+");
    printf("Enter your product name: ");
    fflush(stdin);
    scanf("%s",j.names);
    printf("Enter your product code: ");
    fflush(stdin);
    scanf("%s",j.code);
    printf("Enter your address: ");
    fflush(stdin);
    scanf("%s",j.add);
    printf("Enter your money pay number: ");
    fflush(stdin);
    scanf("%s",j.pays);
    fwrite(&j,sizeof(j),1,pay);
    fclose(pay);
}
void rocket()
{

    system("cls");
    system("COLOR 5B");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }

    printf("\n\n");
    printf("Pay in this number = 01706159566\n\n");
    FILE *pay;
    pay=fopen("information.txt","ab+");
    printf("Enter your product name: ");
    fflush(stdin);
    scanf("%s",j.names);
    printf("Enter your product code: ");
    fflush(stdin);
    scanf("%s",j.code);
    printf("Enter your address: ");
    fflush(stdin);
    scanf("%s",j.add);
    printf("Enter your money pay number: ");
    fflush(stdin);
    scanf("%s",j.pays);
    fwrite(&j,sizeof(j),1,pay);
    fclose(pay);

}
void information()
{
    system("cls");
    system("COLOR 5B");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n");
    char a[]="\t\t\t\t\t\t\t\tOnline Shopping System\t\t\t\t\t";
    for(i=0; a[i]!=0; i++)
    {
        Sleep(100);
        printf("%c",a[i]);
    }
    printf("\n\n");
    FILE*pay;
    pay=fopen("information.txt","r+");
    while(fread(&j,sizeof(j),1,pay))
        printf("%s",j.names);
    printf("%s",j.add);
    printf("%s",j.code);
    printf("%s",j.pays);
    fclose(pay);

}
