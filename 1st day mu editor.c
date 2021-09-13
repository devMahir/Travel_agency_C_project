#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    char name[100];
    char phone[15];
    char address[50];
    char email[50];
    char check_in[50];
    char check_out[50];
    struct node *next;
    struct node *prev;
}*head,*student,*temp,*tail,*p,*q,*s;

struct login
{
    char username[50];
    char password[30];
    struct login *next;
    struct login *prev;
}*head2,*user,*x,*tail2;

void cox_bazer_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");
    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t1.Best Western Plus Heritage - 5859 Taka per night\n\n");
    printf("\t\t\t2.Fu-Wang Dominous Resort - 3218 Taka per night\n\n");
    printf("\t\t\t3.Beach Way - 2476 Taka per night\n\n");
    printf("\t\t\t4.Hotel Mishuk - 1238 Taka per night\n\n");
    printf("\t\t\t5.Back\n\n\n");
    printf("\t\t\t6.Main Menu\n\n\n");

    char another, choice;

    printf("\t\t\t\t\tYour Choice: ");
    choice  = getche();
    switch(choice)
    {
    case 0:
        main();
        break;
    default:
        system("CLS");
        system("color c"); // red
        printf("\nUnder construction\n");
    }
}

void Shundarban_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    printf("\t\t\t1.Tora Eco Resort - 5883 Taka per night\n\n");
    printf("\t\t\t2.Sundarban Gateway Resort - 2667 Taka per night\n\n");
    printf("\t\t\t3.Sonar Tori - 1875 Taka per night\n\n");
    printf("\t\t\t4.Hotel Mouchak - 824 Taka per night\n\n");
    printf("\t\t\t5.Back\n\n\n");
    printf("\t\t\t6.Main Menu\n\n\n");

}
void Inani_Beach_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
void Jaflong_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
void Kuyakata_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}


void national()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t\t1.Cox Bazer\n");

    printf("\t\t\t\t\t2.Shundarban\n");

    printf("\t\t\t\t\t3.Inani Beach\n");

    printf("\t\t\t\t\t4.Jaflong\n");

    printf("\t\t\t\t\t5.Kuyakata Sea Beach\n");

    printf("\t\t\t\t\t6.Main Menu\n");
    printf("\t\t\t\t\t7.Back\n");
    printf("\t\t\t\t\t8.Exit\n");

    char another, choice;

    printf("\t\t\t\t\tYour Choice: ");
    choice  = getche();
    switch(choice)
    {
    case '1':
        system("cls");
        cox_bazer_hotel();
        break;
    case '2':
        system("cls");

        Shundarban_hotel();

        break;
    case '3':
        system("cls");

        Inani_Beach_hotel();


        break;

    case '4':
        system("cls");

        Jaflong_hotel();

        break;

    case '5':
        system("cls");

        system("cls");
        Kuyakata_hotel();

        break;
    case '6':
        system("cls");

        main();

        break;

    case '7':
        system("cls");

        national();

        break;
    case '8':

        exit(0);
    }

}

void login()
{
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t\t User Login\n\n");
    user_pass();
    x=head2;
    char password[40];
    char username[40];


    printf("\t\t\t\tEnter username: ");
    scanf("%s",username);

    printf("\t\t\t\tEnter password: ");
    scanf("%s",password);



    FILE *fp;
    fp=fopen("pass_username.txt","r+");
    while(x!=NULL)
    {

        if(strcmp(username, x->username) == 0 && strcmp(password, x->password) == 0)
        {
            system("cls");
            printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n\n");

            printf("\t\t\t\t\t1.Select Spots\n");
            printf("\t\t\t\t\t0.Main Menu\n\n");

            char another, choice;

            printf("\t\t\t\t\tYour Choice: ");
            choice  = getche();

            switch(choice)
            {
            case '1':
                system("cls");
                another = 'y';
                while(another == 'y')
                {
                    national();
                    another = getche();

                }
                return;
                    break;

            case '0':
                system("cls");
                another = 'y';
                while(another == 'y')
                {
                    system("cls");
                    main();
                    another = getche();
                }
                break;

            }

        }

        x=x->next;



    }
    system("cls");
    printf("\t\t\t\t\tWrong Password!!!\n\n\n");
    printf("\t\t\t\t\t1.Login Menu\n");
    printf("\t\t\t\t\t2.Main Menu\n");



    char another, choice;

    printf("\t\t\t\t\tYour Choice: ");
    choice  = getche();

    switch(choice)
    {
    case '1':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            system("cls");
            login();
            another = getche();
        }
        break;
    case '2':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            system("cls");
            main();
            another = getche();
        }
        break;
    }

    fclose(fp);

}

void user_pass()
{
    head2=(struct login *)malloc(sizeof(struct login));
    tail2 = head2;
    FILE *fp;
    fp=fopen("pass_username.txt","r");
    int login_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        user=(struct login *)malloc(sizeof(struct login));

        fscanf(fp,"%s",&user->username);

        fscanf(fp,"%s",&user->password);


        user->next=NULL;
        user->prev=tail2;
        tail2->next=user;
        tail2=user;
        if(login_no ==1)
        {
            head2=user;
        }


        login_no++;
    }
    if(tail2==head2)
    {
        tail2=NULL;
    }
    else
    {
        tail2=tail2->prev;
        tail2->next=NULL;
    }
    fclose(fp);

}

void reg()
{

    char username[50],password[30];

    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t\tRegister User\n");


    printf("\n\t\t\t\tEnter UserName : ");
    scanf("%s",&username);

    printf("\n\t\t\t\tEnter Password : ");
    scanf("%s",&password);
    printf("\n");
    signup();


    FILE *fp;
    fp=fopen("pass_username.txt","a+");

    fprintf(fp,"%s ",username);

    fprintf(fp," %s\n",password);

    fclose(fp);
    system("cls");
    printf("\t\t\t\tRegistration successfully\n");
    main();
}
void admin()
{
    system("CLS");
    system("color c"); // red
    printf("\nUnder construction\n");

}
void signup()
{
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t    Add User Information\n\n");

    char name[100],phone[15];
    char address[50];
    char email[50];
    char check_in[50];
    char check_out[50];
    printf("\n\t\t\t\tEnter your name: ");
    scanf("%s",name);

    printf("\n\t\t\t\tEnter your Address: ");
    scanf("%s",address);

    printf("\n\t\t\t\tEnter your Phone Number: ");
    scanf("%s",phone);

    printf("\n\t\t\t\tEnter your email: ");
    scanf("%s",email);

    printf("\n\t\t\t\tEnter your Check In Date(dd-mm-yy): ");
    scanf("%s",check_in);

    printf("\n\t\t\t\tEnter your Check Out Date(dd-mm-yy): ");
    scanf("%s",check_out);



    FILE *fp;
    fp=fopen("UserInfo.txt","a+");
    // fprintf(fp,"%d ",id);

    fprintf(fp,"%s ",name);
    fprintf(fp,"%s ",address);
    fprintf(fp," %s ",phone);
    fprintf(fp,"%s ",email);
    fprintf(fp,"%s ",check_in);
    fprintf(fp,"%s \n",check_out);


    fclose(fp);
    system("cls");


}
void main()
{
    system("color 9"); // blue color
    printf("\n\n\t\t\t\t  Welcome To Mahir's Travel Agency\n");
    printf("\t\t\t\t\t1.Admin\n");
    printf("\t\t\t\t\t2.Log In\n");
    printf("\t\t\t\t\t3.Sign Up\n");
    printf("\t\t\t\t\t4.Exit\n");
    char another, choice;

    printf("\n\n\t\t\t\t\tYour Choice: ");
    choice  = getche();
    switch(choice)
    {
    case '1':
        system("cls");
        another = 'y';
        admin();
        break;
    case '2':
        system("cls");

        login();

        break;
    case '3':
        system("cls");

        reg();

        break;
    case '4':
        exit(0);
        break;

    default:
        exit(0);/// exit from the program

    }
}
