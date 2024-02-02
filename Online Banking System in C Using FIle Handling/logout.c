void logout(void)  
{  
    int i, j;  
    system("cls");  
    printf("please wait, logging out");  
  
    for (i = 0; i < 10; i++) {  
        for (j = 0; j < 25000000; j++) {  
            i++;  
            i--;  
        }  
        printf(".");  
    }  
  
    displayCoordinates(30, 10);  
    printf("logged  out successfully..\n");  
  
    displayCoordinates(0, 20);  
    printf("press any key to continue..");  
  
    getch();  
}  