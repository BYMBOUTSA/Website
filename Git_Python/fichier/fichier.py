# Mauvaise pratique pour ouverture de fichier texte

f = open("fichier/data.csv", mode='r')

print(f)
f.close()

#Bonne pratique

with open("fichier/data.csv") as f:
    #print(f.readlines()) #ici on aura \n à la fin 
    "Pour résoudre le problème \n à la fin"
    """ lines = [line.rstrip('\n') for line in f.readlines()]
    for line in lines:
        print(line)
 """
 
    "Nous pouvons aussi le faire de cette manière"
    """ for line in f:
        print(line.rstrip('\n')) """
        
    "ou encore"
    """ lines = map(str.rstrip, f.readlines())
    for line in lines:
        print(line) """
    
    "ou bien"
    print(f.read()) #pour afficher directement l'ensemble du fichier de manière instantané
        
    
 