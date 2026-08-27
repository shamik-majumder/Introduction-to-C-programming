#include <stdio.h>
#include <string.h>

// Create a structure representing a bank account of a customer. What fields did 
// you use and why? 

typedef struct BankAccount
{
    double ac_no;
    double cif_id;
    char holder_name[30];
    char ifsc[12];
    float balance;
} acc;

int main()
{
    acc c1, c2, c3;
    c1.ac_no = 11804436889;
    c1.cif_id = 987654321;
    strcpy(c1.holder_name, "Shamik Majumder");
    strcpy(c1.ifsc, "SBIN0002456");
    c1.balance = 50000.00;

    printf("Account details of customer 1:\n");
    printf("Account Number: %.0f\n", c1.ac_no);
    printf("CIF ID: %.0f\n", c1.cif_id);
    printf("Holder Name: %s\n", c1.holder_name);
    printf("IFSC Code: %s\n", c1.ifsc);
    printf("Balance: INR %.2f\n", c1.balance);

    return 0;
}