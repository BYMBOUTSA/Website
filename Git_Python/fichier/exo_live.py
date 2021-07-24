# Le fichier notes.txt contient les notes obtenues par des étudiants pour le cours de Python. Chaque ligne du fichier ne contient qu'une note.
# Téléchargez le fichier notes.txt et enregistrez-le dans votre répertoire de travail. N'hésitez pas à l'ouvrir avec un éditeur de texte pour voir à quoi il ressemble.
# Créez un script Python qui lit chaque ligne de ce fichier, extrait les notes sous forme de float et les stocke dans une liste.
# Terminez le script en calculant et affichant la moyenne des notes avec deux décimales.

# ------------------------------------------

# Créez un script Python qui lit chaque ligne de ce fichier, extrait les notes sous forme de float et les stocke dans une liste.
# Le script réécrira ensuite les notes dans le fichier notes2.txt avec une note par ligne suivie de « recalé » si la note est
#  inférieure à 10 et « admis » si la note est supérieure ou égale à 10. Toutes les notes seront écrites avec une décimale.
#  À titre d'exemple, voici les 3 premières lignes attendues pour le fichier notes2.txt

# ------------------------------------------

# 13.5 admis
# 17.0 admis
# 9.5 recalé

# ------------------------------------------
with open("fichier/notes.txt", mode= 'r') as f:
    for line in f:
        print(line.rstrip('\n'))
        


if notes > 10:
    print("admis")
elif notes < 10:
    print("recalé")        
        
