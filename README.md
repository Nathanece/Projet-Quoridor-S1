Projet QUORIDOR :
    L'objectif de ce projet est de coder un jeu de société en C pour en avoir une version virtuelle.
    Le jeu QUORIDOR consiste à faire avancer un pion d'un bout à l'autre du plateau. A l'aide d'un stock de barrière, nous pouvons ralentir la progression du pion adverse.
    Ce jeu se joue à 2 ou 4 joueurs.

Structure :
    "headers" : 
            -plateau.h //stockage du plateau sous forme de tableau 2 dimension
            -menu.h //stockage de constantes utile pour le choix des actions
            -joueur.h //stockage de la structure de données d'un joueur (coordonnées du pion, pseudo, ...)
    "fichiers source" :
            -plateau.cpp //contient le code source relatif au plateau (les actions de déplacement, de placement de barrières ...)
            -menu.cpp //contient le code source relatif au choix des actions
            -joueur.cpp //contient le code source relatif au joueur tel que le score.
