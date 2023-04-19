#include <stdio.h>
#include <stdlib.h>
#include<time.h>

struct pokemon{
        int health;
        int attackPower;

}typedef POKEMON;

void savas(POKEMON* pikachu,POKEMON*charmander){
    while(pikachu->health>0&&charmander->health>0){
        if(random()==0){
            charmander->health=charmander->health-pikachu->attackPower;
            printf("""pikachu vurus yapti\n"""
                   """pikachu health:%d\n"""
                   """charmander health:%d\n--------------""",pikachu->health,charmander->health);
            }
       else{ pikachu->health=pikachu->health-charmander->attackPower;
        printf("""chamander vurus yapti\n"""
                   """pikachu health:%d\n"""
                   """charmander health:%d-------------""",pikachu->health,charmander->health);
            }
    }

    if((pikachu->health)<=0)
        printf("Oyun bitti\ncharmander kazandi\n");
    else{printf("Oyun bitti\nPikachu kazandi\n");}
}


int random(){
    srand(time(NULL));
    return rand()%2;
    //0 dondururse pikachu ,1 dondururse charmander vurus yapacak
}

int main()
{

    POKEMON* pikachu=(POKEMON*)malloc(sizeof(POKEMON));
    POKEMON* charmander=(POKEMON*)malloc(sizeof(POKEMON));

    printf("Sirasiyla girdiler\n");
    scanf("%d",&pikachu->health);
    scanf("%d",&pikachu->attackPower);
    scanf("%d",&charmander->health);
    scanf("%d",&charmander->attackPower);
    savas(pikachu,charmander);
    return 0;
}
