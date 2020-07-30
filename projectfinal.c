#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[30];
	char f_name[30];	long int roll_no;
	char reg_no[20];
	char id[25];
	int m_no;
	char dob[10];
	
}s;
void main()
{
 	void input(void);
 //	void search(void);
 //void modify(void); 
 	void display(void);
 	void menu(void);
 	system("color 1f");
 	int ch;
  	 while(1)
   	{
     		system("cls");
     		menu();
     	//	system("color 6f");
     		scanf("%d",&ch);
     		switch(ch)
     		{
    		 	case 1:
        				input();
        				
        				getch();
     	 			break;
    			case 2:
          				display();
          				
          				getch();
          				break;
     			case 3:
     				//search();
     			//	system("color 2f");
          				getch();
          				break;
     			case 4:
          			//	modify();
          				getch();
          				break;
     			case 5://system("color 3f");
          				exit(0);
     			default :printf("\n Invalid choice......");
          				break;
     		}
   	}
	getch();
} 

/*MENU FUNCTION*/


void menu(){
	
	printf("\n		MENU \n");
   	printf("              ********\n");
 	printf("\n\n        1. Input Student Details");
 	printf("\n        2. Display Student Details");
 	printf("\n        3. Search Student ");
 	printf("\n        4. Modify Student Details");
 	printf("\n        5. Exit");
 	printf("\n\n\n       Enter your choice :  ");
}

/*INPUT FUNCTION */
void input(void)
{
	
   	int ch;
   	void input_submenu(void);
   	void sem1(void);
  	void sem2(void);
  	void sem3(void);
 	void sem4(void);
 	void sem5(void);
 	void sem6(void);
   	while(1)
   	{
      		system("cls");
      		//system("color 9f");
   		input_submenu();
   		scanf("%d",&ch);
   		switch(ch)
   		{
	case 1: sem1();
	getch();
	break;
	case 2: sem2();
	getch();
	break;
	case 3: sem3();
	getch();
	break;
	case 4: sem4();
	getch();
	break;
	case 5: sem5();
	getch();
	break;
	case 6: sem6();
	getch();
	break;
	case 7:return; break;
	
    	}
	}
}
/*INPUT_SUBMEMU FUNCTION */
void input_submenu()
{
   	printf("\n\t \t INPUT MENU \n");
	printf("  \t   \t************\n");
 	printf("\n\n\t   1.   TO INPUT SEM 1 DETAILS ");
 	printf("\n  \t   2.   TO INPUT SEM 2 DETAILS ");
 	printf("\n  \t   3.   TO INPUT SEM 3 DETAILS");
 	printf("\n  \t   4.   TO INPUT SEM 4 DETAILS ");
 	printf("\n  \t   5.   TO INPUT SEM 5 DETAILS");
 	printf("\n  \t   6.   TO INPUT SEM 6 DETAILS");
 	printf("\n  \t   7.   TO EXIT");
 	printf("\n\n\t       Enter your choice :  ");
}
void sem1()
{
		FILE *fp;
 	int i;
 	char ch2;
 	fp=fopen("stusem1.txt","a+");
 	if(fp== NULL)
  		printf("\n Unable to open a file");
 	else
 	{
   		do
      		{
  			printf("\n Enter student name = ");
  			fflush(stdin);
  			gets(s.name);
  			printf("\n Enter father's name = ");
  			fflush(stdin);
  			gets(s.f_name);
  			printf("\n Scholar no = ");
  			scanf("%d",&s.roll_no);
  			printf(" Registration no. = ");
  			fflush(stdin);
  			scanf("%[^\n]s",&s.reg_no);
  			printf("Mobile no. = ");
  			scanf("%d",&s.m_no);
  			printf("Email ID. = ");
  			fflush(stdin);
  			gets(s.id);

			printf("Date of Birth = ");
			fflush(stdin);
			scanf("%s",&s.dob);  			
        		 
        
   			fwrite(&s,sizeof(s),1,fp);
   			printf("\n Do you want to input more student's details(y/n) : ");
         			fflush(stdin);
         			scanf("%c",&ch2);
   		}while(ch2=='y'||ch2=='Y');
   		fclose(fp);
 	}
}
 void sem2()
{
		FILE *fp;
 	int i;
 	char ch2;
 	fp=fopen("stusem2.txt","a+");
 	if(fp== NULL)
  		printf("\n Unable to open a file");
 	else
 	{
   		do
      		{
  			printf("\n Enter student name = ");
  			fflush(stdin);
  			gets(s.name);
  			printf("\n Enter father's name = ");
  			fflush(stdin);
  			gets(s.f_name);
  			printf("\n Scholar no = ");
  			scanf("%d",&s.roll_no);
  			printf(" Registration no. = ");
  			fflush(stdin);
  			scanf("%[^\n]s",&s.reg_no);
  			printf("Mobile no. = ");
  			scanf("%d",&s.m_no);
  			printf("Email ID. = ");
  			fflush(stdin);
  			gets(s.id);

			printf("Date of Birth = ");
			scanf("%d",&s.dob);  			
        		 
        
   			fwrite(&s,sizeof(s),1,fp);
   			printf("\n Do you want to input more student's details(y/n) : ");
         			fflush(stdin);
         			scanf("%c",&ch2);
   		}while(ch2=='y'||ch2=='Y');
   		fclose(fp);
 	}
}
void sem3()
{
		FILE *fp;
 	int i;
 	char ch2;
 	fp=fopen("stusem3.txt","a+");
 	if(fp== NULL)
  		printf("\n Unable to open a file");
 	else
 	{
   		do
      		{
  			printf("\n Enter student name = ");
  			fflush(stdin);
  			gets(s.name);
  			printf("\n Enter father's name = ");
  			fflush(stdin);
  			gets(s.f_name);
  			printf("\n Scholar no = ");
  			scanf("%d",&s.roll_no);
  			printf(" Registration no. = ");
  			fflush(stdin);
  			scanf("%[^\n]s",&s.reg_no);
  			printf("Mobile no. = ");
  			scanf("%d",&s.m_no);
  			printf("Email ID. = ");
  			fflush(stdin);
  			gets(s.id);

			printf("Date of Birth = ");
			scanf("%d",&s.dob);  			
        		 
        
   			fwrite(&s,sizeof(s),1,fp);
   			printf("\n Do you want to input more student's details(y/n) : ");
         			fflush(stdin);
         			scanf("%c",&ch2);
   		}while(ch2=='y'||ch2=='Y');
   		fclose(fp);
 	}
}
void sem4()
{
		FILE *fp;
 	int i;
 	char ch2;
 	fp=fopen("stusem4.txt","a+");
 	if(fp== NULL)
  		printf("\n Unable to open a file");
 	else
 	{
   		do
      		{
  			printf("\n Enter student name = ");
  			fflush(stdin);
  			gets(s.name);
  			printf("\n Enter father's name = ");
  			fflush(stdin);
  			gets(s.f_name);
  			printf("\n Scholar no = ");
  			scanf("%d",&s.roll_no);
  			printf(" Registration no. = ");
  			fflush(stdin);
  			scanf("%[^\n]s",&s.reg_no);
  			printf("Mobile no. = ");
  			scanf("%d",&s.m_no);
  			printf("Email ID. = ");
  			fflush(stdin);
  			gets(s.id);

			printf("Date of Birth = ");
			scanf("%d",&s.dob);  			
        		 
        
   			fwrite(&s,sizeof(s),1,fp);
   			printf("\n Do you want to input more student's details(y/n) : ");
         			fflush(stdin);
         			scanf("%c",&ch2);
   		}while(ch2=='y'||ch2=='Y');
   		fclose(fp);
 	}
}

void sem5()
{
		FILE *fp;
 	int i;
 	char ch2;
 	fp=fopen("stusem5.txt","a+");
 	if(fp== NULL)
  		printf("\n Unable to open a file");
 	else
 	{
   		do
      		{
  			printf("\n Enter student name = ");
  			fflush(stdin);
  			gets(s.name);
  			printf("\n Enter father's name = ");
  			fflush(stdin);
  			gets(s.f_name);
  			printf("\n Scholar no = ");
  			scanf("%d",&s.roll_no);
  			printf(" Registration no. = ");
  			fflush(stdin);
  			scanf("%[^\n]s",&s.reg_no);
  			printf("Mobile no. = ");
  			scanf("%d",&s.m_no);
  			printf("Email ID. = ");
  			fflush(stdin);
  			gets(s.id);

			printf("Date of Birth = ");
			scanf("%d",&s.dob);  			
        		 
        
   			fwrite(&s,sizeof(s),1,fp);
   			printf("\n Do you want to input more student's details(y/n) : ");
         			fflush(stdin);
         			scanf("%c",&ch2);
   		}while(ch2=='y'||ch2=='Y');
   		fclose(fp);
 	}
}

void sem6()
{
		FILE *fp;
 	int i;
 	char ch2;
 	fp=fopen("stusem6.txt","a+");
 	if(fp== NULL)
  		printf("\n Unable to open a file");
 	else
 	{
   		do
      		{
  			printf("\n Enter student name = ");
  			fflush(stdin);
  			gets(s.name);
  			printf("\n Enter father's name = ");
  			fflush(stdin);
  			gets(s.f_name);
  			printf("\n Scholar no = ");
  			scanf("%d",&s.roll_no);
  			printf(" Registration no. = ");
  			fflush(stdin);
  			scanf("%[^\n]s",&s.reg_no);
  			printf("Mobile no. = ");
  			scanf("%d",&s.m_no);
  			printf("Email ID. = ");
  			fflush(stdin);
  			gets(s.id);

			printf("Date of Birth = ");
			scanf("%d",&s.dob);  			
        		 
        
   			fwrite(&s,sizeof(s),1,fp);
   			printf("\n Do you want to input more student's details(y/n) : ");
         			fflush(stdin);
         			scanf("%c",&ch2);
   		}while(ch2=='y'||ch2=='Y');
   		fclose(fp);
 	}
}

/*DISPLAY FUNCTION*/
void display()
{

   	int ch;
   	void submenu(void);
   	//system("color 8f");
 	void d_sem1(void);
 	void d_sem2(void);
 	void d_sem3(void);
 	void d_sem4(void);
 	void d_sem5(void);
 	void d_sem6(void);
   	while(1)
   	{
      		system("cls");
   		submenu();
   		scanf("%d",&ch);
   		switch(ch)
   		{
   			case 1:
   			d_sem1();
     	 		getch();
      			break;
        			case 2: 
        			d_sem2();
      			getch();
      			break;
     	 		case 3:
     	 		d_sem3();
      			getch();
      			break;
      			case 4: d_sem4();
      			getch();
      			break;
      			case 5: d_sem5();
      			getch();
      			break;
      			case 6:
      				d_sem6();
      				getch();
      				break;
      		case 7: return;
      	        		break;
   		}
   	}
}

/* DISPLAY SUBMENU FUNCTION*/
void submenu()
{
   	printf("\n	\tDISPLAY MENU \n");
	printf("    \t       **************\n");
	printf("\n\n\t  1. to sem 1 details");
	printf("\n\t  2. to sem 2 details");
	printf("\n\t  3. to sem 3 details");
	printf("\n\t  4. to sem 4 details");
	printf("\n\t  5. to sem 5 details");
	printf("\n\t  6. to sem 6 details");
    printf("\n \t  7. To exit ");
 	printf("\n\n\n\t       Enter your choice :  ");
}
/*D_SEM1 FUNCTION*/
void d_sem1()
{			
   	FILE *fp;
   	fp=fopen("stusem1.txt","r");
   	if(fp==NULL)
  	 {
   		printf("\n File couldn't be open ");
		exit(2);
   	}
	printf("\n\n |----------------------------------------------------------------------------------------------------------------------|");
   	printf("\n | NAME OF STUDENT     |REGISTRATION NUMBER |   SCHOLAR NO. | FATHER NAME  |  MOBILE NO  |      EMAIL ID      |   DOB  | ");
	while(fread(&s,sizeof(s),1,fp)>0)
  	 {
        		printf("\n |------------------------------------------------------------------------------------------------------------|");
        	 	printf("\n | %-20s| %-17s  | %-13d | %-12s | %-10d | %-15s| %-10s |",s.name,s.reg_no,s.roll_no,s.f_name,s.m_no,s.id,s.dob);
   	}
   	printf("\n |------------------------------------------------------------------------------------------------------------------------|");
   	fclose(fp);
}

/*D_SEM2 FUNCTION*/
void d_sem2()
{			
   	FILE *fp;
   	fp=fopen("stusem2.txt","r");
   	if(fp==NULL)
  	 {
   		printf("\n File couldn't be open ");
		exit(2);
   	}
	printf("\n\n |-------------------------------------------------------------------------------------------------------------------|");
   	printf("\n | NAME OF STUDENT     |REGISTRATION NUMBER |   SCHOLAR NO. | FATHER NAME  |  MOBILE NO  |      EMAIL ID      |   DOB  | ");
	while(fread(&s,sizeof(s),1,fp)>0)
  	 {
        		printf("\n |----------------------------------------------------------------------------------------------|");
        	 	printf("\n | %-20s| %-15s| %-7d | %-15s | %-10d | %-15s| %-5d |",s.name,s.reg_no,s.roll_no,s.f_name,s.m_no,s.id,s.dob);
   	}
   	printf("\n |----------------------------------------------------------------------------------------------------------|");
   	fclose(fp);
}
/*D_SEM3 FUNCTION*/
void d_sem3()
{			
   	FILE *fp;
   	fp=fopen("stusem3.txt","r");
   	if(fp==NULL)
  	 {
   		printf("\n File couldn't be open ");
		exit(2);
   	}
	printf("\n\n |-------------------------------------------------------------------------------------------------------------------|");
   	printf("\n | NAME OF STUDENT     |REGISTRATION NUMBER |   SCHOLAR NO. | FATHER NAME  |  MOBILE NO  |      EMAIL ID      |   DOB  | ");
	while(fread(&s,sizeof(s),1,fp)>0)
  	 {
        		printf("\n |----------------------------------------------------------------------------------------------|");
        	 	printf("\n | %-20s| %-15s| %-7d | %-15s | %-10d | %-15s| %-5d |",s.name,s.reg_no,s.roll_no,s.f_name,s.m_no,s.id,s.dob);
   	}
   	printf("\n |----------------------------------------------------------------------------------------------------------|");
   	fclose(fp);
}

/*D_SEM1=4 FUNCTION*/
void d_sem4()
{			
   	FILE *fp;
   	fp=fopen("stusem4.txt","r");
   	if(fp==NULL)
  	 {
   		printf("\n File couldn't be open ");
		exit(2);
   	}
	printf("\n\n |-------------------------------------------------------------------------------------------------------------------|");
   	printf("\n | NAME OF STUDENT     |REGISTRATION NUMBER |   SCHOLAR NO. | FATHER NAME  |  MOBILE NO  |      EMAIL ID      |   DOB  | ");
	while(fread(&s,sizeof(s),1,fp)>0)
  	 {
        		printf("\n |----------------------------------------------------------------------------------------------|");
        	 	printf("\n | %-20s| %-15s| %-7d | %-15s | %-10d | %-15s| %-5d |",s.name,s.reg_no,s.roll_no,s.f_name,s.m_no,s.id,s.dob);
   	}
   	printf("\n |----------------------------------------------------------------------------------------------------------|");
   	fclose(fp);
}

/*D_SEM5 FUNCTION*/
void d_sem5()
{			
   	FILE *fp;
   	fp=fopen("stusem5.txt","r");
   	if(fp==NULL)
  	 {
   		printf("\n File couldn't be open ");
		exit(2);
   	}
	printf("\n\n |-------------------------------------------------------------------------------------------------------------------|");
   	printf("\n | NAME OF STUDENT     |REGISTRATION NUMBER |   SCHOLAR NO. | FATHER NAME  |  MOBILE NO  |      EMAIL ID      |   DOB  | ");
	while(fread(&s,sizeof(s),1,fp)>0)
  	 {
        		printf("\n |----------------------------------------------------------------------------------------------|");
        	 	printf("\n | %-20s| %-15s| %-7d | %-15s | %-10d | %-15s| %-5d |",s.name,s.reg_no,s.roll_no,s.f_name,s.m_no,s.id,s.dob);
   	}
   	printf("\n |----------------------------------------------------------------------------------------------------------|");
   	fclose(fp);
}

/*D_SEM6 FUNCTION*/
void d_sem6()
{			
   	FILE *fp;
   	fp=fopen("stusem6.txt","r");
   	if(fp==NULL)
  	 {
   		printf("\n File couldn't be open ");
		exit(2);
   	}
	printf("\n\n |-------------------------------------------------------------------------------------------------------------------|");
   	printf("\n | NAME OF STUDENT     |REGISTRATION NUMBER |   SCHOLAR NO. | FATHER NAME  |  MOBILE NO  |      EMAIL ID      |   DOB  | ");
	while(fread(&s,sizeof(s),1,fp)>0)
  	 {
        		printf("\n |----------------------------------------------------------------------------------------------|");
        	 	printf("\n | %-20s| %-15s| %-7d | %-15s | %-10d | %-15s| %-5d |",s.name,s.reg_no,s.roll_no,s.f_name,s.m_no,s.id,s.dob);
   	}
   	printf("\n |----------------------------------------------------------------------------------------------------------|");
   	fclose(fp);
}
