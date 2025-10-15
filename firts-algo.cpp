Algorithme MoyenneTroisNombres
Variables:
    a, b, c : entiers
    moyenne : réel

Début
    // Saisie des trois nombres
    Ecrire("Entrez le premier entier a : ")
    Lire(a)
    Ecrire("Entrez le deuxième entier b : ")
    Lire(b)
    Ecrire("Entrez le troisième entier c : ")
    Lire(c)
    
    // Calcul de la moyenne
    moyenne ← (a + b + c) / 3
    
    // Affichage du résultat
    Ecrire("La moyenne de ", a, ", ", b, " et ", c, " est : ", moyenne)
Fin



Algorithme ComparerDeuxNombres
Variables:
    a, b : entiers
    plusPetit : entier

Début
    // Saisie des deux nombres
    Ecrire("Entrez le premier entier a : ")
    Lire(a)
    Ecrire("Entrez le deuxième entier b : ")
    Lire(b)
    
    // Comparaison et attribution
    Si a < b Alors
        plusPetit ← a
    Sinon
        plusPetit ← b
    FinSi
    
    // Affichage du résultat
    Ecrire("Le plus petit entre ", a, " et ", b, " est : ", plusPetit)
Fin



Algorithme PairOuImpair
Variables:
    a : entier

Début
    // Saisie du nombre
    Ecrire("Entrez un entier a : ")
    Lire(a)
    
    // Vérification de la parité
    Si a % 2 = 0 Alors
        Ecrire(a, " est un nombre pair")
    Sinon
        Ecrire(a, " est un nombre impair")
    FinSi
Fin



Algorithme NombrePremier
Variables:
    a, i : entiers
    estPremier : booléen

Début
    // Saisie du nombre
    Ecrire("Entrez un entier a : ")
    Lire(a)
    
    // Cas particuliers
    Si a < 2 Alors
        estPremier ← Faux
    Sinon
        estPremier ← Vrai
        
        // Vérification des diviseurs
        Pour i ← 2 à racine_carrée(a) Faire
            Si a % i = 0 Alors
                estPremier ← Faux
                Sortir  // On quitte la boucle dès qu'on trouve un diviseur
            FinSi
        FinPour
    FinSi
    
    // Affichage du résultat
    Si estPremier = Vrai Alors
        Ecrire(a, " est un nombre premier")
    Sinon
        Ecrire(a, " n'est pas un nombre premier")
    FinSi
Fin
