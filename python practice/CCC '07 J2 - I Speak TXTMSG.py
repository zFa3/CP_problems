dct = {
    "CU" : "see you",
    ":-)" : "I'm happy",
    ":-(" : "I'm unhappy",
    ";-)" : "wink",
    ":-P" : "stick out my tongue",
    "(~.~)" : "sleepy",
    "TA" : "totally awesome",
    "CCC" : "Canadian Computing Competition",
    "CUZ" : "because",
    "TY" : "thank-you",
    "YW" : "you're welcome",
    "TTYL" : "talk to you later",
}

while 1:
    inp = input()
    print(dct[inp] if inp in dct.keys() else inp)
    if inp == "TTYL": break