class calcComb():

    def __init__(self, stringa):

        self.__N = len(stringa)
        self.__stringa = stringa
        self.__listStringa = list(stringa)
        self.__anagrammi = anagrammi(self.__stringa)

    def get_stringa(self):
        return self.__stringa

    def get_listStringa(self):
        return self.__listStringa

    def setStringa(self):
        '''
        modificare questo metodo in modo da verificare la coerenza delle variabili di
        istanza presenti
        '''
        return 0

    def charRipetuti(self):
        '''
        questo metodo deve creare un dictionary all'interno del quale la chiave deve essere
        il singolo carattere, il valore deve essere il numero di ripetizioni di quel carattere
        
        esempi di dictionary sono presenti nel file elementi_base/dictionary.py
        '''

    def cerca(str):
       str= "pop"  
it = 'words.italian.txt'  

f = open(it, 'r')
line = f.readline()

for line in f: 
 
    if str == line[:-1]:  
        print("vero")
        pass

    def fattoriale(n):
        n=int(input('5'))
        f=1
        for i in range(1,n+1):
            f*=i
            print(n)

      
       

    def coeffBinom(n, k):
        ''' 
        implementare la formula del coefficiente binomiale a partire dal fattoriale
        questo metodo può essere evitato se ri richiama una delle funzioni built in
        delle librerie standard
        '''
        pass

    def anagrammi(self):
       from itertools import permutations




lettere = list("casa")


permutazioni = list(permutations(lettere))


temp = ''
anagrammi = []



for i in permutazioni:
    for carattere in i:
       
        temp += carattere 

    anagrammi.append(temp)

    temp = ''

print(anagrammi)

        pass
    
    def confUtil(self):
        '''
        confUtil mette insieme diversi metodi basilari, lo scopo è:
        a partire dalla lista di tutti gli anagrammi, verifica parola per parola la sua
        presenza all'interno del file delle parole di senso compiuto, cancellando le altre.
        si consiglia l'utilizzo di anagrammi e cerca, presenti nel repo e da trasformare in metodi.
        è possibile in una seconda versione la ricefrca di parole in altre lingue. 
        '''
        pass

    # PERMUTAZIONI

    def nPermutSenzaRip(self):
       
        return 0

    def nPermutConRip(self):
        '''
        restituire il numero di permutazioni CON ripetizione
        '''
        return 0

    def permutSenzaRip(self):
        '''
        generare e restituire la lista di permutazioni SENZA ripetizione
        '''
        return 0

    def permutConRip(self):
        '''
        generare e restituire la lista di permutazioni CON ripetizione
        '''
        return 0

    # DISPOSIZIONI

    def nDispSemplSenzaRip(self):
        '''
        restituire il numero di disposizioni semplici SENZA ripetizione
        '''
        return 0

    def nDispSemplConRip(self):
        '''
        restituire il numero di disposizioni semplici CON ripetizione
        '''
        return 0

    def dispSemplSenzaRip(self):
        '''
        generare e restituire la lista delle disposizioni semplici SENZA ripetizione
        '''
        return 0


    def dispSemplConRip(self):
        '''
        generare e restituire la lista delle disposizioni semplici CON ripetizione
        '''
        return 0

    # COMBINAZIONI

    def nCombSemplSenzaRip(self):
        '''
        restituire il numero delle combinazioni SENZA ripetizione
        '''
        return 0

    def nCombSemplConRip(self):
        '''
        restituire il numero delle combinazioni CON ripetizione
        '''
        return 0

    def combSenzaRip(self):
        '''
        generare e restituire la lista delle combinazioni SENZA ripetizione
        '''
        return 0


    def combConRip(self):
        '''
        generare e restituire la lista delle combinazioni CON ripetizione
        '''
        return 0

    # PROBABILITA'

    def probConfUtil(self):
        pass
