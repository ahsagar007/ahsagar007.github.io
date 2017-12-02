#include<stdio.h>
#include<stdlib.h>


//void Display_accountBalance();
void deposit();
void withdraw();
void details();
void payBills();
void accountExit();
void interest();


int ATMAccountHoldersInfo()
{
    printf("\n\t\t\t===========================--DIU ATM SYSTEM--==========================\n\n");
    printf("\n\t\t\t\t\tAccount Name: Subroto Nag Pinku\n");
    printf("\n\n\t\t\t\t\tAddress :Daffodil International University, Mirpur Road\n");
    printf("\n\n\t\t\t\t\tBranch: Dhanmondi\n");
    printf("\n\n\t\t\t\t\tAccount number(A/C) :123456789\n");
    printf("\n\t====================================================================================================\n\n");
    printf("\t\t\t\t\tAccount balance :$300000.000000\n");
    return ATMAccountHoldersInfo;
}



void deposit()
{
    float amount, accountBalance;
    system("cls");
    ATMAccountHoldersInfo();
    accountBalance = 300000.00;
    printf("\t\t\t\t\tPresent available balance :$%f\n",accountBalance);
    printf("\t\t\t\t\tEnter the Amount to be Deposited: $");
    scanf("%f",&amount);


    accountBalance=accountBalance+amount ;
    printf("\n\t\t\t\t\tYour new available Balanced Amount is $ %f\n",accountBalance);
    printf("\n\t\t\t\t\tThank You!\n\n");
    printf("Press any key to Return to the Main Menu\n\n");
    system("PAUSE");
}

void withdraw()
{

    float amount, accountBalance;
    system("cls");
    ATMAccountHoldersInfo();
    accountBalance = 300000.00;
    printf("\t\t\t\t\tPresent available balance :$%f\n",accountBalance);
    printf("\t\t\t\t\tEnter the Amount to be Withdraw $");
    scanf("%f",&amount);

    if(amount>accountBalance)
    {
        system("cls");

        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
        printf("\n\t\t\t\t\tInsufficient Available Balance in your account.\n\n");
        printf("\t\t\t\t\tSorry !!\n");
        system("PAUSE");
    }
    else
    {
        double b;
        accountBalance=accountBalance-amount;
        printf("============================+++++++++++++++++++++++============================\n\n");
        printf("\n\t\t\t\t\tYour new available Balanced Amount is $%f",accountBalance);
        printf("\nPress any key to Return to the Main Menu\n\n");
        system("PAUSE");
    }


}

void payBills()
{
    float amount, accountBalance;
    system("cls");
    ATMAccountHoldersInfo();
    accountBalance = 300000.00;
    printf("====================++THANK YOU++============================\n\n");
    printf("\t\t\t\t\tPay Electric Company electricity bill of $2000.00 now?\n\n");
    printf("\t\tPress 1 for Yes OR Press 0 for No\n\n");

    int r;

    scanf("%d",&r);
    if(r=1)
    {
        accountBalance=accountBalance-20000;
        system("cls");
        printf("\n===========================ATM BILLS PAYMENT SYSTEM==========================\n");
        printf("\n\t\t\t\t\tYour electricity bill of $2000.00 has been paid.\n\n");
        printf("\t\t\t\t\tYour account new Available Balanced Amount is $%f",accountBalance) ;
        printf("\n============================+++++++++++++++++++++++===========================\n\n");
        printf("Press any key to Return to the Main Menu\n\n");
    }
    if(r=0)
    {
        printf("\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n");
        printf("\n\n\t\t\t\t\tExiting Bill Payment System. Thank you!.\n\n");
        printf("====================++THANK YOU++============================\n\n");
    }
    system("PAUSE");

}



void interest()
{
    printf("\n==========================ATM ACCOUNT INTEREST PAYMENT==========================\n\n");
    printf("\t\t\t\t\tThe Interest is calculate over the last SIX months on the average account balance\n");
    printf("\n\t\t\t\t\tInterest Rate payable is 10% per annum.");
    printf("\t\t\t\t\tView the accumulated interest? Press 1 for Yes OR 0 for NO.\n\n");

    printf("==========================ATM ACCOUNT INTEREST PAYMENT==========================\n\n");

    float amount, accountBalance,accountInterest;
    system("cls");
    ATMAccountHoldersInfo();
    accountBalance = 300000.00;
    printf("\t\t\t\t\tPresent available balance :$%f",accountBalance);
    accountInterest=accountBalance+(accountBalance*1.050);
    printf("\t\t\t\t\tPresent available balance + interest for 6 months :$%f\n\n",accountInterest);
    printf("Press any key to Return to the Main Menu\n\n");
    system("PAUSE");
}



void details()
{
    system("cls");
    ATMAccountHoldersInfo();
    printf("\n\n\t\t\t=========================--THANK YOU--================================\n\n\n\n");
    printf("Press any key to Return to the Main Menu.....\n\n");
    system("PAUSE");
}

//==================================================================================================

void accountExit()
{
    system("cls");
    printf("\n============================ATM ACCOUNT EXIT=============================\n\n");
    printf("\n\n\t\tEXITING...........EXITING...............EXITING\n\n");
    printf("====================++THANK YOU++============================\n\n");
    printf("============================+++++++++++++++++++++++============================\n\n");
    system("PAUSE");
    exit(1);
}




main()
{
    int e;
    system ("Color 1e");
    printf("\t\t\t\tToday is: ");
    //Show date and time function
    time_t now;
    time(&now);
    printf("%s\n", ctime(&now));

    printf("\t\t\t\t\t---WELCOME TO DIU ATM---\n\n\n\n\n");
    printf("\t\t\tPress 1 and press Enter to Access your account via pin number\n\n\n");
    printf("\t\t\t\t\t\t or \n\n\n");
    printf("\t\t\t\tPress 0 and press Enter to get Help.\n\n\n\n\n");

    int access;
    printf("\t\t\t\t\t.......YOUR CHOICE:");
    scanf("%d",&access);
    switch(access)
    {
    case 1:///pin
        system("cls");
        int i, pin;
        printf("\t\t========================Entrance of the ATM==================================\n\n\n\n\n\n");
        printf("\t\t\t\t\t====ENTER PIN====\n\n\t\t\t\t\t\t");
        scanf("%d",&pin);

        system("cls");

        if(pin==1)

        {
            system("cls");

            do
            {
                system("cls");
                system ("Color 1a");
                printf("\n\t\t======================ATM Main Menu Screen======================\n\n\n\n");
                printf("\t\t\t\tEnter (1) for Cash Balance Inquiry\n");
                printf("\t\t\t\tEnter (2) for Cash Deposit\n");
                printf("\t\t\t\tEnter (3) for Cash Withdraw\n");
                printf("\t\t\t\tEnter (4) for Pay Bills\n");
                printf("\t\t\t\tEnter (5) to Account Interest Payment\n");
                printf("\t\t\t\tEnter (0) to Exit ATM\n\n\n\n\n\n\n");
                printf("\t\tPLEASE ENTER YOUR SELECTION:");
                scanf("%d",&e);
                switch(e)
                {
                case 1:
                    details();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    payBills();
                    break;
                case 5:
                    interest();
                    break;
                case 0:
                    accountExit();
                    break;
                default:
                    printf("Please Enter the Correct Number Choice");
                }
            }
            while(e!=0);

            break;
        }

        else
        {
            system("cls");
            system("Color 1c");
            printf("\n===========================THANKS FOR YOU===========================\n\n");
            printf("\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n");
            printf("===========================THANKS===========================\n\n");

            system("PAUSE");
            exit (1);
        }
    //==================================================================================================


    case 0:///pin
        system("cls");
        printf("\n==========================ATM ACCOUNT STATUS================================\n\n");
        printf("\tYou must have the correct pin number to access this acount. See your\n\n");
        printf("\t  bank representative for assistance during bank opening hours\n\n");
        printf("\t\tThanks for, your choice today!!\n\n");
        printf("==========================ATM ACCOUNT STATUS================================\n\n");
        system ("PAUSE");
        exit(1);
        break;
    }

    system("PAUSE");
    return 0;

};
