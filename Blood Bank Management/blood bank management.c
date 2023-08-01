#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  FILE *fp,*ft;
  char another,choice;
  struct donor
  {
  char name[40];
  int age;
  char bg[5];
  char phone[20];
  char id[20];
  };
  struct donor d;
  char donorname[40];
  char bloodgroup;
  long int recsize;
  fp=fopen("DONOR.docs","rb+");
  if(fp==NULL)
  {
   fp=fopen("DONOR.docs","wb+");
   if(fp==NULL)
   {
    puts("can not open file");
    exit(1);
   }
  }
  recsize=sizeof(d);
  printf("                                                 *************************************\n\n  ");
  printf("                                                   Blood Bank Management System\n\n ");
  printf("                                                *************************************\n\n\n ");
  while(1)
  {
  printf("\n\n 1. Add Records");
  printf("\n\n 2. List Records");
  printf("\n\n 3. Modify Records");
  printf("\n\n 4. Search by Blood Group");
  printf("\n\n 5. Delete Records");
  printf("\n\n\n\n\n\n\t\t\t\t\t\t\tYour Choice");

  fflush(stdin);
  choice=getche();
  switch(choice)
  {
    case '1':

       fseek(fp,0,SEEK_END);
       another='Y';
           while(another=='Y')
           {
             printf("\n\n\n\n\n\n\t\t\t\tEnter name,age,blood group,phone and id\n\n\n\n\n");
             scanf("\n\t\t%s%d%s%s%s",&d.name,&d.age,&d.bg,&d.phone,&d.id);
             fwrite(&d,recsize,1,fp);
             printf("Do you want to add another record? (Y/N)");
             fflush(stdin);
             another=getche();
           }

       break;

  case '2':
    rewind(fp);
    while(fread(&d,recsize,1,fp)==1)
        printf("\n%s\n%d\n%s\n%s\n%s\n\n",d.name,d.age,d.bg,d.phone,d.id);
    break;

  case '3':
    another='Y';
    while(another=='Y')
    {
        printf("\n\n\n\t\t\tEnter name of the donor to modify\n\n\n");
        scanf("%s",donorname);

        rewind(fp);
        while(fread(&d,recsize,1,fp)==1)
        {
           if(strcmp(d.name,donorname)==0)
           {
              printf("\n\nEnter new records\n\n");
              scanf("%s%d%s%s",&d.name,&d.age,&d.bg,d.phone);
              fseek(fp,-recsize,SEEK_CUR);
              fwrite(&d,recsize,1,fp);
              break;
           }
        }
        printf("\nModify another record (Y/N)");
        fflush(stdin);
        another=getche();
     }

    break;

  case '4':
    another='Y';
    while(another='Y')
    {
        printf("\n\n\nEnter blood group to search");
        scanf("%s",bloodgroup);

        rewind(fp);
        while(fread(&d,recsize,1,fp)==1);
        {
            if(strcmp(d.bg,bloodgroup)==0)
            {
                printf("\n\n\t\t %s\n\n%d\n\n%s\n\n%s",d.name,d.age,d.phone,d.id);
                break;

            }
        }
        printf("\n\n DO you want to search another Record?(Y/N)");
        fflush(stdin);
        another=getche();
    }

  case '5':
    another='Y';
    while (another=='Y')
    {
        printf(" Enter name of the donor to delete ");
        scanf("%s",donorname);

        ft=fopen("TEMP.docs","wb");
        rewind(fp);
        while(fread(&d,recsize,1,fp)==1)
        {
            if(strcmp(d.name,donorname)!=0)
                fwrite(&d,recsize,1,ft);
        }
    }
    fclose(fp);
    fclose(ft);
    remove("DONOR.docs");
    rename("TEMP.DAT","DONOR.docs");

    fp=fopen("DONOR.docs","rb+");

    printf("\n\n\t\t\t\t\t\t\t\t\tDo you want to delete another record?(Y/N)");
    fflush(stdin);
    another=getche();
    }
      break;


    }
  }

