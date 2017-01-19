
int deplacement(int Tour1[], int Tour2[], int Tour3[],int iDep, int Disk, int iLang)
{
    int i = -1;      // i et k sont des variables compteur
    int k = -1;      // i sera utilisé pour la tour de départ, et k pour la tour dans laquelle l'utilisateur souhaite déplacer un disque
    int ival =0;     // valeur intermédiaire utilisé plus tard


    system("clear"); //on efface la console
    switch(iDep)
    {
        case 12: //Si l'utilisateur tape 12, alors..

            do
            {
                i++; //on incrémente i jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour1[i] == 0 && i != Disk-1);

            do
            {
                k++; //on incrémente k jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour2[k] == 0 && k != Disk);

            if (Tour1[i] < Tour2[k] || Tour2[k] == 0) //on vérifie que l'on peut poser le disque souhaité sur un emplacement vide ou un disque de plus grande taille.
            {

                ival= Tour1[i];         //si la condition est vérifiée on change le disque de place
                Tour1[i] = Tour2[k-1];
                Tour2[k-1] = ival;
            }
            else //sinon on écrit "déplacement impossible"

            {
                if( iLang == 1)
                {
                    printf("Déplacement impossible \n");
                }
                else if( iLang == 2)
                {
                    printf("Move not allowed \n");
                }
            }

            break;

        case 13: //Si l'utilisateur tape 13, alors..

            do
            {
                i++; //on incrémente i jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour1[i] == 0 && i != Disk-1);

            do
            {
                k++; //on incrémente k jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour3[k] == 0 && k != Disk);

            if (Tour1[i] < Tour3[k] || Tour3[k] == 0) //on vérifie que l'on peut poser le disque souhaité sur un emplacement vide ou un disque de plus grande taille.
            {

                ival= Tour1[i];         //si la condition est vérifiée on change le disque de place
                Tour1[i] = Tour3[k-1];
                Tour3[k-1] = ival;
            }
            else //sinon on écrit "déplacement impossible"
            {
                if( iLang == 1)
                {
                    printf("Déplacement impossible \n");
                }
                else if( iLang == 2)
                {
                    printf("Move not allowed \n");
                }
            }

            break;

        case 21: //Si l'utilisateur tape 21, alors..

            do
            {
                i++; //on incrémente i jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour2[i] == 0 && i != Disk-1);

            do
            {
                k++; //on incrémente k jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour1[k] == 0 && k != Disk);

            if (Tour2[i] < Tour1[k] || Tour1[k] == 0) //on vérifie que l'on peut poser le disque souhaité sur un emplacement vide ou un disque de plus grande taille.
            {

                ival= Tour2[i];         //si la condition est vérifiée on change le disque de place
                Tour2[i] = Tour1[k-1];
                Tour1[k-1] = ival;
            }
            else //sinon on écrit "déplacement impossible"
            {
                if( iLang == 1)
                {
                    printf("Déplacement impossible \n");
                }
                else if( iLang == 2)
                {
                    printf("Move not allowed \n");
                }
            }

            break;

        case 23: //Si l'utilisateur tape 23, alors..

            do
            {
                i++; //on incrémente i jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour2[i] == 0 && i != Disk-1);

            do
            {
                k++; //on incrémente k jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour3[k] == 0 && k != Disk);

            if (Tour2[i] < Tour3[k] || Tour3[k] == 0) //on vérifie que l'on peut poser le disque souhaité sur un emplacement vide ou un disque de plus grande taille.
            {

                ival= Tour2[i];         //si la condition est vérifiée on change le disque de place
                Tour2[i] = Tour3[k-1];
                Tour3[k-1] = ival;
            }
            else //sinon on écrit "déplacement impossible"
            {
                if( iLang == 1)
                {
                    printf("Déplacement impossible \n");
                }
                else if( iLang == 2)
                {
                    printf("Move not allowed \n");
                }
            }

            break;

        case 31: //Si l'utilisateur tape 31, alors..

            do
            {
                i++; //on incrémente i jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour3[i] == 0 && i != Disk-1);

            do
            {
                k++; //on incrémente k jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour1[k] == 0 && k != Disk);

            if (Tour3[i] < Tour1[k] || Tour1[k] == 0) //on vérifie que l'on peut poser le disque souhaité sur un emplacement vide ou un disque de plus grande taille.
            {

                ival= Tour3[i];         //si la condition est vérifiée on change le disque de place
                Tour3[i] = Tour1[k-1];
                Tour1[k-1] = ival;
            }
            else //sinon on écrit "déplacement impossible"
            {
                if( iLang == 1)
                {
                    printf("Déplacement impossible \n");
                }
                else if( iLang == 2)
                {
                    printf("Move not allowed \n");
                }
            }

            break;

        case 32: //Si l'utilisateur tape 32, alors..

            do
            {
                i++; //on incrémente i jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour3[i] == 0 && i != Disk-1);

            do
            {
                k++; //on incrémente k jusqu'à tomber sur une valeur qui n'est pas 0
            } while(Tour2[k] == 0 && k != Disk);

            if (Tour3[i] < Tour2[k] || Tour2[k] == 0) //on vérifie que l'on peut poser le disque souhaité sur un emplacement vide ou un disque de plus grande taille.
            {

                ival= Tour3[i];         //si la condition est vérifiée on change le disque de place
                Tour3[i] = Tour2[k-1];
                Tour2[k-1] = ival;
            }
            else //sinon on écrit "déplacement impossible"
            {
                if( iLang == 1)
                {
                    printf("Déplacement impossible \n");
                }
                else if( iLang == 2)
                {
                    printf("Move not allowed \n");
                }
            }

            break;
            //si l'utilisateur écrit une valeur autre que 12,13,21,23,31 ou 32, on ne fait rien.

        default:

            if( iLang == 1)
            {
                printf("Déplacement impossible \n");
            }
            else if( iLang == 2)
            {
                printf("Move not allowed \n");
            }

            break;
    }
    return 0;

}



















