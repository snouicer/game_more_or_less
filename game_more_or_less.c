//  Created by Sofiane on 08/02/2022.
//  Copyright © 2022  All rights reserved.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int nombreMystere=0,nombreMystere2=0,nombretaper=0;
    int rejouer=0;
    int coup=0;
    int continuerPartie=1;
    int nombreplayer=0;
    srand(time(NULL));
    
    while(continuerPartie==1)
    {
        printf("====== Bienvenue au jeux mystere ======\n");
        printf("Choisissez le nombre de joueur:");
        scanf("%d",&nombreplayer);
        
        if (nombreplayer==1)
        {
            printf("vous avez choisis le mode 1 joueur!!\n");
            // Mode dificulté
            int nivdif;
            int MIN=1;
            int MAX=0;
            printf("=== NIVEAU ===\n");
            printf("1: entre 1 et 100 \n");
            printf("2: entre 1 et 1000 \n");
            printf("3: entre 1 et 10000 \n");
            printf("Choississez un niveau: ");
            scanf("%d",&nivdif);
            
            if(nivdif==1)
            {
                MAX=100;
                nombreMystere=(rand()%(MAX-MIN+1))+MIN;
                printf("vous avez choisi le niveau 1 \n\n");
            }
            else if(nivdif==2)
            {
                MAX=1000;
                nombreMystere=(rand()%(MAX-MIN+1))+MIN;
                printf("vous avez choisi le niveau 2 \n\n");
            }
            else if(nivdif==3)
            {
                MAX=10000;
                nombreMystere=(rand()%(MAX-MIN+1))+MIN;
                printf("vous avez choisi le niveau 3 \n\n");
            }
            else printf("Choississez un niveau de 1 a 3 \n\n ");
            
            while(nombretaper!=nombreMystere)
            {
                printf("DEVINER LE NOMBRE MYSTERE:");
                scanf("%d",&nombretaper);
                coup++;
                //    printf("aficher le nombre taper: %d\n\n",nombretaper);
                if(nombretaper>nombreMystere) printf("C'est moins que sa !\n\n");
                else if(nombretaper<nombreMystere) printf("C'est plus !\n\n");
                else  printf("Bravo, vous avez trouvé le nombre mystère %d en %d coups\n\n",nombreMystere,coup);
            }
            
        }
        else if (nombreplayer==2)
        {
            printf("vous avez choisis 2 joueur !!\n");
            printf("JOUEUR 1 TAPER UN NOMBRE MYSTERE:");
            scanf("%d",&nombreMystere2);
            printf("\n");
            while(nombretaper!=nombreMystere2)
            {
                printf("JOUEUR 2 DEVINER LE NOMBRE MYSTERE:");
                scanf("%d",&nombretaper);
                coup++;
                //    printf("aficher le nombre taper: %d\n\n",nombretaper);
                if(nombretaper>nombreMystere2) printf("C'est moins que sa !\n\n");
                else if(nombretaper<nombreMystere2) printf("C'est plus !\n\n");
                else   printf("Bravo, vous avez trouvé le nombre mystère %d en %d coups\n\n",nombreMystere2,coup);
            }
        }
        else printf("LE NOMBRE TAPÉ DOIT ETRE 1 OU 2 !!\n\n");
        
        printf("Voulez vous rejouer? \n");
        printf("1. Rejouer? \n");
        printf("2. Arreter? ");
        printf("\n");
        scanf("%d",&rejouer);
        
        if(rejouer==1)
            continuerPartie=1;
        else
        {   continuerPartie=0;
            printf("Merci d'avoir jouer a bientot je l'espère ^_^ !!!\n");
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}