===> Disclaimeur <===

Si vous utilisez mes tests. Ceux-ci ne sont pas absolu.
Ils ne verifient pas du tout tous les cas et possibilité. 
Des erreurs peuvent etre présents dans les tests et mener a l'erreur.
De plus je vous conseille de faire vos propres tests par vous même. 
Les faires nous apprend beaucoup. Faire les fonctions demandé est une chose. 
Les testers en est une autre.

->Les tests sur les listes sont très basique. Ils s'arretent a lstadd_back.

===> Fin du Disclaimeur <=== 

Pour lancer les tests souhaités.

-> placer le repo du testeur dans le dossier de votre librairie
-> creer votre librairie grace a votre Makefile.
-> executer la commande : gcc -I. testing/fichier_to_test -L. -lft -o go
Exemple pour atoi : 
---> gcc -I. testing/ft_atoi_test.c -L. -lft -o go

-> Pas de tests effectués pour calloc 

-> Pour les tests de : ft_putchar_fr / ft_putstr_fd / ft_putendl_fd / ft_putnbr_fd
Lancer comme d'habitude les test. Mais pour voir les résultats regardez le output.txt. Verifiez vous meme si l'affichage correspond. Modifiez les input et testez a votre guise.

Lancez l'executable go
---> ./go
Si il y a des erreurs, vous les verrez.

===> Pour les tests ft_strlcpy , ft_strlcat et ft_strnstr
-> installer la Bibliotheque bsd (ceci est pour Linux. Les autres pas la moindre idee): 
=========================   sudo apt install libbsd-dev   ==============================
-> Lancer avec le flag -lbsd
