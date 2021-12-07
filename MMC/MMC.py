from math import gcd
def calculaMMC(a,b): return abs(a * b) / gcd(a,b) if a and b else 0


def inicia():
    primeiroNumero = int(input())
    segundoNumero = int(input())
    resultado = calculaMMC(primeiroNumero, segundoNumero)
    print("Resultado MMC: ", resultado)

if __name__ == "__main__":
    inicia()
