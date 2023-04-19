//Even our problem setter cannot nail this everytime. No giving up!
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <stdio.h>

int main() {
	// write your code here
	struct node{
	    int data;
	    struct node* next;
	}typedef NODE;
	
    int N;
    NODE* number;
    
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        if(number==NULL){
            number=(NODE*)malloc(sizeof(NODE));
            scanf("%d",&(number->data));
        }
        
        number->next=(NODE*)malloc(sizeof(NODE));
        number=number->next;
        scanf("%d",&(number->data));
    }
    numbers[N]=-1;
    int step=0;
    while(1){
        for(int i=0;i<N;i++){
            if(numbers[i]>numbers[i+1]){
                
            }
        }
    }
	return 0;
}

