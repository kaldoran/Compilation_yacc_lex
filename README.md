Projet de Compilation L3 - Info (Jean Monnet)
============================================

Description
-----------
Le sujet du projet de compilation peut-être trouvé à [cette adresse](http://labh-curien.univ-st-etienne.fr/~fj/cpyrr). 
Il est actuellement réalisé par ABHAMON Ronan, BIGARD Florian et REYNAUD Nicolas.


Utilisation du projet
-----------------------

1. Se positionner à la racine du projet.

2. Utiliser la commande suivante pour construire l'executable :    

        ./build make

3. Executer la commande suivante pour vérifier la fiablité des programmes de tests : 

        ./test_examples

**true** correspond à un parsage parfait, **false** à une erreur. 
Certains programmes sont de ce fait foncièrement faux.

Note
----
La commande suivante donne les détails du parsage :  

	./prog < <prog source>
	
(Le lex étant utilisé en mode debug par le biais de l'option -d). Elle constitue une alternative au programme "test_examples".
