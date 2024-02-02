void login(void)  
{  
    system("cls");  
  
    char username[50];  
    char password[50];  
  
    int i, j, k;  
    char ch;  
    FILE *file1, *file2;  
    struct accountDetails u1;  
    struct userpass u2;  
  
  
    file1 = fopen("username.txt",  
            "rb");  
  
    if (file1 == NULL) {  
        printf("THERE IS AN ERROR IN OPENING FILE");  
    }  
    displayCoordinates(34, 2);  
    printf(" ACCOUNT LOGIN ");  
    displayCoordinates(7, 5);  
    printf("***********************************************"  
        "********************************");  
  
    displayCoordinates(35, 10);  
    printf("==== LOG IN ====");  
  
    displayCoordinates(35, 12);  
    printf("USERNAME.. ");  
    scanf("%s", &username);  
  
    displayCoordinates(35, 14);  
    printf("PASSWORD..");  
  
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
  
  
    while (fread(&u1, sizeof(u1),  
                1, file1)) {  
        if (strcmp(username,  
                u1.username)  
            == 0) {  
            loginsu();  
            display(username);  
        }  
    }  
  
    fclose(file1);  
}  
  
  
void loginsu(void)  
{  
    int i;  
    FILE* file1;  
    struct accountDetails u1;  
    system("cls");  
    printf("Fetching account details based on yur input.....\n");  
    for (i = 0; i < 20000; i++) {  
        i++;  
        i--;  
    }  
  
    displayCoordinates(30, 10);  
    printf("LOGIN SUCCESSFULLY INTO YOUR ACCOUNT....");  
    displayCoordinates(0, 20);  
    printf("Press enter to continue");  
  
    getch();  
}  
  
  