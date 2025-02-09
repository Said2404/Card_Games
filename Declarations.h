#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define MaxJoueurs 4
//defini les max joueurs soit 4

typedef struct
{
    int valeurI;
    int valeurJ;
} S_Coordonees;

typedef struct 
{
    int noJoueur;
    char pseudo[30];
    int score;
    int nbErreur;
    int ordinateur;
} S_Joueur;

typedef struct
{
    int numCarte;
    int placeTableau;
    int retournee;
    int associee;
} S_Carte;


//Prédefinition des fonctions suivantes
void afficheMenu();
void afficheRegles();
void debutPartie();
void saisieJoueurs(S_Joueur *joueur, int *i, int *nbOrdis);
void saisieParam(int *L, int *C, int *nbJ, S_Joueur *param, int *Emax);
void initEmplacements (int L, int C, S_Coordonees *Emplacements);
void melangerEmplacements(int L, int C, S_Coordonees *Emplacements);
void initPlateau(int L, int C, S_Coordonees *Emplacements, S_Carte **Plateau);
void initMemoire(int L, int C, S_Carte **Memoire);
void afficherPlateau(int L, int C, S_Carte **Plateau);
int partie(int L, int C, int nbJ, S_Joueur *joueur, S_Carte **Plateau, S_Carte **Memoire, int Emax);  //jouer
void selectCarte(S_Carte **Plateau, S_Carte **Memoire, int *I, int *J, int L, int C, S_Joueur *joueur, int *numJoueur);
void selectCarteOrdi1(S_Carte **Plateau, S_Carte **Memoire, int L, int C, int *I, int *J);
void selectCarteOrdi2(S_Carte **Plateau, S_Carte **Memoire, int L, int C, int *I, int *J, int prevI, int prevJ);
void permutJoker(int L, int C, S_Carte **Plateau, int i, int j);
void afficheParam(S_Joueur *joueur, int nbJ, int Emax);
void afficheScores(S_Joueur *joueur, int nbJ);
void gagnant(S_Joueur *joueur, int nbJ);