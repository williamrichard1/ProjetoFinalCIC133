from math import gcd


def calculaMDC(u, v):
    while v:
        u, v = v, u % v
    return abs(u)


def inicia():
    primeiroNumero = int(input())
    segundoNumero = int(input())
    resultado = calculaMDC(primeiroNumero, segundoNumero)
    print("Resultado: ", resultado)

8
if __name__ == "__main__":
    inicia()
