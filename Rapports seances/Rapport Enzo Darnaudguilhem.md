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
