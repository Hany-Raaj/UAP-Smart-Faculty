#include<stdio.h>
#include<string.h>

void Faculty();
void FullTimeFaculty();
void FullTimeFacultyOnStudyLeave();
void OnlyAssistantProfessor();
void OnlyAssociateProfessor();
void OnlyLecturer();
void VisitingFaculty();


void StudentInformation();
void AllStudentInformation();
void MaleAndFemaleStudentInformation();
void SearchSameBloodGroupStudent();
void SearchSameDistrictStudent();
void SearchCGPAbyUsingStudentID();
void SearchSameCGPAlist();

void StudentRecord();
void AddStudentRecord();
void ViewStudentRecord();
void EditStudentRecord();
void DeleteStudentRecord();


void MarksRecord();
void AddMarksRecord();
void ViewMarksRecord();
void EditMarksRecord();
void DeleteMarksRecord();

struct STUDENT
{
    char NAME[100];
    char ID[100];
    char EMAIL[100];
    char CONTACT[100];
    char DISTRICT[100];
    char AREA[100];
    char BLOODGROUP[100];
    char GENDER[100];
    int AGE;
    int LEVEL;
    int TERM;
    float CGPA;
};

struct record
{
    char name[30];
    char note[500];
};

struct StudentMarksRecord
{
    char id[30];
    float classtest1;
    float classtest2;
    float classtest3;
    float mid;
    float final;
} ;
int main()
{
    int menu;
    system("cls");

    printf("\n\n\n\n\t\t\t\t\t\tUNIVERSITY OF ASIA PACIFIC\n");
    printf("\t\t\t\t\t\t--------------------------\n");
    printf("\t\t\t\t\t\t S M A R T  F A C U L T Y\n");
    printf("\n\n\n\t\tMAIN MENU\n");
    printf("\t\t-----------\n\n");
    printf("\t\t1.FACULTY\n");
    printf("\t\t2.STUDENT INFORMATION\n");
    printf("\t\t3.STUDENT RECORD\n");
    printf("\t\t4.STUDENT MARKS RECORD\n");
    printf("\t\t5.EXIT\n");
    printf("\n\n\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 1:
        system("cls");
        Faculty();
        break;

    case 2:
        system("cls");
        StudentInformation();
        break;
    case 3:
        system("cls");
        StudentRecord();
        break;
    case 4:
        system("cls");
        MarksRecord();
        break;
    case 5:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }


    return 0;
}


void Faculty()
{
    system("cls");
    int FacultyOption;
    printf("\n\n\n\t\tFACULTY\n");
    printf("\t\t----------\n");
    printf("\n\t\t1.FULL TIME FACULTY\n");
    printf("\t\t2.FULL TIME FACULTY ON STUDY LEAVE\n");
    printf("\t\t3.ONLY ASSISTANT PROFESSOR\n");
    printf("\t\t4.ONLY ASSOCIATE PROFESSOR\n");
    printf("\t\t5.ONLY LETURER\n");
    printf("\t\t6.VISITING FACULTY\n");
    printf("\t\t7.MAIN MENU\n");
    printf("\t\t8.EXIT\n");

    printf("\n\n\t\tENTER YOUR CHOICE: ");
    scanf("%d",&FacultyOption);

    switch(FacultyOption)
    {
    case 1:
        system("cls");
        FullTimeFaculty();
        break;

    case 2:
        system("cls");
        FullTimeFacultyOnStudyLeave();
        break;

    case 3:
        system("cls");
        OnlyAssistantProfessor();
        break;

    case 4:
        system("cls");
        OnlyAssociateProfessor();
        break;

    case 5:
        system("cls");
        OnlyLecturer();
        break;

    case 6:
        system("cls");
        VisitingFaculty();
        break;


    case 7:
        system("cls");
        main();
        break;
    case 8:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");

    }
}


void FullTimeFaculty()
{
    system("cls");
    int ch,menu;
    FILE *file;
    file=fopen("FullTimeFacultyMember.txt","r");
    while((ch=fgetc(file))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(file);

    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        Faculty();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}

void FullTimeFacultyOnStudyLeave()
{
    int ch,menu;
    FILE *file;
    file=fopen("FullTimeFacultyMemberOnStudyLeave.txt","r");
    while((ch=fgetc(file))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        Faculty();
        break;

    case 9:

        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}


void OnlyAssistantProfessor()
{
    int ch,menu;
    FILE *file;
    file=fopen("OnlyAssistantProfessor.txt","r");
    while((ch=fgetc(file))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        Faculty();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}


void OnlyAssociateProfessor()
{
    int ch,menu;
    FILE *file;
    file=fopen("OnlyAssociateProfessor.txt","r");
    while((ch=fgetc(file))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        Faculty();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}


void OnlyLecturer()
{
    int ch,menu;
    FILE *file;
    file=fopen("OnlyLecturer.txt","r");
    while((ch=fgetc(file))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        Faculty();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}


void VisitingFaculty()
{
    int ch,menu;
    FILE *file;
    file=fopen("VisitingFacultyMembers.txt","r");
    while((ch=fgetc(file))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        Faculty();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}




void StudentInformation()
{
    int menu;
    printf("\n\n\t\tSTUDENT INFORMATION\n");
    printf("\t\t----------------------\n");
    printf("\n\n\t\t1.ALL STUDENT INFORMATION\n");
    printf("\t\t2.MALE & FEMALE STUDENT INFORMATION\n");
    printf("\t\t3.SEARCH SAME BLOOD GROUP STUDENT\n");
    printf("\t\t4.SEARCH SAME DISTRICT STUDENT\n");
    printf("\t\t5.SEARCH CGPA BY USING STUDENT ID\n");
    printf("\t\t6.SEARCH SAME CGPA LIST\n");
    printf("\t\t7.MAIN MENU\n");
    printf("\t\t8.EXIT\n\n");

    printf("\n\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 1:
        system("cls");
        AllStudentInformation();
        break;

    case 2:
        system("cls");
        MaleAndFemaleStudentInformation();
        break;

    case 3:
        system("cls");
        SearchSameBloodGroupStudent();
        break;

    case 4:
        system("cls");
        SearchSameDistrictStudent();
        break;

    case 5:
        system("cls");
        SearchCGPAbyUsingStudentID();
        break;

    case 6:
        system("cls");
        SearchSameCGPAlist();
        break;
    case 7:
        system("cls");
        main();
        break;
    case 8:
        break;
    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");


    }
}




void AllStudentInformation()
{
    int menu,i;
    struct STUDENT s[43];
    FILE *file;
    file=fopen("StudentInformation.txt","r");

    for( i=0; i<43; i++)
    {
        fscanf(file,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%d:%d:%f:",s[i].NAME,s[i].ID,s[i].EMAIL,s[i].CONTACT,s[i].AREA,s[i].DISTRICT,s[i].BLOODGROUP,s[i].GENDER,&s[i].AGE,&s[i].LEVEL,&s[i].TERM,&s[i].CGPA);
    }

    for(i=0; i<43; i++)
    {
        printf("\n\n\t\tNAME: %s\n",s[i].NAME);
        printf("\t\tID: %s\n",s[i].ID);
        printf("\t\tEMAIL: %s\n",s[i].EMAIL);
        printf("\t\tCONTACT: %s\n",s[i].CONTACT);
        printf("\t\tDISTRICT: %s\n",s[i].DISTRICT);
        printf("\t\tAREA: %s\n",s[i].AREA);
        printf("\t\tBLOODGROUP: %s\n",s[i].BLOODGROUP);
        printf("\t\tGENDER: %s\n",s[i].GENDER);
        printf("\t\tAGE: %d\n",s[i].AGE);
        printf("\t\tLEVEL: %d\n",s[i].LEVEL);
        printf("\t\tTERM: %d\n",s[i].TERM);
        printf("\t\tCGPA: %.2f\n",s[i].CGPA);
        printf("\t\t--------------------------------\n");
    }

    fclose(file);

    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentInformation();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}

void MaleAndFemaleStudentInformation()
{
    int menu,i,MALECOUNT=0,FEMALECOUNT=0;

    struct STUDENT s[43];
    FILE *file;
    file=fopen("StudentInformation.txt","r");

    for( i=0; i<43; i++)
    {
        fscanf(file,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%d:%d:%f:",s[i].NAME,s[i].ID,s[i].EMAIL,s[i].CONTACT,s[i].DISTRICT,s[i].AREA,s[i].BLOODGROUP,s[i].GENDER,&s[i].AGE,&s[i].LEVEL,&s[i].TERM,&s[i].CGPA);
    }

    char ALPHABET;
    printf("\n\t\tPRESS 'M' FOR MALE\n");
    printf("\t\tPRESS 'F' FOR FEMALE\n");
    printf("\n\t\tENTER YOUR CHOICE: ");
    fflush(stdin);

    scanf("%c",&ALPHABET);
    printf("\n");

    if(ALPHABET=='M' || ALPHABET=='m')
    {
        for(i=0; i<43; i++)
        {
            if(strcmp(s[i].GENDER,"Male")==0)
            {
                MALECOUNT++;
                printf("\t\t#ID: %s - NAME: %s\n",s[i].ID,s[i].NAME);
            }
        }
        printf("\n\n\t\t\t\TOTAL MALE STUDENT: %d",MALECOUNT);
    }

    if(ALPHABET=='F' || ALPHABET=='f')
    {
        for(i=0; i<43; i++)
        {
            if(strcmp(s[i].GENDER,"Female")==0)
            {
                FEMALECOUNT++;
                printf("\t\t#ID: %s - NAME: %s\n",s[i].ID,s[i].NAME);
            }
        }
        printf("\n\n\t\t\tTOTAL FEMALE STUDENT: %d",FEMALECOUNT);
    }

    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentInformation();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}


void SearchSameBloodGroupStudent()
{
    struct STUDENT s[43];
    int menu,i,j=1,BLOODGROUPCOUNT=0;
    char c;
    FILE *file;
    file=fopen("StudentInformation.txt","r");

    for(i=0; i<43; i++)
    {
        fscanf(file,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%d:%d:%f:",s[i].NAME,s[i].ID,s[i].EMAIL,s[i].CONTACT,s[i].DISTRICT,s[i].AREA,s[i].BLOODGROUP,s[i].GENDER,&s[i].AGE,&s[i].LEVEL,&s[i].TERM,&s[i].CGPA);
    }

    char ALPHABET[100];
    do
    {
        printf("\n\n\t\tSEARCH SAME BLOOD GROUP STUDENT: ");
        scanf("%s",&ALPHABET);
        printf("\n\n");

        for(i=0; i<43; i++)
        {
            if(strcmp(s[i].BLOODGROUP,ALPHABET)==0)
            {
                printf("\t\t#ID: %s - NAME: %s\n",s[i].ID,s[i].NAME);
                BLOODGROUPCOUNT++;
            }
        }

        printf("\n\n\t\tDO YOU WANT TO CHAECK AGAIN!(Y/N):");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='n'||c=='N')
        {
            j=0;
        }
    }
    while(j!=0);

    printf("\n\n\t\tLIST OF SAME BLOOD GROUP STUDENT %s: %d\n\n",ALPHABET,BLOODGROUPCOUNT);
    printf("\t\t--------------------------------");
    fclose(file);

    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentInformation();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}

void SearchSameDistrictStudent()
{
    int menu,i,j=1,DISTRICTCOUNT=0;
    struct STUDENT s[43];
    FILE *file;
    file=fopen("StudentInformation.txt","r");
    char c;
    for(i=0; i<43; i++)
    {
        fscanf(file,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%d:%d:%f:",s[i].NAME,s[i].ID,s[i].EMAIL,s[i].CONTACT,s[i].AREA,s[i].DISTRICT,s[i].BLOODGROUP,s[i].GENDER,&s[i].AGE,&s[i].LEVEL,&s[i].TERM,&s[i].CGPA);
    }

    char ALPHABET[100];

    do
    {
        printf("\n\t\tENTER YOUR DISTRICT NAME: ");
        fflush(stdin);
        scanf("%s",&ALPHABET);
        for(i=0; i<43; i++)
        {
            if(strcmp(s[i].DISTRICT,ALPHABET)==0)
            {
                printf("\n\t\t#ID: %s - NAME: %s",s[i].ID,s[i].NAME);
                DISTRICTCOUNT++;
            }
        }

        printf("\n\n\t\tDO YOU WANT TO CHAECK AGAIN!(Y/N):");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='n'||c=='N')
        {
            j=0;
        }
    }
    while(j!=0);

    printf("\n\n\t\tLIST OF %s DISTRICT STUDENT: %d",ALPHABET,DISTRICTCOUNT);
    fclose(file);

    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");
    printf("\t\tENTER YOUR CHOICE: ");

    fflush(stdin);
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentInformation();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}

void SearchCGPAbyUsingStudentID()
{
    int menu,i,j=1,c,CGPACOUNT=0;
    struct STUDENT s[43];
    FILE *file;
    file=fopen("StudentInformation.txt","r");

    for(i=0; i<43; i++)
    {
        fscanf(file,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%d:%d:%f:",s[i].NAME,s[i].ID,s[i].EMAIL,s[i].CONTACT,s[i].DISTRICT,s[i].AREA,s[i].BLOODGROUP,s[i].GENDER,&s[i].AGE,&s[i].LEVEL,&s[i].TERM,&s[i].CGPA);
    }

    char ALPHABET[100];
    do
    {
        printf("\n\t\tENTER STUDENT #ID: ");
        scanf("%s",&ALPHABET);

        for(i=0; i<43; i++)
        {
            if(strcmp(s[i].ID,ALPHABET)==0)
            {
                printf("\n\t\t#ID: %s - NAME: %s - CGPA: %.2f\n",s[i].ID,s[i].NAME,s[i].CGPA);
                CGPACOUNT++;
            }
        }
        printf("\n\n\t\tDO YOU WANT TO CHECK AGAIN!(Y/N)");
        scanf("%c",&c);
        if(c=='y'||c=='Y')
        {
            j=1;
        }
        else
        {
            j=0;
        }


    }
    while(j!=0);


    fclose(file);

    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        main();
        break;

    case 8:
        StudentInformation();
        break;

    case 9:
        break;

    default:
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}


void SearchSameCGPAlist()
{
    int menu,i,j=1,SAMECGPACOUNT=0;
    struct STUDENT s[100];
    FILE *file;
    file=fopen("StudentInformation.txt","r");
    char c;
    for(i=0; i<43; i++)
    {
        fscanf(file,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%d:%d:%f:",s[i].NAME,s[i].ID,s[i].EMAIL,s[i].CONTACT,s[i].DISTRICT,s[i].AREA,s[i].BLOODGROUP,s[i].GENDER,&s[i].AGE,&s[i].LEVEL,&s[i].TERM,&s[i].CGPA);
    }

    float ALPHABET;
    do
    {
        printf("\n\t\tENTER YOU CGPA: ");
        scanf("%f",&ALPHABET);

        for(i=0; i<43; i++)
        {
            if(s[i].CGPA==ALPHABET)
            {
                printf("\n\t\t#ID: %s - NAME: %s - CGPA: %.2f",s[i].ID,s[i].NAME,s[i].CGPA);
                SAMECGPACOUNT++;
            }
        }
        printf("\n\n\t\tDO YOU WANT TO CHAECK AGAIN!(Y/N):");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='n'||c=='N')
        {
            j=0;
        }
    }
    while(j!=0);
    printf("\n\n\t\tLIST OF SAME CGPA STUDENT: %d\n\n",SAMECGPACOUNT);
    fclose(file);
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentInformation();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}

void StudentRecord()
{
    int ch;
    printf("\n\n\n\t\tSTUDENT RECORD\n");
    printf("\t\t-----------------\n");
    printf("\n\n\t\t1.ADD RECORD");
    printf("\n\t\t2.VIEW RECORD");
    printf("\n\t\t3.EDIT RECORD");
    printf("\n\t\t4.DELETE RECORD");
    printf("\n\t\t5.MAIN MENU");
    printf("\n\t\t6.EXIT");
    printf("\n\n\t\tENTER YOUR CHOICE:");


    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        system("cls");
        AddStudentRecord();
        break;

    case 2:
        system("cls");
        ViewStudentRecord();
        break;

    case 3:
        system("cls");
        EditStudentRecord();
        break;

    case 4:
        system("cls");
        DeleteStudentRecord();
        break;

    case 5:
        system("cls");
        main();
        break;

    case 6:

        break;


    default:
        system("cls");
        printf("\n\t\t\tYOU HAVE ENTERED WRONG KEY!");
        break;
    }
    return 0;
}

void AddStudentRecord( )
{
    FILE *fp ;
    char another = 'Y',time[10];
    struct record e ;
    char filename[15];
    int choice;

    printf("\n\n\tENTER DATE OF YOUR RECORD:[dd-mm-yyyy]:");
    fflush(stdin);

    gets(filename);
    fp = fopen (filename, "ab+" ) ;
    if ( fp == NULL )
    {
        fp=fopen(filename,"wb+");
        if(fp==NULL)
        {
            printf("\nSYSTEM ERROR...");
            printf("\nPRESS ANY KEY TO EXIT");
            getch();
            return ;
        }
    }

    while ( another == 'Y'|| another=='y' )
    {
        choice=0;
        if(choice==0)
        {
            printf("\tENTER NAME:");
            fflush(stdin);
            gets(e.name);
            fflush(stdin);
            printf("\tNOTE:");
            gets(e.note);
            fwrite ( &e,sizeof(e),1,fp);
            printf("\n\t\tYOUR RECORD IS ADDED!\n");
        }

        printf ( "\n\t\tADD ANOTHER RECORD(Y/N): " ) ;
        fflush ( stdin ) ;
        another = getchar( ) ;
    }

    int menu;
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");
    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentRecord();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }

    fclose ( fp ) ;
    getch();
}


void ViewStudentRecord( )
{
    FILE *fpte ;
    struct record customer ;
    char choice,name[30],filename[14];
    int ch;
    choice=0;

    if(choice!=0)
    {
        return ;
    }

    do
    {
        printf("\n\tENTER THE DATE OF RECORD TO BE VIEWED:[dd-mm-yyyy]:");
        fflush(stdin);
        gets(filename);
        fpte = fopen ( filename, "rb" ) ;

        if ( fpte == NULL )
        {
            puts ("\n\t\tTHE RECORD DOES NOT EXIST!\n");
            return;
        }

        printf("\n\tHOW WOULD YOU LIKE TO VIEW:\n");
        printf("\n\t1.WHOLE RECORD OF ALL STUDENT.");
        printf("\n\t2.RECORD OF FIX NAME.");
        printf("\n\t\tENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nTHE WHOLE RECORD FOR %s IS:",filename);
            while (fread(&customer,sizeof(customer),1,fpte)==1)
            {
                printf("\n");
                printf("\nNAME: %s",customer.name);
                printf("\nNOTE: %s",customer.note);
                printf("\n");
            }
            break;
        case 2:
            fflush(stdin);
            printf("\nENTER NAME:");
            gets(name);
            while (fread(&customer,sizeof(customer),1,fpte)==1)
                if(strcmp(customer.name,name)==0)
                {
                    printf("\nYOUR RECORD IS:");
                    printf("\nNAME: %s",customer.name);
                    printf("\nNOTE: %s",customer.note);
                }

            break;

        default:
            printf("\nYOU HAVE ENTERED WRONG KEY!\n");
            break;
        }

        printf("\n\n\t\tWOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):");
        fflush(stdin);
        scanf("%c",&choice);
    }

    while(choice=='Y'||choice=='y');
    int menu;
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");
    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentRecord();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
    fclose(fpte);
    return ;
}

void EditStudentRecord()
{
    FILE *fpte ;
    struct record customer ;
    char choice,filename[14],name[30];
    int num,menu,count=0;
    choice=0;
    if(choice!=0)
    {
        return ;
    }

    do

    {
        printf("\n\tENTER THE DATE OF RECORD TO BE EDITED:[dd-mm-yyyy]:");
        fflush(stdin);
        gets(filename);
        printf("\n\tENTER NAME:");
        gets(name);
        fpte=fopen(filename,"rb+");
        if(fpte==NULL)
        {
            printf("\nRECORD DOES NOT EXISTS:");
            return;
        }
        while(fread(&customer,sizeof(customer),1,fpte)==1)
        {
            if(strcmp(customer.name,name)==0)
            {
                printf("\nYOUR OLD RECORD WAS AS:");
                printf("\nNAME: %s",customer.name);
                printf("\nNOTE: %s",customer.note);
                printf("\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..");
                printf("\n1.NAME");
                printf("\n2.NOTE");
                printf("\n3.WHOLE RECORD.");
                printf("\n4.GO BACK TO MAIN MENU.");

                do
                {
                    printf("\n\nENTER YOUR CHOICE:");
                    fflush(stdin);
                    scanf("%d",&num);
                    fflush(stdin);
                    switch(num)

                    {
                    case 1:
                        printf("\nENTER THE NEW DATA:");
                        printf("\nNAME:");
                        gets(customer.name);
                        break;

                    case 2:
                        printf("ENTER THE NEW DATA:");
                        printf("\nNOTE:");
                        gets(customer.note);
                        break;

                    case 3:
                        printf("\nNEW NAME:");
                        gets(customer.name);
                        printf("\nNOTE:");
                        gets(customer.note);
                        break;

                    case 7:
                        printf("\nPRESS ANY KEY TO GO BACK...\n");
                        getch();
                        return ;
                        break;

                    default:
                        printf("\nYOU TYPED SOMETHING ELSE...TRY AGAIN\n");
                        break;
                    }
                }

                while(num<1||num>8);
                fseek(fpte,-sizeof(customer),SEEK_CUR);
                fwrite(&customer,sizeof(customer),1,fpte);
                fseek(fpte,-sizeof(customer),SEEK_CUR);
                fread(&customer,sizeof(customer),1,fpte);
                choice=5;
                break;
            }
        }
        if(choice==5)
        {
            printf("\n\t\tEDITING COMPLETED...\n");
            printf("--------------------\n");
            printf("THE NEW RECORD IS:\n");
            printf("--------------------\n");
            printf("\nNAME: %s",customer.name);
            printf("\nNOTE: %s",customer.note);
            fclose(fpte);
            printf("\n\n\tWOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)");

            scanf("%c",&choice);
            count++;
        }
        else
        {
            printf("\nTHE RECORD DOES NOT EXIST::\n");
            printf("\nWOULD YOU LIKE TO TRY AGAIN...(Y/N)");
            scanf("%c",&choice);
        }
    }
    while(choice=='Y'||choice=='y');
    fclose ( fpte ) ;
    if(count==1)
    {
        printf("\n%d FILE IS EDITED...\n",count);
        printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
        printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
        printf("\t\tPRESS '9' FOR EXIT\n\n");

        printf("\t\tENTER YOUR CHOICE: ");
        scanf("%d",&menu);
        switch(menu)
        {
        case 7:
            system("cls");
            main();
            break;

        case 8:
            system("cls");
            StudentRecord();
            break;

        case 9:
            break;

        default:
            system("cls");
            printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
        }
    }
    else if(count>1)

    {
        printf("\n%d FILES ARE EDITED..\n",count);
        printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
        printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
        printf("\t\tPRESS '9' FOR EXIT\n\n");

        printf("\t\tENTER YOUR CHOICE: ");
        scanf("%d",&menu);

        switch(menu)
        {
        case 7:
            system("cls");
            main();
            break;

        case 8:
            system("cls");
            StudentRecord();
            break;

        case 9:
            break;

        default:
            system("cls");
            printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
        }
    }
    else
    {


        printf("\nNO FILES EDITED...\n");
        printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
        printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
        printf("\t\tPRESS '9' FOR EXIT\n\n");

        printf("\t\tENTER YOUR CHOICE: ");
        scanf("%d",&menu);
        switch(menu)
        {
        case 7:
            system("cls");
            main();
            break;

        case 8:
            system("cls");
            StudentRecord();
            break;

        case 9:
            break;

        default:
            system("cls");
            printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
        }
    }
}


void DeleteStudentRecord( )
{
    FILE *fp,*fptr;

    struct record file ;
    char filename[15],another = 'Y',name[30];;
    int menu,choice,check;

    check =0;
    if(check==1)
    {
        return ;
    }

    while ( another == 'Y' )
    {
        printf("\n\n\tHOW WOULD YOU LIKE TO DELETE.");
        printf("\n\n\t#DELETE WHOLE RECORD\t\t\t[1]");
        printf("\n\t#DELETE A PARTICULAR RECORD BY TIME\t[2]");
        do
        {
            printf("\n\t\tENTER YOU CHOICE:");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("\n\tENTER THE DATE OF RECORD TO BE DELETED:[dd-mm-yyyy]:");
                fflush(stdin);
                gets(filename);
                fp = fopen (filename, "wb" ) ;
                if ( fp == NULL )
                {
                    printf("\nTHE FILE DOES NOT EXISTS");
                    printf("\nPRESS ANY KEY TO GO BACK.");
                    getch();
                    return ;
                }

                fclose(fp);
                remove(filename);
                printf("\nDELETED SUCCESFULLY...");
                printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
                printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
                printf("\t\tPRESS '9' FOR EXIT\n\n");
                printf("\t\tENTER YOUR CHOICE: ");
                scanf("%d",&menu);

                switch(menu)
                {
                case 7:
                    system("cls");
                    main();
                    break;

                case 8:
                    system("cls");
                    StudentRecord();
                    break;

                case 9:
                    break;

                default:
                    system("cls");
                    printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
                }

                break;


            case 2:
                printf("\n\tENTER THE DATE OF RECORD:[dd-mm-yyyy]:");
                fflush(stdin);
                gets(filename);
                fp=fopen(filename,"rb");
                if(fp==NULL)
                {
                    printf("\nTHE FILE DOES NOT EXISTS");
                    printf("\nPRESS ANY KEY TO GO BACK.");
                    getch();
                    return ;
                }
                fptr=fopen("temp","wb");
                if(fptr==NULL)
                {
                    printf("\nSYSTEM ERROR");
                    printf("\nPRESS ANY KEY TO GO BACK");
                    getch();
                    return ;
                }

                printf("\n\tENTER THE NAME OF RECORD TO BE DELETED:");
                fflush(stdin);
                gets(name);
                while(fread(&file,sizeof(file),1,fp)==1)
                {
                    if(strcmp(file.name,name)!=0)
                        fwrite(&file,sizeof(file),1,fptr);
                }

                fclose(fp);
                fclose(fptr);
                remove(filename);
                rename("temp",filename);
                printf("\nDELETED SUCCESFULLY...");

                printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
                printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
                printf("\t\tPRESS '9' FOR EXIT\n\n");
                printf("\t\tENTER YOUR CHOICE: ");
                scanf("%d",&menu);

                switch(menu)
                {
                case 7:
                    system("cls");
                    main();
                    break;

                case 8:
                    system("cls");
                    StudentRecord();
                    break;

                case 9:
                    break;

                default:
                    system("cls");
                    printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
                }
                break;


            default:
                printf("\n\tYOU ENTERED WRONG CHOICE");
                break;
            }
        }
        while(choice<1||choice>2);
        printf("\n\tDO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):");
        fflush(stdin);
        scanf("%c",&another);
    }
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        StudentRecord();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}

void MarksRecord()
{
    system("cls");
    int ch;
    printf("\n\n\t\tRECORD STUDENT MARKS\n");
    printf("\t\t------------------------\n");
    printf("\n\n\t\t1.ADD MARKS");
    printf("\n\t\t2.VIEW MARKS");
    printf("\n\t\t3.EDIT MARKS");
    printf("\n\t\t4.DELETE MARKS");
    printf("\n\t\t5.MAIN MENU");
    printf("\n\t\t6.EXIT");

    printf("\n\n\t\tENTER YOUR CHOICE:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        system("cls");
        AddMarksRecord();
        break;

    case 2:
        system("cls");
        ViewMarksRecord();
        break;

    case 3:
        system("cls");
        EditMarksRecord();
        break;

    case 4:
        system("cls");
        DeleteMarksRecord();
        break;

    case 5:
        system("cls");
        main();
        break;
    case 6:
        break;

    default:
        system("cls");
        printf("\n\t\tYOU HAVE ENTERED WRONG KEY!\n");
    }
}

void AddMarksRecord( )

{
    FILE *fp ;
    char another = 'Y',id[30];
    struct StudentMarksRecord e ;
    char filename[15];
    int choice;
    printf("\n\n\tENTER YOUR FILE NAME:");
    fflush(stdin);

    gets(filename);
    fp = fopen (filename, "ab+" ) ;
    if ( fp == NULL )
    {
        fp=fopen(filename,"wb+");
        if(fp==NULL)
        {
            printf("\nSYSTEM ERROR...");
            printf("\nPRESS ANY KEY TO EXIT");
            getch();
            return ;
        }
    }

    while ( another == 'Y'|| another=='y' )
    {
        choice=0;
        if(choice==0)
        {
            printf("\tENTER ID:");
            fflush(stdin);

            gets(e.id);
            fflush(stdin);
            printf("\tCLASS TEST 1 MARKS:");
            fflush(stdin);
            scanf("%f",&e.classtest1);
            printf("\tCLASS TEST 2 MARKS:");
            fflush(stdin);
            scanf("%f",&e.classtest2);
            printf("\tCLASS TEST 3 MARKS:");
            fflush(stdin);
            scanf("%f",&e.classtest3);
            printf("\tMID MARKS:");
            fflush(stdin);
            scanf("%f",&e.mid);
            printf("\tFINAL MARKS:");
            fflush(stdin);
            scanf("%f",&e.final);


            fwrite ( &e, sizeof ( e ), 1, fp ) ;
            printf("\nYOUR RECORD IS ADDED...\n");
        }
        printf ( "\n\n\t\tADD ANOTHER RECORD...(Y/N) " ) ;
        fflush ( stdin ) ;
        another = getchar( ) ;
    }


    fclose ( fp ) ;
    int menu;
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");

    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        MarksRecord();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}
void ViewMarksRecord( )
{
    FILE *fpte ;
    struct StudentMarksRecord customer ;
    char choice,id[30],filename[14];
    int ch;
    choice=0;
    if(choice!=0)
    {
        return ;
    }

    do
    {
        printf("\n\tENTER YOUR SAVED FILENAME:");
        fflush(stdin);
        gets(filename);
        fpte = fopen ( filename, "rb" ) ;
        if ( fpte == NULL )
        {
            puts ( "\nTHE RECORD DOES NOT EXIST...\n" ) ;
            printf("PRESS ANY KEY TO EXIT...");
            getch();
            return ;
        }
        printf("\n\tHOW WOULD YOU LIKE TO VIEW:\n");
        printf("\n\t1.WHOLE RECORD OF ALL STUDENT.");
        printf("\n\t2.RECORD OF FIX ID.");
        printf("\n\t\tENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nTHE WHOLE RECORD OF %s IS:",filename);
            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
            {
                printf("\n");
                printf("\nNAME: %s",customer.id);
                printf("\nCLASS TEST 1 MARKS: %.2f",customer.classtest1);
                printf("\nCLASS TEST 2 MARKS: %.2f",customer.classtest2);
                printf("\nCLASS TEST 3 MARKS: %.2f",customer.classtest3);
                printf("\nMID MARKS: %.2f",customer.mid);
                printf("\nFINAL MARKS: %.2f",customer.final);
                printf("\n");
            }

            break;


        case 2:

            fflush(stdin);
            printf("\nENTER ID:");
            gets(id);
            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
            {
                if(strcmp(customer.id,id)==0)
                {
                    printf("\n");
                    printf("\nNAME: %s",customer.id);
                    printf("\nCLASS TEST 1 MARKS: %.2f",customer.classtest1);
                    printf("\nCLASS TEST 2 MARKS: %.2f",customer.classtest2);
                    printf("\nCLASS TEST 3 MARKS: %.2f",customer.classtest3);
                    printf("\nMID MARKS: %.2f",customer.mid);
                    printf("\nFINAL MARKS: %.2f",customer.final);
                    printf("\n");
                }
            }
            break;

        default:
            printf("\nYOU TYPED SOMETHING ELSE...\n");
            break;
        }
        printf("\n\n\t\tWOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):");
        fflush(stdin);
        scanf("%c",&choice);
    }
    while(choice=='Y'||choice=='y');
    fclose ( fpte ) ;
    return ;
}

void EditMarksRecord()
{
    FILE *fpte ;
    struct StudentMarksRecord customer ;
    char choice,filename[14],id[30];
    int num,count=0;
    choice=0;
    if(choice!=0)
    {
        return ;
    }
    do
    {
        printf("\n\tENTER YOUR FILENAME:");
        fflush(stdin);
        gets(filename);
        printf("\n\tENTER ID:");
        gets(id);
        fpte = fopen ( filename, "rb+" ) ;
        if ( fpte == NULL )
        {
            printf( "\nRECORD DOES NOT EXISTS:" ) ;
            printf("\nPRESS ANY KEY TO GO BACK");
            getch();
            return;
        }
        while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
        {
            if(strcmp(customer.id,id)==0)
            {
                printf("\n");
                printf("\nNAME: %s",customer.id);
                printf("\nCLASS TEST 1 MARKS: %.2f",customer.classtest1);
                printf("\nCLASS TEST 2 MARKS: %.2f",customer.classtest2);
                printf("\nCLASS TEST 3 MARKS: %.2f",customer.classtest3);
                printf("\nMID MARKS: %.2f",customer.mid);
                printf("\nFINAL MARKS: %.2f",customer.final);
                printf("\n");
                printf("\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..");

                printf("\n1.ID");
                printf("\n2.CLASS TEST 1 MARKS");
                printf("\n3.CLASS TEST 2 MARKS");
                printf("\n4.CLASS TEST 3 MARKS");
                printf("\n5.MID MARKS");
                printf("\n6.FINAL MARKS");
                printf("\n7.WHOLE RECORD");
                printf("\n8.GO BACK TO MAIN MENU.");

                do
                {
                    printf("\n\tENTER YOUR CHOICE:");
                    fflush(stdin);
                    scanf("%d",&num);
                    fflush(stdin);
                    switch(num)
                    {
                    case 1:
                        printf("\nENTER THE NEW DATA:");
                        printf("\nID:");
                        gets(customer.id);
                        break;

                    case 2:
                        printf("ENTER THE NEW DATA:");
                        printf("\nCLASS TEST 1 MARKS:");
                        scanf("%f",&customer.classtest1);
                        break;

                    case 3:
                        printf("ENTER THE NEW DATA:");
                        printf("\nCLASS TEST 2 MARKS:");
                        scanf("%f",&customer.classtest2);
                        break;

                    case 4:
                        printf("ENTER THE NEW DATA:");
                        printf("\nCLASS TEST 3 MARKS:");
                        scanf("%f",&customer.classtest3);
                        break;

                    case 5:
                        printf("ENTER THE NEW DATA:");
                        printf("\nMID MARKS:");
                        scanf("%f",&customer.mid);
                        break;

                    case 6:
                        printf("ENTER THE NEW DATA:");
                        printf("\nFINAL MARKS:");
                        scanf("%f",&customer.final);
                        break;

                    case 7:
                        printf("\tENTER ID:");
                        fflush(stdin);
                        gets(customer.id);
                        fflush(stdin);
                        printf("\tCLASS TEST 1 MARKS:");
                        fflush(stdin);
                        scanf("%f",&customer.classtest1);
                        printf("\tCLASS TEST 2 MARKS:");
                        fflush(stdin);
                        scanf("%f",&customer.classtest2);
                        printf("\tCLASS TEST 3 MARKS:");
                        fflush(stdin);
                        scanf("%f",&customer.classtest3);
                        printf("\tMID MARKS:");
                        fflush(stdin);
                        scanf("%f",&customer.mid);
                        printf("\tFINAL MARKS:");
                        fflush(stdin);
                        scanf("%f",&customer.final);
                        break;


                    case 8:
                        printf("\nPRESS ANY KEY TO GO BACK...\n");
                        return ;
                        break;

                    default:
                        printf("\n\n\t\tYOU TYPED SOMETHING ELSE...TRY AGAIN\n");
                        break;
                    }
                }
                while(num<1||num>8);
                fseek(fpte,-sizeof(customer),SEEK_CUR);
                fwrite(&customer,sizeof(customer),1,fpte);
                fseek(fpte,-sizeof(customer),SEEK_CUR);
                fread(&customer,sizeof(customer),1,fpte);
                choice=5;
                break;
            }
        }
        if(choice==5)
        {
            printf("\n\t\tEDITING COMPLETED...\n");
            printf("--------------------\n");
            printf("THE NEW RECORD IS:\n");
            printf("--------------------\n");
            printf("\n");
            printf("\nNAME: %s",customer.id);
            printf("\nCLASS TEST 1 MARKS: %.2f",customer.classtest1);
            printf("\nCLASS TEST 2 MARKS: %.2f",customer.classtest2);
            printf("\nCLASS TEST 3 MARKS: %.2f",customer.classtest3);
            printf("\nMID MARKS: %.2f",customer.mid);
            printf("\nFINAL MARKS: %.2f",customer.final);
            printf("\n");

            fclose(fpte);
            printf("\n\n\t\tWOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)");
            scanf("%c",&choice);
            count++;
        }

        else
        {
            printf("\nTHE RECORD DOES NOT EXIST::\n");
            printf("\n\n\t\tWOULD YOU LIKE TO TRY AGAIN...(Y/N)");
            scanf("%c",&choice);
        }

    }
    while(choice=='Y'||choice=='y');
    fclose ( fpte ) ;
    int menu;
    if(count==1)
    {
        printf("\n%d FILE IS EDITED...\n",count);
        printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
        printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
        printf("\t\tPRESS '9' FOR EXIT\n\n");

        printf("\t\tENTER YOUR CHOICE: ");
        scanf("%d",&menu);
        switch(menu)
        {
        case 7:
            system("cls");
            main();
            break;

        case 8:
            system("cls");
            MarksRecord();
            break;

        case 9:
            break;

        default:
            system("cls");
            printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
        }
    }
    else if(count>1)
    {
        printf("\n%d FILES ARE EDITED..\n",count);
        printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
        printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
        printf("\t\tPRESS '9' FOR EXIT\n\n");
        printf("\t\tENTER YOUR CHOICE: ");
        scanf("%d",&menu);
        switch(menu)
        {
        case 7:
            system("cls");
            main();
            break;

        case 8:
            system("cls");
            MarksRecord();
            break;

        case 9:
            break;

        default:
            system("cls");
            printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
        }
    }
    else
    {

        printf("\nNO FILES EDITED...\n");
        printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
        printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
        printf("\t\tPRESS '9' FOR EXIT\n\n");

        printf("\t\tENTER YOUR CHOICE: ");
        scanf("%d",&menu);

        switch(menu)
        {
        case 7:
            system("cls");
            main();
            break;

        case 8:
            system("cls");
            MarksRecord();
            break;

        case 9:
            break;

        default:
            system("cls");
            printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
        }
    }
}
void DeleteMarksRecord( )

{
    FILE *fp,*fptr ;
    struct StudentMarksRecord file ;
    char filename[15],another = 'Y',id[30];;
    int choice,check,menu;
    check =0;
    if(check==1)
    {
        return ;
    }

    while(another=='Y')
    {
        printf("\n\n\tHOW WOULD YOU LIKE TO DELETE.");
        printf("\n\n\t#DELETE WHOLE RECORD\t\t\t[1]");
        printf("\n\t#DELETE A PARTICULAR RECORD BY TIME\t[2]");
        do
        {
            printf("\n\t\tENTER YOU CHOICE:");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("\n\tENTER THE FILENAME OF RECORD TO BE DELETED:");
                fflush(stdin);
                gets(filename);
                fp = fopen (filename, "wb" ) ;
                if ( fp == NULL )
                {
                    printf("\nTHE FILE DOES NOT EXISTS");
                    printf("\nPRESS ANY KEY TO GO BACK.");
                    getch();
                    return ;
                }
                fclose(fp);
                remove(filename);
                printf("\nDELETED SUCCESFULLY...");
                break;

            case 2:
                printf("\n\tENTER THE FILENAME OF RECORD:");
                fflush(stdin);
                gets(filename);
                fp = fopen (filename, "rb" ) ;
                if ( fp == NULL )
                {
                    printf("\nTHE FILE DOES NOT EXISTS");
                    printf("\nPRESS ANY KEY TO GO BACK.");
                    getch();
                    return ;
                }
                fptr=fopen("temp","wb");
                if(fptr==NULL)
                {
                    printf("\nSYSTEM ERROR");
                    printf("\nPRESS ANY KEY TO GO BACK");
                    getch();
                    return ;
                }

                printf("\n\tENTER THE ID OF RECORD TO BE DELETED:");
                fflush(stdin);
                gets(id);

                while(fread(&file,sizeof(file),1,fp)==1)
                {
                    if(strcmp(file.id,id)!=0)
                        fwrite(&file,sizeof(file),1,fptr);
                }

                fclose(fp);
                fclose(fptr);
                remove(filename);
                rename("temp",filename);
                printf("\nDELETED SUCCESFULLY...");
                break;

            default:
                printf("\n\tYOU ENTERED WRONG CHOICE");
                break;
            }
        }
        while(choice<1||choice>2);
        printf("\n\tDO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):");
        fflush(stdin);
        scanf("%c",&another);
    }
    printf("\n\n\n\t\tPRESS '7' FOR MAIN MENU\n");
    printf("\t\tPRESS '8' FOR PREVIOUS MENU\n");
    printf("\t\tPRESS '9' FOR EXIT\n\n");
    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&menu);
    switch(menu)
    {
    case 7:
        system("cls");
        main();
        break;

    case 8:
        system("cls");
        MarksRecord();
        break;

    case 9:
        break;

    default:
        system("cls");
        printf("\n\t\t\t\t\t\tYOU HAVE ENTERED WRONG KEY!\n\n");
    }
}
