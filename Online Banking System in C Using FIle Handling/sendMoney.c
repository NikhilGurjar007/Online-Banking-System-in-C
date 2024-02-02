void SendMoney(void)  
{  
      
    int i, j;  
    FILE *file1, *file2;  
    struct accountDetails u1;  
    struct money m1;  
    char sender[20];  
    char receiver[20];  
    system("cls");  
  
  
    file2 = fopen("username.txt", "rb");  
  
  
    file1 = fopen("mon.txt", "ab");  
  
    displayCoordinates(33, 4);  
    printf("---- SEND MONEY ----");  
    displayCoordinates(33, 5);  
    printf("========================");  
  
    displayCoordinates(33, 11);  
    printf("FROM (your username).. ");  
    scanf("%s", &sender);  
  
    displayCoordinates(33, 13);  
    printf(" TO (username of person)..");  
    scanf("%s", &receiver);  
  
  
    while (fread(&u1, sizeof(u1),  
                1, file2))  
  
    {  
        if (strcmp(receiver,  
                u1.username)  
            == 0) {  
            strcpy(m1.usernameto,  
                u1.username);  
            strcpy(m1.userpersonfrom,  
                sender);  
        }  
    }  
    displayCoordinates(33, 16);  
  
    printf("ENTER THE AMOUNT TO BE TRANSFERRED..");  
    scanf("%d", &m1.money1);  
  
    fwrite(&m1, sizeof(m1),  
        1, file1);  
  
    displayCoordinates(0, 26);  
    printf(  
        "--------------------------------------------------"  
        "--------------------------------------------");  
  
    displayCoordinates(0, 28);  
    printf(  
        "--------------------------------------------------"  
        "--------------------------------------------");  
  
    displayCoordinates(0, 29);  
    printf("transfering amount, Please wait..");  
  
    displayCoordinates(10, 27);  
    for (i = 0; i < 70; i++) {  
        for (j = 0; j < 1200000; j++) {  
            j++;  
            j--;  
        }  
        printf("*");  
    }  
  
    displayCoordinates(33, 40);  
    printf("YOUR MONEY IS SUCCESSFULLY TRANSFERRED....");  
    getch();  
  
  
    fclose(file2);  
    fclose(file1);  
  
    display(sender);  
}  
  
  