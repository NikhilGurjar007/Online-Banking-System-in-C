void CreateBankAccount(void)  
{  
    char password[20];  
    int passwordlength, i, seek = 0;  
    char ch;  
    FILE *file1, *file2;  
    struct accountDetails u1;  
    struct userpass p1;  
  
    struct userpass u2;  
    file1 = fopen("username.txt", "ab");  
  
    system("cls");  
    printf("\n\n!!!!!CREATE ACCOUNT!!!!!");  
  
    printf("\n\nFIRST NAME..");  
    scanf("%s", &u1.fname);  
  
    printf("\n\n\nLAST NAME..");  
    scanf("%s", &u1.lname);  
  
    printf("\n\nFATHER's NAME..");  
    scanf("%s", &u1.fathname);  
  
    printf("\n\nMOTHER's NAME..");  
    scanf("%s", &u1.mothname);  
  
    printf("\n\nADDRESS..");  
    scanf("%s", &u1.address);  
  
    printf("\n\nACCOUNT TYPE");  
    scanf("%s", &u1.typeaccount);  
  
    printf("\n\nDATE OF BIRTH..");  
    printf("\nDATE-");  
    scanf("%d", &u1.date);  
    printf("\nMONTH-");  
    scanf("%d", &u1.month);  
    printf("\nYEAR-");  
    scanf("%d", &u1.year);  
  
    printf("\n\nADHAR NUMBER");  
    scanf("%s", u1.adharnum);  
  
    printf("\n\nPHONE NUMBER");  
    scanf("%s", u1.pnumber);  
  
    printf("\n\nUSERNAME.. ");  
    scanf("%s", &u1.username);  
  
    printf("\n\nPASSWORD..");  
  
  
    for (i = 0; i < 50; i++) {  
        ch = getch();  
        if (ch != 13) {  
            password[i] = ch;  
            ch = '*';  
            printf("%c", ch);  
        }  
        else  
            break;  
    }  
  
    fwrite(&u1, sizeof(u1),  
        1, file1);  
  
  
    fclose(file1);  
    accountcreated();  
}  
  
  