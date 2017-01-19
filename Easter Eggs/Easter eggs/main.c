#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "affichage.h"
#include "deplacement.h"


int main(void)
{
    int *Tour1, *Tour2, *Tour3, Disk, TbDisk, iModifTour, i, j, k, l, iCompteurTours=0, iTempFinal; //on initialise les 3 pointeurs sur tours ainsi que les variables
    time_t debut, fin; //variables utilisées pour la fonction time()

    int iLang = Langue(); //Choix de la langue au début du programme

    ReglesduJeu(iLang); //On affiche les règles du jeu en fonction de la langue choisie

    scanf("%d", &Disk);

    time(&debut); //Début de la fonction time()

    if (Disk < 3 || Disk > 10) //on vérifie que le nombre de disque est bien compris entre 3 et 10
    {

        if( iLang == 1) //On affiche en français
        {
            printf("Le nombre de disque entré n'est pas valide \n\n"); //si la conditon n'est pas respectée, on finis le programme
            return 0;
        }
        else if( iLang == 2) //On affiche en anglais
        {
            printf("Discs number invalid \n\n"); //si la conditon n'est pas respectée, on finis le programme
            return 0;
        }
    }
    else //si la conditon est respectée, on continue le programme
        if( iLang == 1) //On affiche en français
        {
            printf("Le nombre de disque entré est valide \n\n");
        }
        else if( iLang == 2) //On affiche en anglais
        {
            printf("Discs number valid \n\n");
        }

        system("clear"); //on efface la console
        TbDisk = iModifTour = Disk;
        TbDisk++; //incrémentation  de TbDisk pour l' \o (antislash o)
        iModifTour--;

        Tour1 = malloc(TbDisk * sizeof (int)), Tour2 = malloc(TbDisk * sizeof (int)), Tour3 = malloc(TbDisk * sizeof (int)); //on crée les tableaux dynamiques

        for(i = Disk, j = iModifTour; i > 0; j--, i--) //on initialise l'affichage des tours ou plutôt de la première tour puisque les autres n'ont pas de disques au départ
        {
            Tour1[j] = i;  //tour 1 remplie avec la boucle for
            Tour2[j] = 0;  //tour 2 initialisée à 0
            Tour3[j] = 0;  //tour 3 initialisée à 0
        }
        FILE *log = NULL;       // on créé un pointeur de fichier qu'on initialise à 0
        log = fopen("log.txt","a+"); // on attribue à ce pointeur l'adresse du fichier log.txt et on lui donne le droit d'ouverture et d'écriture

        do
        {
            for( l = 0; l< Disk; l++)
            {
               miseenforme( Tour1, Tour2, Tour3, l, Disk);
               //printf(" %d  %d  %d \n", Tour1[l], Tour2[l], Tour3[l]); //on affiche les trois tours
            }
            printf("\n          T1                   T2                   T3         \n");//on affiche le numéros des tableaux

            if( iLang == 1) //On affiche en français
            {
                printf("Mouvement? ");
            }
            else if( iLang == 2) //On affiche en anglais
            {
                printf("Your move? ");
            }
            scanf("%d", &k);
            iCompteurTours++;
            fprintf(log,"\nLe deplacement %d : %d", iCompteurTours, k);//prmeier argument : le fichier, puis ce qu'il faut ecrire, puis les variable a ecrire
            deplacement( Tour1, Tour2, Tour3, k, Disk, iLang); //on appelle la fonction deplacement...



        }while (!(Tour1[Disk-1] == 0 && Tour2[Disk-1] == 0)); //...Pendant que le jeu n'est pas terminé
        // pour gagner la case du bas des tours 1 et 2 doit être égale à 0
        //pour ne pas gagner cette condition ne doit pas se réaliser donc on met le contraire de la condition pour gagner et on continue tant que la condition n'est pas réalisée

        time(&fin);                         //Fin de la fonction time()
        iTempFinal = difftime(fin, debut);//on calcule la différence du temps final et de début pour obtenir le temps d'execution
        fprintf(log,"\nLe joueur a terminer en %d coups et en  %d secondes",iCompteurTours,iTempFinal);
        fclose(log); // equivalent de free, libère de l'espace mémoire et ferme le fichier
        system("clear");                    //on efface la console
        for( l = 0; l< Disk; l++)           //affichage final, lorsque l'utilisateur gagne
            {
                miseenforme( Tour1, Tour2, Tour3, l, Disk); //on affiche les trois tours
            }
            printf("\n          T1                   T2                   T3         \n"); //on affiche le numéros des tableaux

        if( iLang == 1) //On affiche en français
            {
                printf("\nVous avez gagné en %d coup et en %d secondes ! \n", iCompteurTours, iTempFinal); //affichage final
            }
        else if( iLang == 2) //On affiche en anglais
            {
                printf("\nYou won with %d moves in %d seconds ! \n", iCompteurTours, iTempFinal); //affichage final
            }
        free(Tour1);
        free(Tour2);
        free(Tour3);
        return 0;
}
