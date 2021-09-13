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

void payment_N_C_hm()
{
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\tHotel Mishuk - 1238 Taka per night\n\n");
    int taka,night;
    printf("\t\t\t\tEnter stay night: ");
    scanf("%d",&night);
    printf("\n");
    printf("\t\t\t\tEnter payment taka: ");
    scanf("%d",&taka);


    if(taka==1238)
    {

        int total;
        total=(taka*night)+500;
        printf("\t\tYou are successfully payment %d Taka With Service charge and Vat.",total);
    }
    else
    {
        printf("\t\t\t\tpayment not granted\n");
        main();
    }
}

void payment_N_C_bw()
{
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\tBeach Way - 2476 Taka per night\n\n");
    int taka,night;
    printf("\t\t\t\tEnter stay night: ");
    scanf("%d",&night);
    printf("\n");
    printf("\t\t\t\tEnter payment taka: ");
    scanf("%d",&taka);


    if(taka==2476)
    {

        int total;
        total=(taka*night)+500;
        printf("\t\tYou are successfully payment %d Taka With Service charge and Vat.",total);
    }
    else
    {
        printf("\t\t\t\tpayment not granted\n");
        main();
    }
}

void payment_N_C_fwdr()
{
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\tFu-Wang Dominous Resort - 3218 Taka per night\n\n");
    int taka,night;
    printf("\t\t\tEnter stay night: ");
    scanf("%d",&night);
    printf("\n");
    printf("\t\t\t\tEnter payment taka: ");
    scanf("%d",&taka);


    if(taka==3218)
    {

        int total;
        total=(taka*night)+500;
        printf("You are successfully payment %d Taka With Service charge and Vat.",total);
    }
    else
    {
        printf("payment not granted\n");
        main();
    }
}


void payment_N_C_bwph()
{
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\tBest Western Plus Heritage - 5859 Taka per night\n");
    int taka,night;
    printf("\t\t\t\tEnter stay night: ");
    scanf("%d",&night);
    printf("\n");
    printf("\t\t\t\tEnter payment taka: ");
    scanf("%d",&taka);


    if(taka==5859)
    {

        int total;
        total=(taka*night)+500;
        printf("You are successfully payment %d Taka With Service charge and Vat.",total);
    }
    else
    {
        printf("payment not granted\n");
        main();
    }
}

void hotelname_taka_a_last()
{

    char another, choice;

    printf("\t\t\t\t\tpress 1 for confirm press 2 for exit\n");
    choice  = getche();

    switch(choice)
    {
    case '1':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            //payment();
            another = getche();
        }
        break;
    case '2':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            exit(0);
            another = getche();
        }
        break;
    }

}

void cox_bazer_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

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
    case '1':
        system("cls");
        another = 'y';
        while(another == 'y')
        {

            payment_N_C_bwph();

            another = getche();
        }
        break;
    case '2':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            payment_N_C_fwdr();
            another = getche();
        }
        break;
    case '3':
        system("cls");
        another = 'y';
        while(another == 'y')
        {

            payment_N_C_bw();
            another = getche();
        }
        break;

    case '4':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            payment_N_C_hm();
            another = getche();
        }
        break;

    case '5':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            system("cls");
            national();
            another = getche();
        }
        break;
    case '6':
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

void Shundarban_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

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
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
void Jaflong_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}
void Kuyakata_hotel()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
}

void international()
{
    printf("Not Added!!!");
}
void national()
{
    system("cls");
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

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
        another = 'y';
        while(another == 'y')
        {
            cox_bazer_hotel();
            another = getche();
        }
        break;
    case '2':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            Shundarban_hotel();
            another = getche();
        }
        break;
    case '3':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            Inani_Beach_hotel();
            another = getche();
        }
        break;

    case '4':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            Jaflong_hotel();
            another = getche();
        }
        break;

    case '5':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            system("cls");
            Kuyakata_hotel();
            another = getche();
        }
        break;
    case '6':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            system("cls");
            main();
            another = getche();
        }
        break;

    case '7':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            system("cls");
            national();
            another = getche();
        }
        break;
    case '8':

        exit(0);
    }

}

void login()
{
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

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
            printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n\n");
            national();
            return;

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

void all_user()
{
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    input();
    q=head;

    FILE *fp;
    fp=fopen("UserInfo.txt","r");
    while(head!=NULL)
    {

        printf("\n\t\t\t\tName: ");
        printf("%s",head->name);
        printf("\n");
        printf("\t\t\t\tNumber: ");
        printf("%s",head->phone);
        printf("\n\n");

        head=head->next;
    }
    printf("\n");
}


void search()
{
    input();
    q=head;
    char s_n[100];
    printf("\nEnter search By Name: ");
    scanf("%s",s_n);
    FILE *fp;
    fp=fopen("UserInfo.txt","r");
    while(head!=NULL)
    {
        if(strcmp(s_n, head->name) == 0)
        {
            printf("\nName: ");
            printf("%s",head->name);
            printf("\n");
            printf("\nAddress: ");
            printf("%s",head->address);
            printf("\n");
            printf("\nEmail: ");
            printf("%s",head->email);
            printf("\n");
            printf("\nNumber: ");
            printf("%s",head->phone);
            printf("\n");
            printf("\nCheck In: ");
            printf("%s",head->check_in);
            printf("\n");
            printf("\nCheck Out: ");
            printf("%s",head->check_out);
            printf("\n\n");
            getchar();
            main();


        }

        head=head->next;
    }
    printf("\n");
}




void input()
{

    head=(struct node *)malloc(sizeof(struct node));
    tail = head;
    FILE *fp;
    fp=fopen("UserInfo.txt","r");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        student=(struct node *)malloc(sizeof(struct node));

        fscanf(fp,"%s",&student->name);
        fscanf(fp,"%s",&student->address);
        fscanf(fp,"%s",&student->phone);
        fscanf(fp,"%s",&student->email);
        fscanf(fp,"%s",&student->check_in);
        fscanf(fp,"%s",&student->check_out);


        student->next=NULL;
        student->prev=tail;
        tail->next=student;
        tail=student;
        if(node_no ==1)
        {
            head=student;
        }


        node_no++;
    }
    if(tail==head)
    {
        tail=NULL;
    }
    else
    {
        tail=tail->prev;
        tail->next=NULL;
    }
    fclose(fp);



}
void student_edit()
{
    input();
    p=head;
    char s_n[100];
    int i=0;
    printf("\nEnter search By Name : ");
    scanf("%s",s_n);
    FILE *fp;
    fp=fopen("UserInfo.txt","w+");
    while(head!=NULL)
    {

        if(strcmp(s_n, head->name) == 0)
        {
            char name[100],phone[15];
            char address[50];
            char email[50];
            char check_in[50];
            char check_out[50];
            //getchar();
            printf("\nEnter name(Single name) : ");
            scanf("%s",name);
            printf("\nEnter Address : ");
            scanf("%s",address);
            printf("\nEnter phone number : ");
            //gets(phone);
            scanf("%s",phone);
            printf("\nEnter email : ");
            scanf("%s",email);
            printf("\nEnter check in : ");
            scanf("%s",check_in);
            printf("\nEnter check out : ");
            scanf("%s",check_out);


            fprintf(fp,"%s ",head->name);
            fprintf(fp,"%s ",head->address);
            fprintf(fp,"%s ",head->phone);
            fprintf(fp,"%s ",head->email);
            fprintf(fp,"%s ",head->check_in);
            fprintf(fp,"%s \n",head->check_out);

            printf("\tEdit successful");
            //i++;
            //  getchar();
            //// getchar();
        }
        else
        {
            fprintf(fp,"%s ",p->name);
            fprintf(fp,"%s ",p->address);
            fprintf(fp,"%s ",p->phone);
            fprintf(fp,"%s ",p->email);
            fprintf(fp,"%s ",p->check_in);
            fprintf(fp,"%s \n",p->check_out);

        }
        p=p->next;
    }

    fclose(fp);
    // if(i==0)
    //{
    //     printf("\n\tNot found");
    //getchar();
    //getchar();
    // }//
}
void student_del()
{
    input();
    p=head;

    char s_n[100];
    int i=0;
    printf("\nEnter search By Name: ");
    scanf("%s",s_n);
    FILE *fp;
    fp=fopen("UserInfo.txt","w+");
    while(p!=NULL)
    {

        if(strcmp(s_n, p->name) == 0)
        {
            printf("\nDelete successful");
            i++;
            getchar();
            getchar();
        }
        else
        {
            // fprintf(fp,"%d ",p->id);

            fprintf(fp,"%s ",p->name);

            fprintf(fp,"%s ",p->phone);

        }
        p=p->next;
    }
    fclose(fp);

    if(i==0)
    {
        printf("\nNot found");
        getchar();
        getchar();
    }
    input();

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
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t\tAdmin Panel\n\n");

    system("COLOR 60");
    char username[30];
    int pass;
    printf("\t\t\t\tEnter your username: ");
    scanf("%s",username);

    printf("\t\t\t\tEnter your password: ");
    scanf("%d",&pass);

    system("cls");
    if (strcmp(username, "admin") == 0 && pass == 12345)
    {
        printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

        printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\tAdmin Panel\n\n");
        printf("\t\t\t\t1.Add User Information\n");
        printf("\t\t\t\t2.View All User\n");
        printf("\t\t\t\t3.search User\n");
        printf("\t\t\t\t4.Edit\n");
        printf("\t\t\t\t5.Delete\n");
        printf("\t\t\t\t6.Main Menu\n");
        printf("\t\t\t\t7.Exit\n");
        char another, choice;

        printf("\t\t\t\tYour Choice: ");
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                signup();

                printf("Added Successfully\n");
                another = getche();
            }
            break;
        case '2':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                all_user();
                another = getche();
            }
            break;


        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                search();
                another = getche();
            }
            break;

        case '4':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                student_edit();
                another = getche();
            }
            break;

        case '5':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                student_del();
                another = getche();
            }
            break;

        case '6':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                system("cls");
                main();
                another = getche();
            }
            break;
        case '7':

            exit(0);
        }
    }
    else

        system("cls");
    printf("Password or username is wrong.\n");
    main();

}
void signup()
{
    // printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");

    // printf("\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
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
    system("COLOR 60");
    printf("\n\n\t\t\t\tWelcome To Mahir's Travel Agency\n");
    printf("\t\t\t\t\t1.Admin\n");
    printf("\t\t\t\t\t2.Log In\n");
    printf("\t\t\t\t\t3.Sign Up\n");
    printf("\t\t\t\t\t4.Exit\n");
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
            admin();
            another = getche();
        }
        break;
    case '2':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            login();
            another = getche();
        }
        break;
    case '3':
        system("cls");
        another = 'y';
        while(another == 'y')
        {
            reg();
            another = getche();
        }
        break;
    case '4':
        break;
        while(another == 'y')
        {

            exit(0);/// exit from the program

        }


    }
}
