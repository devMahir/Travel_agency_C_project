
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include <time.h>
struct node
{
    char admin , login;
    char name[100];
    char phone[15];
    char address[50];
    char email[50];
    char check_in[50];
    char check_out[50];
    char place[100];
    char str[10];
    struct node *next;
    struct node *prev;
}*head,*student,*temp,*tail,*p,*q,*s;
void main()
{
    system("cls");
    system("COLOR 3F");
    printf("\n\n\t\t\t\tWelcome To Our Travel Agency\n");
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
        //break;
        while(another == 'y')
        {

            exit(0);/// exit from the program

        }
}
}
