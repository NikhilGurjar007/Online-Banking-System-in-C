void accountcreated(void)  
{  
    int i;  
    char ch;  
    system("cls");  
    printf(  
        "PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....");  
    for (i = 0; i < 200000000; i++) {  
        i++;  
        i--;  
    }  
  
    displayCoordinates(30, 10);  
  
    printf("ACCOUNT CREATED SUCCESSFULLY....");  
    displayCoordinates(0, 20);  
  
    printf("Press enter to login");  
  
    getch();  
    login();  
}  
  
  