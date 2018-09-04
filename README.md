# Coffee Machine - Les 3 Mousquetaires

- Azémard Elisabeth (Athos)
- Duval Pauline (Aramis)
- Ferraille Maxime (Porthos)
- Schlosser Vincent (Dartagan)

## Environnement technique

Arduino. Choisi pour avoir un rendu physique et non pas seulement une interface web.


## Construction de l'algorithme

### Paiement de la boisson
Pour ajouter de l'argent dans la machine, on appuie sur un bouton : 1€, 50c ou 20c. Chaque clic incrémente la valeur affichée sur l'écran LCD de l'Arduino.
Une fois l'argent "inséré", on appuie sur le bouton de la boisson désirée. Si on n'a pas mis suffisamment d'argent, un message s'affiche sur l'écran LCD : "ajouter des pièces".

### Service de la boisson
Si les conditions de paiement sont valides, le gobelet tombe (LED qui s'allume). Des LEDs s'allument pendant un certain temps selon le type de boisson (café, chocolat), le liquide nécessaire à son élaboration (eau et/ou lait) et la durée de distribution (café long, court, etc.).

### Rendu de la monnaie
Le calcul est fait pour savoir si la monnaie "insérée" au départ excède le prix de la boisson ou non, auquel cas la monnaie à rendre s'affiche sur l'écran LCD, en même temps que la boisson est distribuée (c'est à dire que les LED de l'Arduino s'allument).


