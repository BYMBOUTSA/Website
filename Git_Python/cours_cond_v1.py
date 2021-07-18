# if expression:
#       suite_si_vrai

warn = False
system_load = 5
cond =  (not warn and system_load >= 10) #si il n'y a pas de warning et que le système load est supérieur ou égal à 10
if cond: 
    print("WARNING: Perte de ressource") #alors on a ce message
    warn = True
    
elif not warn and system_load < 10:
    print("Pas de soucis")

''' else:
    print("Tout va bien")   '''
    

"Différentes Boucles "
# while expression:
#       suite_a_repeter

#cas d'une boucle pas infinie
count = 0
while count < 9:
    print(f"indice: {count}")
    count += 1
    
#cas d'une boucle infinie
while True:
    User = input("Donnez moi votre nom: ") #on demande à l'utilisateur d'entrée son nom
    if not User: #si l'utilisateur ne rentre pas de nom
        break #on sort

print("Programme terminé !") #on affiche 

#boucle for
s = "Hello Charly !"
for c in s:
    print(c, end=" ") #ici ce qu'on met dans end est le fait de mettre un espace entre chaque caractère de notre chaîne 
print()

#cas ou on veut faire du comptage
for i in range(5, 25, 2): # (5, 25, 2) avec 2 qui est le step qui est le pas
    print(i, end=" ")
print()