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

'''  
else:
    print("Tout va bien")  '''  