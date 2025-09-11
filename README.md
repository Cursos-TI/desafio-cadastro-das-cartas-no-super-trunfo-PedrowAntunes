📘 Explicação do Jogo Super Trunfo----


-----1️⃣ Cadastro das Cartas

O jogo começa pedindo ao usuário que insira os dados de duas cidades (Cartas).
Para cada carta, são cadastrados:

Estado (letra de A a H)

Código da carta (ex: A01, B02)

Nome da cidade

População (int)

Área em km² (float)

PIB em bilhões de reais (float)

Número de pontos turísticos (int)

🔹 A partir desses dados, o sistema também calcula automaticamente:

Densidade demográfica = população / área

PIB per capita = (PIB convertido para reais) / população

Super poder = soma de todos os atributos, mas com a densidade invertida (1/densidade).

-----2️⃣ Escolha dos Atributos

Depois do cadastro, o jogo mostra um menu com 7 atributos possíveis para comparar:

População

Área

PIB

Pontos turísticos

Densidade demográfica (menor vence)

PIB per capita

Super poder

➡️ O jogador deve escolher dois atributos diferentes para a comparação.
O menu do segundo atributo é dinâmico, ou seja, o primeiro escolhido não aparece mais como opção.

-----3️⃣ Comparação dos Atributos

Para cada atributo escolhido, o programa mostra:

O nome das duas cidades

O valor do atributo em cada carta

O vencedor da comparação (ou "Empate!")

🔹 Regras de vitória por atributo:

Maior valor vence, exceto na densidade demográfica, onde menor valor vence.

-----4️⃣ Soma dos Atributos

Após as comparações individuais, o programa soma os valores dos dois atributos escolhidos para cada carta:
Em seguida, exibe o vencedor pela soma:

Se uma cidade tiver soma maior, ela vence.

Se as somas forem iguais, o resultado final é Empate!

-----🏁 Conclusão

Com este jogo, o jogador pode:

Cadastrar duas cidades detalhadamente.

Escolher dois atributos para compará-las.

Ver os vencedores de cada atributo.

Descobrir a carta vencedora do SUPER TRUNFO pela soma dos dois atributos escolhidos.