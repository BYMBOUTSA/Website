# MODULARITE
Ici nous avons utiliser la modularité afin d'écrire nos fonctions dans plusieur fichiers:
* Un fichier main.c où on fait notre appel de fichier avec notre programme principal main.
* Un fichier player.c où on aura chacune des implémentations de nos fichiers.
* Un fichierplayer.h qui contient les prototypes de nos fonctions et celui-ci doit bien avoir des éléments qui permettent de le sécuriser(#ifndef PLAYER_H  #define PLAYER_H  #endif).