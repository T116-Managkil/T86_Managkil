#include<stdio.h>
int main(){
int choices, price, payment, change;
    printf("====================================\n");
    printf("         CORNETTO ICE-CREAM \n            VENDO MACHINE \n");
    printf("====================================\n");
    
    
    printf("\nChoose your Item:\n");
    printf("\n[1] Cornetto Ice-cream: ₱35\n    (Strawberry)\n\n[2] Cornetto Ice-cream: ₱25\n    (Mint Chocolate)\n\n[3] Cornetto Ice-cream: ₱20\n    (Chocolate chip)"); 
    printf("\n\nChoice: ");
    scanf("%d", &choices);
    switch (choices){
    
    case 1:
    price = 35;
    printf("\n====================================");
    printf("\nInput payment: ₱");
    scanf("%d", &payment);
    if(payment>=price){
    change = payment-price;  
    printf("Change: ₱%d\n", change);  
    printf("====================================");
    printf("\n\n   You have successfully purchased\n          Cornetto Ice-cream\n             (Strawberry)"); 
    printf("\n____________________________________"); 
}
else{
    printf("====================================");
    printf("\n\n     You dont have enough funds!");
}
    break;
    
    case 2:
    price = 25;
    printf("\n====================================");
    printf("\nInput payment: ₱");
    scanf("%d", &payment);
    if(payment>=price){
    change = payment-price;  
    printf("Change: ₱%d\n", change);  
    printf("====================================");
    printf("\n\n   You have successfully purchased\n          Cornetto Ice-cream\n           (Mint Chocolate)"); 
    printf("\n____________________________________");
}
else{
    printf("====================================");
    printf("\n\n     You dont have enough funds!");
}
    break;
    
    case 3:
    price = 20;
    printf("\n====================================");
    printf("\nInput payment: ₱");
    scanf("%d", &payment);
    if(payment>=price){
    change = payment-price;  
    printf("Change: ₱%d\n", change);  
    printf("====================================");
    printf("\n\n   You have successfully purchased\n          Cornetto Ice-cream\n           (Chocolate Chip)"); 
    printf("\n____________________________________");
}
else{
    printf("====================================");
    printf("\n\n     You dont have enough funds!");
}

    break;
    
   default:
   printf("\n====================================");
   printf("           Invalid Input!");
   printf("\n====================================");
}
return 0;
}