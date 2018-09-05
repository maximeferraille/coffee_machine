# Coffee Machine - Les 3 Mousquetaires

## Équipe
- Azémard Elisabeth (Athos)
- Ferraille Maxime (Porthos)
- Duval Pauline (Aramis)
- Schlosser Vincent (Dartagan)

## Environnement technique
Arduino. Choisi pour avoir un rendu physique et non pas seulement une interface web.

## Répartition des tâches
- Maxime : montage de l'Arduino
- Pauline : Algorithme / Programmation
- Vincent : Algorithme / Programmation
- Elisabeth : Algorithme / Documentation

## Étapes
### A - Construction de l'algorithme
#### Sélection de la boisson
En premier lieu on sélectionne la boisson que l'on veut, au moyen d'un bouton (allumage LED RGB). Le prix s'affiche sur l'écran LCD.

#### Choix du sucre
Tant qu'on n'a pas payé, on peut appuyer sur "+" ou "-" (avant ou après la sélection de la boisson) pour choisir la quantité de sucre souhaitée. Le choix se fait entre 0 et 10 (au-delà, il affiche un message : "attention les artères !").

#### Paiement de la boisson
Pour ajouter de l'argent dans la machine, on appuie sur un bouton : 1€, 50c ou 20c. Tant qu'on n'a pas mis suffisamment d'argent, un message s'affiche sur l'écran LCD : "ajouter encore Xc".

#### Service de la boisson
Si les conditions de paiement sont remplies (assez ou plus d'argent "inséré" que le prix indiqué), le gobelet tombe (LED qui s'allume). Deux LEDs s'allument : l'une pour indiquer le type de boisson (café, chocolat) et l'autre pour indiquer le liquide nécessaire à son élaboration (eau et/ou lait). La durée de distribution dépend de la taille de la boisson (café long, court, etc.).

#### Rendu de la monnaie
Le calcul est fait pour savoir si la monnaie "insérée" au départ excède le prix de la boisson ou non, auquel cas la monnaie à rendre s'affiche sur l'écran LCD, en même temps que la boisson est distribuée (c'est à dire que les LED de l'Arduino sont allumées).

#### Touillette
À la fin de la distribution de la boisson, si la boisson est sucrée, une touillette tombe.
-> Voir l'algorithme dans le wiki

### B - Montage de l'Arduino

### C - Reading the Manual - Formation express Arduino pour Pauline, Vincent et Elisabeth

### D - De l'algorithmie à la programmation
1. Création des classes (Pauline)
2. Déclaration des variables au bon type (Elisabeth)
3. Traduction de l'algorithme en Arduino
