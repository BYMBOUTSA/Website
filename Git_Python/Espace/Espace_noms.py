"pour importer un module si on veut chercher un fichier qui se nomme module.py"
import sys
sys.path

"L'expression from-import"
from random import randint

"L'expression multiligne"
from random import (
    randint,
    randrange,
    sample,
    triangular,
)

"importation étendue avec as"
"""from string import ascii_lowercase as alphabet
alphabet_uppercase = alphabet.uppercase()"""

"Espace de noms des modules"
import math
pi = math.pi

"Porté des variables"
var = 5
def func():
    var = 7
func()

"si on veut avoir var = 7 à la fin"
var = 5
def func(v):
    v = 7
    return v
var = func(var)

"autre manière de faire"
var = 5
def func():
    global var
    var = 7

"Packages"
'un repertoire(ex.test)'
'Un fichier'
'__init__.py'
'Des fichiers python' 
type.py
'un fichier(ou module) nommé'
'mod.py'
'from package.mod import function'

