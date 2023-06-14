n = []

for contador, _ in enumerate(range(1, 6)):
    n2 = float(input(f"Insira o tempo da {contador + 1}° excução: "))
    n.append(n2)

media = sum(n) / len(n)


media_f = "{:.4f}".format(media)

print("O tempo de execução médio é:", media_f)
