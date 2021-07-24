a = 5
b = '2'
print(a * b)

#exemple
while True:
    value = input("Entrez une valeur: ")
    try:
        value = int(value)
    except ValueError:
        print(f"Cette chaîne: {value} ne peut pas êre caster en entier")
    else:
        print(f"le nombre utilisateur est: {value}")
        
    "on peut faire aussi l'exemple précédent de cette façon"
    value = input("Entrez une valeur: ")
    try:
        value = int(value)
    except ValueError:
        print(f"Cette chaîne {value} ne peut pas être castrer en entier")
        import sys
        sys.exit()
        print("l'entier est {}".format(value))
        
        
        "si on veut maintenant s'intéresser au type"
        value = input("Entrez une valeur: ")
        try:
            value = int(value)
        except ValueError:
            print("le type de votre valeur est {}".format(type(value)))
        print("le type de votre valeur est: {}".format(type(value)))
        
        
        "si on veut transformer cette valeur en entier"
    value = -1
    number = -1
    while True:
        value = input("Entrez une valeur: ")
        number = input("Entrer la valeur à diviser: ")
        try:
            value = int(value)
            number = int(number)
        except ValueError:
            print(f"Erreur de valeur pour {value} ou {number}")
            continue
        try:
            value / number
            break
        except ZeroDivisionError:
            print(f"la valeur {value} ne peut pas être divisé par 0")
            
    print(f"la valeur est : {value/number}")