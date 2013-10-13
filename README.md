# ------------------------------------------------ #
# Auteurs:                                         #
# 						   #
#   ABHAMON Ronan	                           #
#   BIGARD Florian				   #
#   REYNAUD Nicolas				   #
# ------------------------------------------------ #

Projet de Compilation L3 - Info (Jean Monnet)
============================================

Description
-----------
Le sujet du projet de compilation peut-être trouvé à [cette adresse](http://labh-curien.univ-st-etienne.fr/~fj/cpyrr). 
Il est actuellement réalisé par ABHAMON Ronan, BIGARD Florian et REYNAUD Nicolas.


Utilisatation du projet
-----------------------

1. Se positionner à la racine du projet
2. Utiliser la commande 

	./build make
	
 pour construire l'executable
3. Executer la commande 

	./test_examples
	
pour vérifier la fiabilité des programmes de tests.
      **true** correspond à un parsage parfait, **false** à une erreur. 
      Certains programmes sont de ce fait foncièrement faux.

Note
----
La commande 

	./prog < <prog source>
	
	 donne les détails du parsage.
       (Le lex étant utilisé en mode debug par le biais de l'option -d)
       Elle constitue une alternative au programme "test_examples".
