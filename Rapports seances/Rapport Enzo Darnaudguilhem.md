# Voici le rapport de mes séances lors de notre projet Catapulte #

Lien chaine YouTube
https://www.youtube.com/channel/UCHTVAFHTAG-fNAGtCCrhW3g?view_as=subscriber

## Travail avant la première séance ##
Avant la première séance (2 semaines avant), nous avons d'abord travaillé sur le __mécanisme d'envoi__: 
+ Guillaume a testé un __electro-aimant__ pour envoyer un projectile, mais on ne pouvait rien envoyer car la puissance était trop faible. On a donc cherché un autre moyen d'envoyer notre projectile.
+ J'ai travaillé sur les __moteurs pas à pas__, et on a décidé de choisir ce type de moteur pour faire notre machine : on a donc choisi de faire une ___catapulte___. 1 semaine avant le début des séances, en salle de TP, on a récupéré un roulement à bille, un moyeu pour mettre au bout du moteur pas à pas et une barre de métal pour attacher l'élastique. En TP on a percé la barre puis attaché tous les éléments ensemble (voir photo).
![Mécanisme d'envoi initial](https://user-images.githubusercontent.com/45574003/49940923-5c092500-fee1-11e8-9d3b-4fe31d0ba28a.jpg)
+ Chez moi, j'ai récupéré du bois, des équerres et des vis pour tester la puissance du moteur qui tire l'élastique. J'ai tout vissé sur une plaque de bois pour que ce soit fixé. On avait dont déjà une partie du mécanisme d'envoi opérationnel (voir photo).
![Mécanisme d'envoi fixé](https://user-images.githubusercontent.com/45574003/49941004-98d51c00-fee1-11e8-84d8-93582d772b5a.jpg)


## Première séance (13/12/18) ##
On a commencé par créer le Github avec le cahier des charges et le planning à respecter.

Ayant déjà le mécanisme d'envoi fixé, on a cherché à fixer le lanceur (plaque tenue par l'élastique et où se pose le projectile).
+ On a donc récupéré une plaque de bois pas très large, on l'a scié à la bonne longueur, et on fixé le lanceur à la plaque originelle (voir photo).
![Lanceur fixé](https://user-images.githubusercontent.com/45574003/49941138-ed789700-fee1-11e8-8ce1-f7810077f4ad.jpg)
+ On a entrelassé plusieurs élastiques pour avoir plus de longueur.
+ Notre système basique de catapulte était prêt. Il suffisait de le tenir à la main en l'air. 
+ J'ai envoyé un programme Arduino basique qui fait tourner le moteur pas à pas. L'élastique se tendait, on retenait le lanceur, on mettait une boule de papier, et on lachait. On a donc fait plusieurs test : on a envoyé la boule à environ 3 mètres. On a un peu de jeu sur le lanceur, il bouge sur quelques milimètres.
![Début de catapulte](https://user-images.githubusercontent.com/45574003/49941201-20228f80-fee2-11e8-9116-fdc5400576f7.jpg)

L'objectif de la prochaine séance et de créer une armature pour faire tenir la catapulte droite.


## Deuxième séance (20/12/18) ##
J'ai filmé une vidéo de la catapulte initiale avec mon téléphone pour la mettre sur Youtube.

https://www.youtube.com/watch?v=DyY7zPlhrk4

Ensuite on a changé de plaque de support pour prendre une plaque de bois plus légère. On a donc tout bien placé sur la plaque (bons axes de symétrie).

On a travaillé sur l'armature de la catapulte.
Le but était de faire tenir toute notre catapulte initiale sur une autre plaque. Mais il faut aussi incliner la plaque verticale, elle n'est pas perpendiculaire au sol. On a donc choisi une inclinaison et plié des équerres pour avoir le __bon angle__.

Ensuite j'ai récupéré une plaque de bois qui servira de support principal, où le __lanceur__ sera posé dessus. J'ai scié la plaque à la bonne taille.
![base_catapulte](https://user-images.githubusercontent.com/45574003/50378619-f0d4f680-0636-11e9-87e5-d42d663ba263.jpg)
Puis j'ai vissé la catapulte dessus avec les équerres.
![Armature_60deg](https://user-images.githubusercontent.com/45574003/50378805-f03e5f00-063a-11e9-9ed0-78404035d554.jpg)

https://www.youtube.com/watch?v=wKyZYhmr6aM

On a donc fait des tests, une boule de papier part à 2m, mais elle part trop proche du sol. L'inclinaison choisie n'est pas assez forte.
Chez moi j'ai donc replié les équerres à 45 degrés et l'inclinaison semble bonne.
![Armature_45deg](https://user-images.githubusercontent.com/45574003/50378810-05b38900-063b-11e9-86af-da5ded0d8f53.jpg)

https://www.youtube.com/watch?v=_9IVKUDfaCI


## Troisième séance (10/01/19) ##
J'ai commencé par faire un trou dans la plaque de l'armature pour y mettre le moteur pas à pas qui déclenche le lancer.
![Armature_trouPaP](https://user-images.githubusercontent.com/45574003/50964706-47b04c00-14d0-11e9-9fe1-9b3bbcc4ae01.jpg)
On a reçu les __moyeux__ donc on les a fixé sur les moteurs pas à pas. Puis j'ai cherché un bout de bois à fixer sur le moyeu, pour interagir avec le lanceur. J'ai percé puis fixé le bout de bois. Et on a testé le tout ensemble.
![Armature_lanceurPaP](https://user-images.githubusercontent.com/45574003/50964807-81815280-14d0-11e9-8f80-e5afdae7afa0.jpg)
![Test_couloir](https://user-images.githubusercontent.com/45574003/50964866-aa094c80-14d0-11e9-981c-004650b9b870.jpg)
Comme on avait presque fini l'armature, j'ai commencé à travailler sur le pivot (ce qui permet de faire tourner la catapulte pour visser). 


## Quatrième séance (17/01/19) ##
J'ai travaillé entièrement sur la plateforme __pivot__. Le but de la plaque pivot et de soutenir la plaque prinicpale avec la catapulte. Un moteur pas à pas est donc fixé à cette plaque pour faire __pivoter__ la plaque principale. Puis des équerres servirons de support pour soulager le poids subi par le moteur pas à pas.
On a commencé par couper une plaque de bois aux mêmes dimensions que la plaque principale.
![Plaque_pivot](https://user-images.githubusercontent.com/45574003/51338372-e9640a00-1a89-11e9-9f91-920eb91f0cae.jpg)
J'ai ensuite fixé le moyeu sous la plaque principale, ce qui permet de relier la plaque pivot et la plaque principale. Le moteur pas à pas pourra faire pivoter la plaque principale avec la catapulte. La catapulte pourra donc viser un panier.
![Moyeu_pivot](https://user-images.githubusercontent.com/45574003/51338527-5d061700-1a8a-11e9-9b46-24b1ce4d4e18.jpg)
On a ensuite présenté notre projet pendant l'oral.
J'ai testé avec un programme simple un cycle de __"enrouler-tirer-dérouler-se repositionner"__. La catapulte pouvait tirer et se repositionner indéfiniment. Il reste à calculer le temps d'enroulage de l'élastique pour controler précisément la longueur du tir. 
Puis on a fini par positionner la plateforme principale sur la plateforme pivot, où les équerres supportaient le poids.
![Pivot+catapulte](https://user-images.githubusercontent.com/45574003/51338832-28468f80-1a8b-11e9-97e8-5e72e4a0757b.jpg)
On a testé et la plateforme pouvait pivoter doucement, il reste à améliorer le tout.

## Cinquième séance (4/02/19) ##
On a dédié la séance à faire des tests par rapport au module distance, au tir et au pivot.
J'ai commencé par installer 2 vis qui servent à orienter le lanceur et assurer que le tir soit droit.
![Vis_lanceur](https://user-images.githubusercontent.com/45574003/52217860-a384af80-2899-11e9-8529-fb8df253ca1c.jpg)
On a ensuite testé notre programme avec le graphique (enroulement de l'élastique en fonction de la distance de tir)
Donc on a tout réglé et notre catapulte est fiable pour tirer à la distance voulue.

https://youtu.be/trpTCh9YJEE

Mais on a dû abandonner pour l'instant le pivot. Le moteur est trop faible pour supporter toute la catapulte. Donc la catapulte ne pivotera pas pour l'instant.
![Test_distance](https://user-images.githubusercontent.com/45574003/52217918-c0b97e00-2899-11e9-8c44-325fb5f1aeeb.jpg)


Ensuite on a commencé (en avance sur le planning) le rechargement automatique. Donc on a pris et coupé une planche de bois puis fait un trou pour mettre le tube où les billes seront stockées.

![Planche_recharge1](https://user-images.githubusercontent.com/45574003/52562228-2a87d980-2dfe-11e9-83e9-6d12317b3396.jpg)


## Sixième séance (11/02/19) ##
On a passé la séance à créer le système de rechargement de bille. On est passé par plusieurs systèmes.

Premièrement on voulait faire tomber la bille depuis le côté. Mais on s'est rendu compte que ca ne marcherait jamais.
![Planche_recharge1](https://user-images.githubusercontent.com/45574003/52562228-2a87d980-2dfe-11e9-83e9-6d12317b3396.jpg)

Alors on a pensé à faire tomber la bille directement depuis le dessus. On a donc coupé les planches de bois et le tube en métal afin que le servo moteur soit au-dessus. On a testé mais l'incertitude est trop grande car la bille en tombant de 20 centimètres n'arrivait pas exactement au même endroit.
![Rechargement_2_01](https://user-images.githubusercontent.com/45574003/52583547-2674af80-2e30-11e9-8cac-a0dcdfe226bd.jpg)
![Rechargement_2_02](https://user-images.githubusercontent.com/45574003/52583825-d5b18680-2e30-11e9-83b5-0d7d8ce34b17.jpg)
![Rechargement_2_03](https://user-images.githubusercontent.com/45574003/52584180-b404cf00-2e31-11e9-8f30-67cf6c1c8d56.jpg)

Finalement, on a choisi de faire tomber la bille depuis le dessus, mais quand la bille précédente vient d'être tirée. Ainsi le lanceur est positionné au plus haut, la bille ne tombe que de quelques centimètres. Et on a mis un petit bout de papier qui sert d'entonnoir.
![Rechargement_final_01](https://user-images.githubusercontent.com/45574003/52584271-e31b4080-2e31-11e9-822e-da887eccfde7.jpg)
![Rechargement_final_02](https://user-images.githubusercontent.com/45574003/52584443-62a90f80-2e32-11e9-9795-0770c6c319b1.jpg)


Vidéo Youtube : https://youtu.be/j8lAM7015Ho



## Septième séance (25/02/19) ##
Maintenant qu'on avait réussi la recharge automatique, on a passé la séance à fixer tous les fils et la carte arduino avec la projet pour voir si tout marche ensemble. On mettra le tout au propre ensuite.
![Branchements_test](https://user-images.githubusercontent.com/45574003/53346820-17a1f880-3918-11e9-918b-b5740015e11e.jpg)

Puis on a testé le tout avec le programme. La catapulte mesure la distance, et tire dans le panier, tout en rechargeant la bille.
![Test_poubelle_recharge](https://user-images.githubusercontent.com/45574003/53346860-30aaa980-3918-11e9-8dfd-9f0e3f8eeddf.jpg)

Ensuite on a testé la catapulte avec le bluetooth. Le téléphone permet de faire feu. Quand on appuie sur un bouton, la catapulte mesure la distance du panier, tire et recharge. De plus, la distance mesurée est affichée sur le téléphone.
![Bluetooth](https://user-images.githubusercontent.com/45574003/53348598-aa906200-391b-11e9-983a-b9ef8bb4e2df.jpg)

Vidéo Youtube : https://youtu.be/rttM7mmnA_w



## Huitième séance (04/03/19) ##
Aujourd'hui on a fini le projet. 
J'ai passé 1h30 à faire le "cable management". J'ai fixé avec de la pâte adhésive la carte arduino, le module bluetooth, et tous les fils afin que ce soit propre. Les fils ne dépassent plus n'importe comment.

![Cable2](https://github.com/GrosGuillaume/Catapulte/issues/31)

Ensuite on a eu un problème de court-circuit, dont on a perdu un peu de temps à trouver la solution. 
Une fois le problème résolu, on a testé la catapulte finale. Le module distance  ne marchait pas, il affichait la distance uniquement à 0. On pense que la catapulte ne marche que si elle branchée à un ordinateur. La prise secteur semble empêcher le fonctionnement.

Donc on a continué avec l'ordinateur. On a filmé la démo du projet pour l'oral final. 
Puis j'ai fini par mettre sur le github les programmes qui testent les éléments de la catapulte individuellement (moteurs, bluetooth, servo, module distance).

Vidéo Youtube Démo : https://www.youtube.com/watch?v=BatLk3GYbJI&t=18s
