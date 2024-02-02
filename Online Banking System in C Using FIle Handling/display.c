 
void display(char user1[])  
{  
    system("cls");  
    FILE* file1;  
    int choice, i;  
    file1 = fopen("username.txt", "rb");  
    struct accountDetails u1;  
  
    if (file1 == NULL) {  
        printf("error in opening file");  
    }  
  
    while (fread(&u1, sizeof(u1),  
                1, file1)) {  
        if (strcmp(user1,  
                u1.username)  
            == 0) {  
            displayCoordinates(30, 1);  
            printf("WELCOME, %s %s",  
                u1.fname, u1.lname);  
            displayCoordinates(28, 2);  
            printf("..........................");  
            displayCoordinates(55, 6);  
            printf("==== YOUR ACCOUNT INFO ====");  
            displayCoordinates(55, 8);  
            printf("***************************");  
            displayCoordinates(55, 10);  
            printf("NAME..%s %s", u1.fname,  
                u1.lname);  
  
            displayCoordinates(55, 12);  
            printf("FATHER's NAME..%s %s",  
                u1.fathname,  
                u1.lname);  
  
            displayCoordinates(55, 14);  
            printf("MOTHER's NAME..%s",  
                u1.mothname);  
  
            displayCoordinates(55, 16);  
            printf("ADHAR CARD NUMBER..%s",  
                u1.adharnum);  
  
            displayCoordinates(55, 18);  
            printf("MOBILE NUMBER..%s",  
                u1.pnumber);  
  
            displayCoordinates(55, 20);  
            printf("DATE OF BIRTH.. %d-%d-%d",  
                u1.date, u1.month, u1.year);  
  
            displayCoordinates(55, 22);  
            printf("ADDRESS..%s", u1.address);  
  
            displayCoordinates(55, 24);  
            printf("ACCOUNT TYPE..%s",  
                u1.typeaccount);  
        }  
    }  
  
    fclose(file1);  
  
    displayCoordinates(0, 6);  
    printf(" HOME ");  
    displayCoordinates(0, 7);  
    printf("******");  
    displayCoordinates(0, 9);  
    printf(" 1....CHECK YOUR ACCOUNT BALANCE");  
    displayCoordinates(0, 11);  
    printf(" 2....SEND MONEY");  
    displayCoordinates(0, 13);  
    printf(" 3....LOG OUT FROM ACCOUNT\n\n");  
    displayCoordinates(0, 15);  
    printf(" 4....EXIT\n\n");  
  
    printf(" ENTER YOUR CHOICES..");  
    scanf("%d", &choice);  
  
    switch (choice) {  
    case 1:  
        CheckBankBalance(user1);  
        break;  
  
    case 2:  
        SendMoney();  
        break;  
  
    case 3:  
        logout();  
        login();  
        break;  
  
    case 4:  
        exit(0);  
        break;  
    }  
}  