# Coffee Machine - Les 3 Mousquetaires

- Azémard Elisabeth (Athos)
- Duval Pauline (Aramis)
- Ferraille Maxime (Porthos)
- Schlosser Vincent (Dartagan)

## Environnement technique

Arduino. Choisi pour avoir un rendu physique et non pas seulement une interface web.


## Construction de l'algorithme

### Mettre de l'argent
1. $argent = argent + $entrée (1, 0.5, 0.2)
2. Afficher $argent

### Servir boisson
3. clic boisson (1, 2, 3 ou 4)
4. récupération de l'objet sélectionné
5. si objet.prix ≥ $argent, poursuivre
    sinon, "ajouter des pièces".
6. faire tomber le gobelet (LED)
7. $argent = $prix - $argent
8. afficher $argent ( = rendu de la monaie pendant que la boisson coule)
