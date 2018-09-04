# Coffee Machine - Les 3 Mousquetaires

## Équipe
- Azémard Elisabeth (Athos)
- Duval Pauline (Aramis)
- Ferraille Maxime (Porthos)
- Schlosser Vincent (Dartagan)

## Environnement technique
Arduino. Choisi pour avoir un rendu physique et non pas seulement une interface web.

## Répartition des tâches
- Maxime : montage de l'Arduino
- Pauline : Algorithme / Programmation
- Vincent : Algorithme / Programmation
- Elisabeth : Documentation / Algorithme

## Étapes
### A - Construction de l'algorithme
#### Paiement de la boisson
Pour ajouter de l'argent dans la machine, on appuie sur un bouton : 1€, 50c ou 20c. Chaque clic incrémente la valeur affichée sur l'écran LCD de l'Arduino.
Une fois l'argent "inséré", on appuie sur le bouton de la boisson désirée. Si on n'a pas mis suffisamment d'argent, un message s'affiche sur l'écran LCD : "ajouter des pièces".

#### Choix du sucre
Avant de sélectionner une boisson, on peut appuyer sur "+" ou "-" (avant ou après le paiement) pour choisir la quantité de sucre souhaitée. Le choix se fait entre 0 et 10 (au-delà, il affiche un message : "attention les artères!").

#### Service de la boisson
Si les conditions de paiement sont valides, le gobelet tombe (LED qui s'allume). Des LEDs s'allument pendant un certain temps selon le type de boisson (café, chocolat), le liquide nécessaire à son élaboration (eau et/ou lait) et la durée de distribution (café long, court, etc.).

#### Rendu de la monnaie
Le calcul est fait pour savoir si la monnaie "insérée" au départ excède le prix de la boisson ou non, auquel cas la monnaie à rendre s'affiche sur l'écran LCD, en même temps que la boisson est distribuée (c'est à dire que les LED de l'Arduino s'allument).

#### Touillette
À la fin de la distribution de la boisson, si la boisson est sucrée, une touillette tombe.
-> Voir l'algorithme dans le wiki

### B - Montage de l'Arduino

### C - Reading the Manual - Formation express Arduino pour Pauline, Vincent et Elisabeth

### D - De l'algorithmie à la programmation
1. Création des classes (Pauline)
2. Déclaration des variables au bon type (Elisabeth)
3. Traduction de l'algorithme en Arduino

