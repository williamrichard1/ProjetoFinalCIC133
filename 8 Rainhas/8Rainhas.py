numeroRainhas = 8

solucaoAtual = [0 for x in range(numeroRainhas)]
listaSolucoes = []


def validarLinhaSegura(linhaVerificada, colunaVerificada):

    if linhaVerificada == 0:
        return True

    for linha in range(0, linhaVerificada):

        # checa coluna
        if colunaVerificada == solucaoAtual[linha]:
            return False

        # checa diagonal
        if abs(linhaVerificada - linha) == abs(colunaVerificada - solucaoAtual[linha]):
            return False

    # se elas nao se atacarem
    return True


for rainha0 in range(numeroRainhas):
    if not validarLinhaSegura(0, rainha0):
        continue
    else:
        solucaoAtual[0] = rainha0

    for rainha1 in range(numeroRainhas):
        if not validarLinhaSegura(1, rainha1):
            continue
        else:
            solucaoAtual[1] = rainha1

        for rainha2 in range(numeroRainhas):
            if not validarLinhaSegura(2, rainha2):
                continue
            else:
                solucaoAtual[2] = rainha2

            for rainha3 in range(numeroRainhas):
                if not validarLinhaSegura(3, rainha3):
                    continue
                else:
                    solucaoAtual[3] = rainha3

                for rainha4 in range(numeroRainhas):
                    if not validarLinhaSegura(4, rainha4):
                        continue
                    else:
                        solucaoAtual[4] = rainha4

                    for rainha5 in range(numeroRainhas):
                        if not validarLinhaSegura(5, rainha5):
                            continue
                        else:
                            solucaoAtual[5] = rainha5

                        for rainha6 in range(numeroRainhas):
                            if not validarLinhaSegura(6, rainha6):
                                continue
                            else:
                                solucaoAtual[6] = rainha6

                            for rainha7 in range(numeroRainhas):
                                if not validarLinhaSegura(7, rainha7):
                                    continue
                                else:
                                    solucaoAtual[7] = rainha7
                                    listaSolucoes.append(solucaoAtual.copy())

print("Foram encontradas:", len(listaSolucoes), "soluções")
for solucao in listaSolucoes:
    print(solucao)
