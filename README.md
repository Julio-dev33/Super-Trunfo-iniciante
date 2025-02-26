# Super-Trunfo-iniciante
Desenvolvendo o jogo Super Trunfo para prática da linguagem C
Explicação do código:
Declaração de variáveis:

Variáveis do tipo char são usadas para armazenar o estado e o código da carta.
Arrays de char[] (strings) para armazenar o código da carta e o nome da cidade.
Variáveis do tipo int para armazenar a população e o número de pontos turísticos.
Variáveis do tipo float para armazenar a área e o PIB.
Leitura dos dados:

A função scanf() é usada para capturar as entradas do usuário.
Para o tipo char, o scanf(" %c", &variavel) é utilizado com um espaço antes de %c para garantir que qualquer caractere de nova linha anterior seja ignorado.
Para ler strings com espaços, usamos scanf(" %[^\n]%*c", string).
Exibição dos dados:

Após a captura das entradas, os dados são impressos na tela, formatados conforme os requisitos.
Como usar o programa:
O programa pedirá ao usuário para inserir as informações para as quatro cartas.
O usuário deve fornecer os dados conforme solicitado.
Ao final, o programa exibirá as informações das cartas, de forma organizada e legível.
Observações:
Este código cumpre os requisitos de ler os dados de quatro cartas e exibir as informações de maneira formatada.
A formatação dos valores numéricos é feita com 2 casas decimais para área e PIB, e os números inteiros são exibidos normalmente.
