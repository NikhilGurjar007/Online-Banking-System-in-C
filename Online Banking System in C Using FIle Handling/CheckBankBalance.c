void CheckBankBalance(char user2[])  
{  
      
    system("cls");  
    FILE* file1;  
    struct money m1;  
    char ch;  
    int i = 1, summoney = 0;  
  
    file1 = fopen("mon.txt", "rb");  
  
    int k = 5, l = 10;  
    int m = 30, n = 10;  
    int u = 60, v = 10;  
  
    displayCoordinates(30, 2);  
    printf("==== BANK ACCOUNT MONEY  ====");  
    displayCoordinates(30, 3);  
    printf("***************************");  
    displayCoordinates(k, l);  
    printf("S no.");  
    displayCoordinates(m, n);  
    printf("TRANSACTION ID");  
    displayCoordinates(u, v);  
    printf("AMOUNT");  
  
    while (fread(&m1, sizeof(m1),  
                1, file1)) {  
        if (strcmp(user2,  
                m1.usernameto)  
            == 0) {  
            displayCoordinates(k, ++l);  
            printf("%d", i);  
            i++;  
            displayCoordinates(m, ++n);  
            printf("%s", m1.userpersonfrom);  
  
            displayCoordinates(u, ++v);  
            printf("%d", m1.money1);  
          
            summoney = summoney + m1.money1;  
        }  
    }  
  
    displayCoordinates(80, 10);  
    printf("TOTAL AMOUNT");  
  
    displayCoordinates(80, 12);  
    printf("%d", summoney);  
  
    getch();  
    fclose(file1);  
    display(user2);  
}  
  
  