
def secret() :
	print("Secret.")

line = input("Mot de passe : ")

if line == "einstein":
	secret()

line = input("Entrez un calcul : ")
print(eval(line))
