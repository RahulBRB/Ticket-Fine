/* 
(Problem)
On a certain train, Chef-the ticket collector, collects a fine of Rs. XX if a passenger is travelling without a ticket. It is known that a passenger carries either a single ticket or no ticket.

PP passengers are travelling and they have a total of QQ tickets. Help Chef calculate the total fine collected. */

#include<stdio.h>
int main(){
    
    int T;
    scanf("%d", &T);
    
    while(T--){
    int X,P,Q; // X=fine, P=passengers, Q=total tickets
    
    scanf("%d %d %d", &X, &P, &Q);
    
    int z;
    z=P-Q; 
    printf("%d \n", X*z);
    }
    
    
    return 0;
}
