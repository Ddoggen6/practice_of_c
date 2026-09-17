#include <stdio.h>
#include <string.h>
#define TAX_RATE 7.5

int main() {
      
    
    char username[100];
    char password[100];
    int successful_logins = 0;
    
     printf("Enter youre username and youre password:\n");
    scanf("%s", username);
   
   scanf("%s", password);
   
   if(strcmp(username, "admin") == 0 && strcmp(password, "secret123") == 0){
    printf("Login successful\n");
    successful_logins++;

   } else if (strcmp(username, "admin") != 0 && strcmp(password, "secret123") == 0){
    printf("Invalid username\n");

   } else if (strcmp(password, "secret123") != 0 && strcmp(username, "admin") == 0){
    printf("Invalid password\n");

   } else {
    printf("Invalid credentials\n");

   }
    printf("Total successful logins: %d\n", successful_logins);
    
    int quantity1, quantity2, quantity3;
    double price1, price2, price3;
    double item_total1, item_total2, item_total3;
    double subtotal, tax, final_total;
    
    printf("Enter quantity and price for item 1: ");
    scanf("%d %lf", &quantity1, &price1);
    
    printf("Enter quantity and price for item 2: ");
    scanf("%d %lf", &quantity2, &price2);
    
    printf("Enter quantity and price for item 3: ");
    scanf("%d %lf", &quantity3, &price3);
    
    
    item_total1 = quantity1 * price1;
    item_total2 = quantity2 * price2;
    item_total3 = quantity3 * price3;
    
    
    subtotal = item_total1 + item_total2 + item_total3;
    tax = (subtotal * TAX_RATE) / 100;
    final_total = subtotal + tax;
    
  
    printf("\n========== RECEIPT ==========\n");
    printf("Item 1: %d × $%.2f = $%.2f\n", quantity1, price1, item_total1);
    printf("Item 2: %d × $%.2f = $%.2f\n", quantity2, price2, item_total2);
    printf("Item 3: %d × $%.2f = $%.2f\n", quantity3, price3, item_total3);
    printf("------------------------------\n");
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Tax (%.1f%%): $%.2f\n", TAX_RATE, tax);
    printf("------------------------------\n");
    printf("TOTAL: $%.2f\n", final_total);
    
    return 0;
}
