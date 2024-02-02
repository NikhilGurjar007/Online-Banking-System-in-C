Banking Account System in C using File handling
With the help of file handling, we can create a local banking account system on our computer which can have functionality like account opening, account login, transaction etc.

In the main function, we will have all the features that based on user input. We will call different functions from the main functions.

Here, we implement four functions majorly:

AccountCreation()
This function will take user details as the input, and it will create a new account for the user with the proper username and password.
We will create a structure data type to store all the details, and then we will store these details into a text file which will be named by the username.
CheckBalance()
This function will be used to check current of money in the account which is logged in. We will check all the files, and for the file which will match the user name and password, we will display its bank account balance.
SendMoney()
This function will be used to send money from one account to another account.
With the help of file handling, we will open the file of the user to whom we want to send the money to and then we will write the amount of money, and we will subtract the amount of money from the sender's file.
LogIn()
This function will be used to log in to the account with a username and password that already exists. For this feature, we will open all the files and search for the user name that exists entered by the user, and if the password is correct, then we will be logged into that account.
