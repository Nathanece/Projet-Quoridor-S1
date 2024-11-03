// Header pour les joueurs, il contient les données relative aux joueurs.

typedef struct {
  int coord_x;
  int coord_y;
  int score;
  char pseudo[20];
  char couleur;
} joueur;
//Cette structure sera identique pour chaque joueur. Elle pourra évoluer en fonction des besoins
