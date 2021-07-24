def proc(v):
    #print(v) #pour une procédure
    return v # pour une fonction
"la distinction entre une fonction et une procédure est que la procédure ne retourne rien et la fonction retourne quelque chose"
"Mais en python la procédure et la fonction non pas une très grande différence carla procédure renvoie None"
    
n = proc(5)
print(n)
"Quand on utilise une fonction et que nous retournons quelque chose automatiquement on retourne un objet"

#on peut retourner une liste
def proc(v): 
    return [5, 3, 2] #liste à retourner

n = proc(5) # appel de la fonction ou de la procédure
print(n) # pour afficher n
print(type(n)) # pour donner le type de n

#on peut faire du developpement en statique qui va nous permettre d'obtenir ce qu'on avait précédemment
def proc(v: int) -> list:
    return [5, 3, 2]
n = proc(5)
print(n)
print(type(n))
"Mais cela ne sert qu'à juste augmenter la visibilité du code en python c'est tout"

"il existe trois types d'arguments (1: mot-clé, 2: par défaut et 3: arguments groupés)"
n =  proc(v=5) #argument mot-clé
"on donne le nom du paramètre et on donne sa valeur"
"on utilise çà pour les cas ou il y a de nombreux paramètres"
def proc(x, y) -> list:
    return x, y #on returne un tuple un premier élément x et un second y
n = proc(y = 2, x = -1) #si on fait proc(2, -1) on aura x = 2 et y = -1
print(n)

"cas d'un argument par défaut sont ceux qui sont déclaré avec un argument par défaut"
def proc(x, y=-1) -> list: #on ne doit pas mettre d'argument par defaut avant x
    return x, y
n = proc(2)
print(n)

"cas d'un arguments groupés si on ne sait pas le nombre d'argument à mettre dans notre fonction"
def proc(*values): #on peut y ajouter une valeur par defaut def proc(*values, y=-1)
    print(type(values)) #type de valeur
    return sum(values) #ici avec la valeur par defaut return sum(values) - y
n = proc(2, 5, 7, -1, 9)
print(n)

"cas d'utilisation très courant"
def proc(my_list=None): #cause de problème de réference donc on doit ajouter None
    """
    Affiche le type de l'argument et on retourne l'argument en paramètre
    arguments : arguments nommés quelque soit le type
    return: dictionnaire
    """
    
    if my_list is None:
        my_list = []
    my_list.append(5)
    return my_list
n = proc()
print(n)

"Autre notation"
def proc(**kw):
    print(type(kw))
    return kw
n = proc(b = 5, a = 3, z = 5)
print(n)

"on appelle fonction imbriqué une fonction dans une autre fonction"
def proc(**kw):
    def func():
        print("appel de func")
    print("appel de proc")
    func()
proc()

"pour exécuter une action on crée une fonction"
"complexité: création d'un CallBack(objet fonction)"
def proc(**kw):
    def func():
        print("appel de func")
    print("appel de proc")
    return func
n = proc()
print(n)

""
def proc(a, b, c):
    s = a + b + c
    def func():
        return f"appel de func: {s}" #on retire le print pour ne pas avoir l'affichage de None
    print("appel de proc")
    return func
n = proc(5, 3, 1)
print(n()) #pour l'exécuter on doit mettre n() et non n dans le print
print(type(n))

"Décorateur: appel supplémentaire lorqu'une fonction,une classe est appel"
#@decorateur()
#def fonction_decoree(): 
#   pass
#"equivalent"
#fonction_decoree = decorateur(fonction_decoree)