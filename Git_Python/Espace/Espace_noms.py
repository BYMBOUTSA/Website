"pour importer des modules si on veut chercher un fichier qui se nomme module.py"
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
from string import ascii_lowercase as alphabet
alphabet_uppercase = alphabet.uppercase()