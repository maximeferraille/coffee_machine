
Algorithme : Machine à Café

Variables :

café = objet
argent = Les sous rentrés par l'utilisateur
monnaie = argent - prix boisson
sucre = 0;

Début :

      - Mettre de l'argent
      on  (clic bouton 1€)
          alors {argent += 1}
      on  (clic bouton 50c)
          alors {argent += .5}
      on  (clic bouton 20c)
          alors {argent += .2}

          Afficher 'argent'

      - Annuler l'action

      on (clic bouton : reset)
          {argent = 0}

      - Selectionner le sucre
      sucre = 0;
      on (clic +)
          alors { sucre += 1

            on (clic -)
            if (sucre >= 1)
              alors { sucre -= 1}
          }

      - Séléctionner une boisson

      on (clic sur une boisson)
          si (objet.prix <= argent) { On peut servir la boisson + rendre la monnaie

          // Servir la boisson

          - Un goblet tombe
            Afficher sur écran LCD "Voici un gobelet"

        

          switch (objet.type)
              café {on verse du café LED VIOLET}
              chocolat {on verse du chocolat LED JAUNE}

          - Le type se verse

          switch (objet.liquide)
              eau {
              on verse de l'eau LED BLEU durant objet.durée }
              lait LED BLANCHE {on verse de lait durant objet.durée}
              eau + lait LED ROSE {on verse les deux durant objet.durée}

          - Le liquide se verse

          si (sucre != 0)
              alors {on a une touilette !!!!}
                        et la quantité de sucre
                        afficher sur ecran LCD "Voici une touillette"

          // Rendre l'argent

          Afficher "argent - objet.prix"

          // FIN

          LED VERTE 
          Afficher sur ecran LED "Servez-vous !"
           }
           
          else {Afficher "Ajouter objet.prix-argent"}
