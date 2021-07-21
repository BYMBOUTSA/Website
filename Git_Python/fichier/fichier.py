# Mauvaise pratique pour ouverture de fichier texte

f = open("fichier/data.csv", mode='r')

print(f)
f.close()

#Bonne pratique

with open("fichier/data.csv") as f:
    #print(f.readlines()) #ici on aura \n à la fin 
    "Pour résoudre le problème \n à la fin"
    """ lines = [line.rstrip('\n') for line in f.readlines()]
    "Pour lire un fichier
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
        
    
    """ ma_liste = ["5", "3", "2"]
    for element in map(int, ma_liste):
        print(type(element)) """
        
    #pour afficher une seule ligne
    with open("fichier/data.csv") as f:
        print(f.readline())
        
    #pour afficher l'ensemble des lignes
    with open("fichier/data.csv") as f:
        ''' line = f.readline()
        while line:
            print(line.rstrip)
            line = f.readline()  '''
            
        line = next(f).rstrip()
        print(line)
        line = next(f).rstrip()
        print(line)
        
        
    #Pour écrire dans un fichier
    s = ["abcd", "efgh", "ijkl", "mnop"] #On commence à mettre ce que l'on veut écrire
    
    #on cmmence d'abord par les ajouter à la suite
    #with  open("fichier/data.csv", mode= 'a') as f:
        #for elem in s: #pour chaque élément dans la liste s
            #f.write(elem + '\n') #on demande au fichier d'écrire les éléments 
    
    #deuxième méthode pour ajouter
        #f.writelines('\n'.join(s))
        
    #Maintenant si on veut supprimer les éléments qui était dans le fichierdatetime A combination of a date and a time. Attributes: ()
    with  open("fichier/data.csv", mode= 'w') as f: #il suffit juste d'utiliser mode write ('w') et non append ('a')
        f.writelines('\n'.join(s))