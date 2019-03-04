Rapport des séances
== 

Avant les premières Séance
-

* Choix du lanceur  
L'éléctroaimant est trop faible pour envoyer une bille a plus d'un mètre et acheter un autre éléctroaimant couterait trop chère 
(environ 80€), on change donc de plan.  
On décide donc d'utiliser un élastique qui sera tiré par un moteur pas à pas.  
On a placé un embout au moteur pas à pas où s'enroulera l'élastique et on a fixé le tout sur un plaque en bois.  

Séance 13/12/2018
-

* Ecriture du cahier des charges et du planning.  
Ils sont disponibles dans le répertoire Catapulte.  
  
* Montage de la liaison entre le lanceur et le moteur pas à pas.   
Le moteur pas à pas était déjà mis sur la planche, on a installé une plaque en bois pour le lanceur et on a mis une liaison pivot entre les deux plaques. Il nous a fallu plusieurs élastique a la chaine pour que le lanceur se repose sur le sol.  
![lanceur](https://user-images.githubusercontent.com/45574003/49941201-20228f80-fee2-11e8-9116-fdc5400576f7.jpg)  
_Test_: on arrive a lancer une boule de papier à 3m.  
C'est plus que suffisant, après le développement de l'armature on fera les mesures pour la precision.  
  
`prochaine séance: armature et début du programme`  

Séance 20/12/2018
-

* Changement de la plaque qui soutient le moteur pas à pas, on a choisit une plaque plus légère pour etre sur de pouvoir tourner la structure plus tard.  
![plaque](https://user-images.githubusercontent.com/45574003/50400640-8338df80-0788-11e9-98e1-277076fa238b.jpg)  
De plus on a fixé le tout sur une planche en bois qui servira de support et maintenir un angle précis entre la plaque et le sol.
![planche](https://user-images.githubusercontent.com/45574003/50378810-05b38900-063b-11e9-86af-da5ded0d8f53.jpg)  

* Ecriture du programme, on arrive a faire marcher les 3 moteurs pas à pas chacuns leurs tour tout en mesurant la distance. On a juste fait faire un tour a chaque moteur pas à pas. Il nous faudra mesurer la distance d'envoie en fonction des tours du moteur pas à pas.  
![moteurs](https://user-images.githubusercontent.com/45574003/50400621-4836ac00-0788-11e9-8d88-8a11e3deda06.jpg)  

`prochaine séance: incorporer le bluetooth au programme et finir l'armature (faire la rotation de la planche)`  

Séance 10/01/2019  
-  

* Ecriture du programme visant a faire marcher le bluetooth avec le reste, il a fallut changer des PINs d'un moteur pas à pas avec ceux du bluetooth et du module son.  

* Ecriture de l'algorithme du programme lors d'un fonctionnement autonome (visé, tiré et recharge), l'algorithme du fonctionnement en bluetooth sera fait plus tard.  

* On a fait des tests avec la catapulte, il y a le moteur pas à pas qui bloque la plateforme tenant la bille, quand celui-ci débloque la plateforme il dévie le tire. On prévoit d'ajouter de quoi tenir la direction de la bille.  
![blocage](https://user-images.githubusercontent.com/45574003/50964807-81815280-14d0-11e9-8f80-e5afdae7afa0.jpg)  

`prochaine séance: ecrire le programme du fonctionnement autonome et faire la rotation de la planche`  

Séance 17/01/2019  
-  

* Fin de l'écriture du programme de la catapulte en fonctionnement autonome, celui-ci reprend donc l'algorithme fait la séance précendante, pas d'erreur de compilation il faut encore le tester.  

* Contruction de la liaison en le corps de la catapulte et le sol, on a mis un moteur pas à pas en dessous, celui-ci fixé sur une planche, avec des équerre pour tenir la structure. La catapulte peut maintenant se diriger horizontalement. Cependant la catapulte a du mal a tournée et donc on prevoit plusieurs solution pour améliorer la rotation. Le module distance à été mis sur le devant de la catapulte avec du velcro.  
![rotation](https://user-images.githubusercontent.com/45574003/51338832-28468f80-1a8b-11e9-97e8-5e72e4a0757b.jpg)  

* Tests au niveau de la distance du lancé par rapport a l'enroulement de l'élastique.  

`prochaine séance: amélioré la rotation de la catapulte et faire la recharge`  

Séance 04/02/2019
-  

* Série de lancers en regardant la distance en fonction des tours du moteur pas à pas. A l'aide d'un algorithme de regression linéaire, création d'un modèle pour connaitre le nombre de tours a faire avec le moteur en fonciton de la distance à laquelle il faut tirer la bille.  
![graphique](https://user-images.githubusercontent.com/45574003/52116524-a2d9e800-2611-11e9-914d-5da5da1a9df0.JPG)  

* Tests pour vérifier le modèle, il lance un peu loin lorsque le panier est loin et il n'arrive pas a toucher le panier quand il est proche. On a corriger les coefficents de la droite pour coller a l'expérience.  
![tests](https://user-images.githubusercontent.com/45574003/52217918-c0b97e00-2899-11e9-8c44-325fb5f1aeeb.jpg)  

* Tests de l'algorithme en entier, la rotation de la catapulte ne marche pas, le moteur n'est pas assez puissance, on met de coté la rotation et on avance le reste en attendant un moteur plus puissant.

`prochaine séance: faire la recharge`

Séance 11/02/2019
-  

* On a pris un tube dans lequel on a fait une fente dedans pour pouvoir passer l'embout d'un servo moteur et ainsi bloqué les billes qui passaient dedans. Ensuite on a fait tenir ça sur des planches en bois sur élevé pour ne pas toucher la catapulte quand elle tire, mais c'était pas précis et cela ne marchait pas.  
* On a donc fait une plateforme en haut de la catapulte pour la rechager alors que la catapulte est au repos. Et de par cette plateforme on a fait passer notre tube, mais on arrivait toujours pas a mettre la bille dans la catapulte a chaque coup.  
* On a fini par avancer la platforme pour essayer a l'aide d'une "bavette" de recharger la catapulte quand elle est en haut ( après avoir tiré ). La nouvelle technique marche maintenant a tous les coups.  
![recharge](https://user-images.githubusercontent.com/45574003/52584271-e31b4080-2e31-11e9-822e-da887eccfde7.jpg)  

`prochaine séance: essayer de faire marcher la rotation et mettre le module bluetooth`

Séance 25/02/2019
-  

* On a mis la nouvelle carte arduino et on a tout fait marcher ensemble. On a essayer de faire marcher la rotation en posant la catapulte sur sa fixation et faisant attention de ne pas la faire reposer sur les equerres qui tiennent la catapulte. Au final la catapulte arrive légèrement a tournée mais la précision est moindre a grande distance. On verra a la prochaine séance si on arrive a mettre une alimentation plus puissante sur le moteur pas à pas.    

* Bluetooth incorporé, il sert donner l'ordre de tire de la catapulte et reçoit la distance qu'il y a entre la catapulte et la cible.   
![Bluetooth](https://user-images.githubusercontent.com/45574003/53348598-aa906200-391b-11e9-983a-b9ef8bb4e2df.jpg)  

`prochaine séance: tester si il reste des corrections a effectuer`  

Séance 04/03/2019
-  

* On a rangé tout les cables et les différents modules a l'aide de pastilles adhésives.  
![Catapulte](https://user-images.githubusercontent.com/45574003/53745632-a4f8c600-3e9f-11e9-9728-81b9944cca2d.jpg)  

* On a filmé un tire avec rechargement puis un deuxième en changeant le panier de place.  

* On a rangé le github avec un dossier informatique où l'on a mis tout ce qui concerne les algorithmes et les programmes.  

* On a commencé le rapport de fin de projet.  

