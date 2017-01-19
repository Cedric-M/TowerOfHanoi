#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_MAGENTA  "\x1b[35m"
#define ANSI_COLOR_CYAN     "\x1b[36m"
#define ANSI_COLOR_RESET    "\x1b[0m"

#define ANSI_COLOR_LIGHT_RED      "\033[01;31m"
#define ANSI_COLOR_YELLOW2        "\033[01;33m"
#define ANSI_COLOR_GREEN2         "\033[22;32m"
#define ANSI_COLOR_LIGHT_GREEN    "\033[01;32m"
#define ANSI_COLOR_DARK_GRAY      "\033[01;30m"
#define ANSI_COLOR_LIGHT_BLUE     "\033[01;34m"
#define ANSI_COLOR_LIGHT_MAGENTA  "\033[01;35m"
#define ANSI_COLOR_LIGHT_CYAN     "\033[01;36m"

int Langue ()
{
int iLang;
printf("Bienvenue! / Welcome! \n \n");
    do //on affiche le choix de la langue pour l'utilisateur tant qu'il n'a pas rentré "1" ou "2"
    {
        printf("Quelle langue souhaitez vous? / Which language do you want? \n"); //On demande la langue choisie au début du programme
        printf("1 - Francais \n");
        printf("2 - Anglais \n");
        scanf("%d", &iLang);
        system("clear"); //on efface la console
    }while (iLang != 1 && iLang != 2);
    system("clear"); //on efface la console
    return iLang;
}


void ReglesduJeu (int iLang) //affichage de début de programme, on explique les règles et les conditions de jeu
{

    if( iLang == 1) //On affiche en français
        {
            printf("Bienvenue aux tours de Hanoi ! \n \n");
            printf("Le principe du jeu est simple: il consiste à déplacer des disques de diamètres\n");
            printf("différents empilés dans une 'tour depart' à une 'tour d'arrivee' en passant par\n");
            printf("une 'tour intermediaire', et ceci en un minimum de coups, tout en respectant les\n");
            printf("deux regles suivantes : \n1) On ne peut déplacer plus d'un disque a la fois\n");
            printf("2) On ne peut placer un disque que sur un autre disque plus grand que lui ou sur\nun emplacement vide. \n\n");
            printf("Pour déplacer un disque d'une tour à une autre, il suffit de saisir par exemple \n");
            printf("'12'cela déplacera le disque en haut de la tour 1, vers le haut de la tour 2 \n\n");
            printf("Choix de la difficulté : Combien de disques souhaitez vous ? "); //On demande le nombre de disques
        }
    else if( iLang == 2) //On affiche en anglais
        {
            printf("Welcome ! \n \n");
            printf("The objective of this game is to move differents discs stacked on the left tower\n");
            printf("to the tower at the right by using a third tower in a minimum of  \n");
            printf("move while respecting the following rules:\n");
            printf("1) You can't move more than one disc at a time\n");
            printf("2) You can't put a disc on another disc bigger than itself or on an \nempty space. \n\n");
            printf("To move a disk from one tower to another, just type for example \n");
            printf("'12' which will move the disc at the top of the first tower, to the top of \nthe second tower. \n\n");
            printf("Difficulty : How many discs do you want ? "); //On demande le nombre de disques
        }
}

int miseenforme (int Tour1[], int Tour2[], int Tour3[],int l, int Disk) //on affiche joliement les tours d'Hanoi avec la representation graphique
{


    switch(Tour1[l]) //affichage de la tour 1, tout les numéros sont remplacés par les disques qui leurs correspondent
    {
        case 0:
            printf("          |          ");
        break;

        case 1:
            printf(ANSI_COLOR_YELLOW2      "         1|1         "ANSI_COLOR_RESET);
        break;

        case 2:
            printf(ANSI_COLOR_LIGHT_GREEN  "        22|22        "ANSI_COLOR_RESET);
        break;

        case 3:
            printf(ANSI_COLOR_LIGHT_CYAN   "       333|333       "ANSI_COLOR_RESET);
        break;

        case 4:
            printf(ANSI_COLOR_LIGHT_BLUE   "      4444|4444      "ANSI_COLOR_RESET);
        break;

        case 5:
            printf(ANSI_COLOR_LIGHT_MAGENTA"     55555|55555     "ANSI_COLOR_RESET);
        break;

        case 6:
            printf(ANSI_COLOR_LIGHT_RED    "    666666|666666    "ANSI_COLOR_RESET);
        break;

        case 7:
            printf(ANSI_COLOR_YELLOW2      "   7777777|7777777   "ANSI_COLOR_RESET);
        break;

        case 8:
            printf(ANSI_COLOR_LIGHT_GREEN  "  88888888|88888888  "ANSI_COLOR_RESET);
        break;

        case 9:
            printf(ANSI_COLOR_LIGHT_CYAN   " 999999999|999999999 "ANSI_COLOR_RESET);
        break;

        case 10:
            printf(ANSI_COLOR_LIGHT_BLUE   "1010101010|1010101010"ANSI_COLOR_RESET);
        break;

    }


     switch(Tour2[l]) //affichage de la tour 2, tout les numéros sont remplacés par les disques qui leurs correspondent
    {
         case 0:
            printf("          |          ");
        break;

        case 1:
            printf(ANSI_COLOR_YELLOW2      "         1|1         "ANSI_COLOR_RESET);
        break;

        case 2:
            printf(ANSI_COLOR_LIGHT_GREEN  "        22|22        "ANSI_COLOR_RESET);
        break;

        case 3:
            printf(ANSI_COLOR_LIGHT_CYAN   "       333|333       "ANSI_COLOR_RESET);
        break;

        case 4:
            printf(ANSI_COLOR_LIGHT_BLUE   "      4444|4444      "ANSI_COLOR_RESET);
        break;

        case 5:
            printf(ANSI_COLOR_LIGHT_MAGENTA"     55555|55555     "ANSI_COLOR_RESET);
        break;

        case 6:
            printf(ANSI_COLOR_LIGHT_RED    "    666666|666666    "ANSI_COLOR_RESET);
        break;

        case 7:
            printf(ANSI_COLOR_YELLOW2      "   7777777|7777777   "ANSI_COLOR_RESET);
        break;

        case 8:
            printf(ANSI_COLOR_LIGHT_GREEN  "  88888888|88888888  "ANSI_COLOR_RESET);
        break;

        case 9:
            printf(ANSI_COLOR_LIGHT_CYAN   " 999999999|999999999 "ANSI_COLOR_RESET);
        break;

        case 10:
            printf(ANSI_COLOR_LIGHT_BLUE   "1010101010|1010101010"ANSI_COLOR_RESET);
        break;


    }


     switch(Tour3[l]) //affichage de la tour 3, tout les numéros sont remplacés par les disques qui leurs correspondent
    {
         case 0:
            printf("          |          ");
        break;

        case 1:
            printf(ANSI_COLOR_YELLOW2      "         1|1         "ANSI_COLOR_RESET);
        break;

        case 2:
            printf(ANSI_COLOR_LIGHT_GREEN  "        22|22        "ANSI_COLOR_RESET);
        break;

        case 3:
            printf(ANSI_COLOR_LIGHT_CYAN   "       333|333       "ANSI_COLOR_RESET);
        break;

        case 4:
            printf(ANSI_COLOR_LIGHT_BLUE   "      4444|4444      "ANSI_COLOR_RESET);
        break;

        case 5:
            printf(ANSI_COLOR_LIGHT_MAGENTA"     55555|55555     "ANSI_COLOR_RESET);
        break;

        case 6:
            printf(ANSI_COLOR_LIGHT_RED    "    666666|666666    "ANSI_COLOR_RESET);
        break;

        case 7:
            printf(ANSI_COLOR_YELLOW2      "   7777777|7777777   "ANSI_COLOR_RESET);
        break;

        case 8:
            printf(ANSI_COLOR_LIGHT_GREEN  "  88888888|88888888  "ANSI_COLOR_RESET);
        break;

        case 9:
            printf(ANSI_COLOR_LIGHT_CYAN   " 999999999|999999999 "ANSI_COLOR_RESET);
        break;

        case 10:
            printf(ANSI_COLOR_LIGHT_BLUE   "1010101010|1010101010"ANSI_COLOR_RESET);
        break;

    }
    printf("\n");
    return 0;
}





