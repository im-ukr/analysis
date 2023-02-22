#include<stdio.h>
#include<conio.h>
#include<string.h>
int output();
int details();
int age1,age2;
double con_num1,con_num2;
char name1[100],name2[100],sym[50],adp[100],adg[100],bg1[10],bg2[10],genp[11],geng[11],rel[50],doa[20];
int main()
{
printf("**   **   **   **  **   **   **   **\n");
printf("            WELCOME TO ARC          \n");
printf("**   **   **   **  **   **   **   **\n");
details();
}

int details()
{
printf( "PATIENT Details \n");
printf("Enter Name of the patient:\n"); 
scanf("%s", &name1);
printf("Enter age: \n ");
scanf("%d", &age1);
printf("Enter gender \n" );
scanf("%s", &genp);
printf("Enter blood group of the patient \n");
scanf("%s", &bg1);
printf("Enter date of admission \n");
scanf("%s", &doa);
printf("Enter symptoms \n");
scanf("%s", &sym);
printf( "Enter contact number of patient \n");
scanf("%ld", &con_num1);
printf("Enter address of patient \n");
scanf("%s", &adp);
printf("\nGUARDIAN DETAILS \n");
printf("Enter name of guardian \n");
scanf("%s", &name2);
printf("Enter age of guardian \n");
scanf("%d", &age2 );
printf("Enter gender of guradian\n");
scanf( "%s", &geng );
printf("Enter blood group of guardian\n");
scanf("%s", &bg2 );
printf ("Enter contact number of guardian\n");
scanf( "%lld", &con_num2);
printf("Enter address of guardian \n");
scanf("%s", &adg);
printf("Enter relation with patient\n");
scanf( "%s", &rel);

output();
return 0;
}

int output()
{
printf("\n         WELCOME TO ARC    ");
printf("\n**  **   **   **   **   **");
printf("\n        PATIENT DETAILS   ");
printf("\n**  **   **   **   **   **");
printf("\nName of patient   : %s",name1);
printf("\nAge               : %d",age1);
printf("\nGender            : %s",genp);
printf("\nBlood Group       : %s",bg1);
printf("\nDate of Admission : %s",doa);
printf("\nSymptoms          : %s",sym);
printf("\nContact number    : %ld",con_num1);
printf("\nAddress           : %s",adp);
printf("\n**  **   **   **   **   **");
printf("\n        GUARDIAN DETAILS   ");
printf("\n**  **   **   **   **   **");
printf("\nName of guardian  : %s",name2);
printf("\nAge               : %d",age2);
printf("\nGender            : %s",geng);
printf("\nBlood Group       : %s",bg2);
printf("\nRelation          : %s",rel);
printf("\nContact number    : %ld",con_num2);
printf("\nAddress        : %s",adg);
printf("\nChoose the options below:");
printf(" \n1.Continue");
printf(" \n2.Exit");
int ch;
printf("\nEnter your choice: \n");
scanf("%d",&ch);

switch(ch)
{
	case 1 : main();
	 break;
	case 2 : printf("\nTHANK YOU for USING OUR SERVICE!");
	 break; 
	default:
	printf("\nInvalid choice. Try again.");
}

}