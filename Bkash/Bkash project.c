#include<stdio.h>
#include<conio.h>
char username[10];
char password[10];

int a,b,c,d,e,f,g,h,i=100000,j,k,l,m;
int number,pin[4];

int ask_and_check()
{
    A:
        printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Login");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");

        printf("Enter the username :\n");
        scanf("%s",&username);
    B:
        printf("\n");
        printf("Enter the password :\n");
        scanf("%s",&password);

        if(strcmp(username,"ridoy")==0)
        {
        printf("\n");
        printf("your username correct\n");
        }
        else
        {
        printf("your username wrong and try again\n");
    goto A;
        }

        if(strcmp(password,"ridoy6971")==0)
        {
        printf("your password correct\n");
        }

        else
        {
        printf("your password incorrect try again\n");
    goto B;
        }
        printf("\n");
        for(k=0;k<=34;k++)
        {
        printf("==");
        }
        printf("\n\n");
}
int send_money()
{
        printf("\n");
        for(k=0;k<=15;k++)
        {
        printf("==");
        }
        printf("Send money");
        for(k=0;k<=15;k++)
        {
        printf("==");
        }
        system("cls");
        printf("\n\n");
        printf("Enter the receiver number :\n");
        scanf("%d",&number);
        printf("\n");
        printf("Enter the amount :\n");
        scanf("%d",&b);
        printf("\n");
        printf("Enter the reference number :\n");
        scanf("%d",&c);
        printf("\n");
        C:
        printf("Enter the PIN :\n");
        scanf("%s",pin);
        system("cls");
        printf("\n");

        if(strcmp(pin,"6971")==0)
            {

        for(k=0;k<=36;k++)
            {
            printf("==");
            }
        printf("\n\n");
        for(k=0;k<=16;k++)
            {
            printf("==");
            }
        printf("S.M.S");
        for(k=0;k<=16;k++)
            {
            printf("==");
            }
        printf("\n\n");
        m=i-b;
        printf("Your send money request of Tk %d for %d was successful.new balance %d.TrxID B345h%d\n",b,number,m,b);
        getch();
        printf("\n");
        for(k=0;k<=36;k++)
        {
        printf("==");
        }
        }
        else
            {
            printf("your password incorrect and try again\n");
            printf("\n\n");
            goto C;
            }
}
int byairtime()
{
     D:
        printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Select Operator");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n");
    printf("\n1. Robi\n2. GrameenPhone\n3. Banglalink\n4. Airtel\n5. Teletalk\n");
    for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
    printf("Enter the operator number :\n");
    scanf("%d",&d);
    system("cls");

    switch(d)
    {
    case 1:
        printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Select Operator");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n");
        printf("\n 1. Prepaid\n 2. Postpaid\n");
        printf("\n");
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
        E:
        printf("Enter the operator number :\n");
        scanf("%d",&e);
        system("cls");
       if(e==1|| e==2){
             printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Robi");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        printf("Enter the Robi Number :\n");
        scanf("%d",&number);
        printf("\n");
        printf("Enter the Airtime Money :\n");
        scanf("%d",&f);
        printf("\n");
        F:
        printf("Enter the PIN :\n");
        scanf("%s",pin);
        system("cls");
        for(k=0;k<=34;k++)
        {
            printf("==");
        }
        printf("\n\n");
        if(strcmp(pin,"6971")==0){
                for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("S.M.S");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        m=i-f;
        printf("Your Bkash Airtime request of Tk %d for %d was successful. new Balance TK %d TrxID 4h57Dvo%d\n",f,number,m,f);
        getch();
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        }

        else
        {
        printf("your PIN incorrect and try again\n");
        goto F;
        }
       }
       else{
            system("cls");
       printf("\n");
        printf("invalid number and try again\n");
            goto E;
        }
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
      break;

    case 2:
        printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Select Operator");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n");
        printf("\n 1. Prepaid\n 2. Postpaid\n");
        printf("\n");
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
        H:
        printf("Enter the operator number :\n");
        scanf("%d",&e);
        system("cls");
       if(e==1|| e==2){
             printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("GrameenPhone");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        printf("Enter the GrameenPhone Number :\n");
        scanf("%d",&number);
        printf("\n");
        printf("Enter the Airtime Money :\n");
        scanf("%d",&f);
        printf("\n");
        G :
        printf("Enter the PIN :\n");
        scanf("%s",pin);
        printf("\n");
        for(k=0;k<=34;k++)
        {
            printf("==");
        }
        system("cls");
        printf("\n\n");
        if(strcmp(pin,"6971")==0){
                for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("S.M.S");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        m=i-f;
        printf("Your Bkash Airtime request of Tk %d for %d was successful.new Balance TK %d TrxID 4h57Dvo%d\n",f,number,m,f);
        getch();
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        }

        else
        {
        printf("your PIN incorrect and try again\n");
        goto G;
        }
       }
       else{
            system("cls");
        printf("invalid number and try again\n");
            goto H;
        }
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
      break;

    case 3:
        printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Select Operator");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n");
        printf("\n 1. Prepaid\n 2. Postpaid\n");
        printf("\n");
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
        I:
        printf("Enter the operator number :\n");
        scanf("%d",&e);
        system("cls");
       if(e==1|| e==2){
             printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Banglalink");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        printf("Enter the Banglalink Number :\n");
        scanf("%d",&number);
        printf("\n");
        printf("Enter the Airtime Money :\n");
        scanf("%d",&f);
        printf("\n");
        J:
        printf("Enter the PIN :\n");
        scanf("%s",pin);
        printf("\n");
        for(k=0;k<=34;k++)
        {
            printf("==");
        }
        system("cls");
        printf("\n\n");
        if(strcmp(pin,"6971")==0){
                for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("S.M.S");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        m=i-f;
        printf("Your Bkash Airtime request of Tk %d for %d was successful.new Balance TK %d TrxID 4h57Dvo%d\n",f,number,m,f);
        getch();
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        }

        else
        {
        printf("your PIN incorrect and try again\n");
        goto J;
        }
       }
       else{
            system("cls");
        printf("invalid number and try again\n");
            goto I;
        }
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
      break;


    case 4:
        printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Select Operator");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n");
        printf("\n 1. Prepaid\n 2. Postpaid\n");
        printf("\n");
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
        K:
        printf("Enter the operator number :\n");
        scanf("%d",&e);
        system("cls");
       if(e==1|| e==2){
             printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Airtel");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        printf("Enter the Airtel Number :\n");
        scanf("%d",&number);
        printf("\n");
        printf("Enter the Airtime Money :\n");
        scanf("%d",&f);
        printf("\n");
        L:
        printf("Enter the PIN :\n");
        scanf("%s",pin);
        printf("\n");
        for(k=0;k<=34;k++)
        {
            printf("==");
        }
        system("cls");
        printf("\n\n");
        if(strcmp(pin,"6971")==0){
                for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("S.M.S");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        m=i-f;
        printf("Your Bkash Airtime request of Tk %d for %d was successful.new Balance TK %d TrxID 4h57Dvo%d\n",f,number,m,f);
        getch();
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        }

        else
        {
        printf("your PIN incorrect and try again\n");
        goto L;
        }
       }
       else{
            system("cls");
        printf("invalid number and try again\n");
            goto K;
        }
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
      break;

    case 5:
        printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Select Operator");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n");
        printf("\n 1. Prepaid\n 2. Postpaid\n");
        printf("\n");
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
        M:
        printf("Enter the operator number :\n");
        scanf("%d",&e);
        system("cls");
       if(e==1|| e==2){
             printf("\n");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("Teletalk");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        printf("Enter the teletalk Number :\n");
        scanf("%d",&number);
        printf("\n");
        printf("Enter the Airtime Money :\n");
        scanf("%d",f);
        printf("\n");
        N:
        printf("Enter the PIN :\n");
        scanf("%s",pin);
        printf("\n");
        for(k=0;k<=34;k++)
        {
            printf("==");
        }
        system("cls");
        printf("\n\n");
        if(strcmp(pin,"6971")==0){
                for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("S.M.S");
        for(k=0;k<=15;k++)
        {
            printf("==");
        }
        printf("\n\n");
        m=i-f;
        printf("Your Bkash Airtime request of Tk %d for %d was successful.new Balance TK %d TrxID 4h57Dvo%d\n",f,number,m,f);
        getch();
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        }

        else
        {
        printf("your PIN incorrect and try again\n");
        goto N;
        }
       }
       else{
            system("cls");
        printf("invalid number and try again\n");
            goto M;
        }
        for(k=0;k<=38;k++)
        {
            printf("==");
        }
        printf("\n\n");
      break;

    default :
        {
            printf("invalid number and try again\n");
            goto D;
        }
    }
}
int cashout()
{
 system("COLOR F9");

printf("\n");
        for(k=0;k<=15;k++){
		printf("==");
	}
	printf("Cash out");
	for(k=0;k<=13;k++){
		printf("==");
	}
    printf("\n");
printf("\n");
    printf("\t1. From the Agent\n\t2. From the ATM\n\t0. Main Menu\n");
    printf("\n");
    for(k=0;k<=33;k++){
		printf("==");
	}

	printf("\n");
	printf("Enter the number\n");
    scanf("%d",&g);
system("cls");
printf("\n");
    switch(g)

    {
        case 1:
            for(k=0;k<=15;k++){
		printf("==");
	}
	printf("Agent");
	for(k=0;k<=15;k++){
		printf("==");
	}
     printf("\n\n");
            printf("Enter the Agent Number :\n");
            scanf("%d",&number);
            printf("\n");
            printf("Enter the Amount :\n");
            scanf("%d",&h);
            printf("\n");
            A1:
            printf("Enter the PIN :\n");
            scanf("%s",pin);
            if(strcmp(pin,"6971")==0){
            m=i-h;
            printf("\n");
            system("cls");
            printf("\n");
            for(k=0;k<=15;k++){
            printf("==");
        }

printf("S.M.S");
	 for(k=0;k<=15;k++){
		printf("==");
	}
	printf("\n\n");
	m=i-h;
            printf("Your Cash out request of Tk %d for %d was successful.Now your new balance : %d tk.TrxID : 4d5aH123%d\n",h,number,m,h);
            for(k=0;k<=33;k++){
		printf("==");
	}

            }

            else
            {
                system("cls");
            system("COLOR FC");
                 for(k=0;k<=15;k++){
		printf("==");
	}
	printf("Error");
	 for(k=0;k<=15;k++){
		printf("==");
		}
         printf("\n\n\n");
            printf("your password is incorrect. please try again\n");
            goto A1;
            printf("\n");
             for(k=0;k<=33;k++){
		printf("==");

	}
getch();
system("cls");
              system("COLOR F9");
	printf("\n\n");
            }
            break;
        case 2:
            printf("\n");
            for(k=0;k<=15;k++){
		printf("==");
	}
	printf("ATM");
	for(k=0;k<=15;k++){
		printf("==");
	} printf("\n");
            printf("Enter the ATM Number :\n");
            scanf("%d",&number);
            printf("\n");
            printf("Enter the Amount :\n");
            scanf("%d",&h);
            printf("\n");
            B1:
            printf("Enter the PIN :\n");
            scanf("%s",pin);
            if(strcmp(pin,"6971")==0){
                    m=i-h;
                for(k=0;k<=33;k++){
		printf("==");
	}
	system("cls");
	printf("\n");

 for(k=0;k<=15;k++){
		printf("==");
	}
	printf("S.M.S");
	 for(k=0;k<=15;k++){
		printf("==");
	}
	printf("\n\n");

        m=i-h;
            printf("Your Cash out request of Tk %d for %d was successful.Now your new balance : %d tk.Trx :4H1235%d\n",h,number,m,h);
            for(k=0;k<=33;k++){
		printf("==");
	}

             }
            else
            {

		        system("cls");
                system("COLOR FC");
                  for(k=0;k<=15;k++){
		printf("==");
	}
	printf("error");
	 for(k=0;k<=15;k++){
		printf("==");
		}
         printf("\n\n\n");
            printf("your password is incorrect please try again\n");
            goto B1;
             printf("\n");
             for(k=0;k<=33;k++){
		printf("==");
	}
	getch();
system("cls");
  system("COLOR F9");
	printf("\n\n");
            }
            break;

        case 0:
            default:
            {
                 system("cls");
                 system("COLOR FC");
                 printf("\n\n");
                printf("Invalid Number please try again\n");
                getch();
system("cls");
  system("COLOR F9");
	printf("\n\n");
            }

    }
    getch();
}

int mybkash()
{
    	printf("\n");
	for(k=0;k<=15;k++){
		printf("==");
	}
	printf("My Bkash");
	for(k=0;k<=15;k++){
		printf("==");
	}
	printf("\n");
	C1:
    printf("\n1. Check balance\n2. Change Mobile Menu PIN\n0. Main Menu\n");
    for(k=0;k<=35;k++){
		printf("==");
	}
    printf("\n");
    printf("Enter the number\n");
    scanf("%d",&l);
    system("cls");
    switch(l){

    case 1:
    {
        d:
for(k=0;k<=15;k++){
		printf("==");
	}
	printf("Check Balance");
	for(k=0;k<=13;k++){
		printf("==");
	}
	printf("\n");
    printf("Enter the PIN :\n");
    scanf("%s",pin);
    system("cls");
    for(k=0;k<=15;k++){
		printf("==");
	}
	printf("S.M.S");
	for(k=0;k<=18;k++){
		printf("==");
	}
	printf("\n");
    if(strcmp(pin,"6971")==0){

    printf("Your Current bkash balance is Tk : %d\n",i);
    for(k=0;k<=35;k++){
		printf("==");
	}
    }

    else
    {system("cls");
        printf("\n");
    printf("your PIN incorrect and try again\n");
    goto C1;
    }
    break;
    }
    case 2:
    {
        e:
  for(k=0;k<=15;k++){
		printf("==");
	}
	printf("Change PIN");
	for(k=0;k<=14;k++){
		printf("==");
	}
	system("cls");
	printf("\n");
    printf("Enter the old PIN :\n");
    scanf("%s",pin);

    if(strcmp(pin,"6971")==0){
    printf("Enter the New PIN :\n");
    scanf("%s",pin);
    system("cls");
    for(k=0;k<=15;k++){
		printf("==");
	}
	printf("S.M.S");
	for(k=0;k<=18;k++){
		printf("==");
	}
	printf("\n");
    printf("Your PIN has been changed.After 1 month you can change your Pin again\n");
    for(k=0;k<=35;k++){
		printf("==");
	}}

    else
    {
        system("cls");
    printf("your old PIN incorrect and try again\n");
    goto C1;
    }
    break;
    }
    }
}
int main()
{
    system("COLOR F9");
    ask_and_check();
     system("cls");
        for(k=0;k<=15;k++)
        {
        printf("==");
        }
        printf("Bkash");
        for(k=0;k<=15;k++)
        {
        printf("==");
        }
        printf("\n\t1. Send Money\n\t2. Buy Airtime\n\t3. Cash out\n\t4. My bkash \n\t5. Helpline\n");
        for(k=0;k<=34;k++)
        {
        printf("==");
        }
        printf("\n\n");
        D1:
        printf("Enter the Number :\n");
        scanf("%d",&a);
        switch (a)
{
    case 1:
        system("cls");
        send_money();
        break;
    case 2:
        system("cls");
        byairtime();
        break;
    case 3:
        system("cls");
        cashout();
        break;
    case 4:
        system("cls");
        mybkash();
        break;
    case 5:
        system("cls");
        printf("\n\n");
        printf("1. call 16247 or visit our offical page www.bkash.com\n0. back to main function ");
        break;
    default:
        system("cls");
        printf("You press unknown Number\n");
        goto D1;

}

    return 0;
}


