<!-- Minhas anotações da vídeoaula recomendada pelo professor 'JavaScript #10 - Expressões Regulares - Rodrigo Branas'.

Declaração de regExp
var regExp = /<Expressão Regular>/; Ou var regExp = new RegExp("<Expressão Regular>");

Para colocar DDD e reconhecer tem que usar a barra inversa "\" antes do caractere especial, isso serve para reconhecer os caracteres especiais
Para o índice reconhecer o começo e o fim de um dado no meio de uma string tem que usar ^ (ínicio) e $ (fim)
Para reconhecer qualquer tipo de número tem que usar [0-9] para cada número do telefone, isso faz com que o programa reconheça que o número tem um range de 0 a 9, por isso reconhece qualquer número

Quantificadores para números
Três formas de dizer quantidade:
{n} - quantifica um número específico
{n,} - quantifica um número mínimo
{n,m} - quantifica um número mínimo e um número máximo
Quantificadores podem ser aplicados a caracteres, grupos, conjuntos ou metacaracteres
"?" - Zero ou um
"\*" - Zero ou mais
"+" - Um ou mais

Metacaracteres:
\d - representa o conjunto [0-9]
\s - representa um espaço em branco
[19:46, 06/05/2024] Henrique Reis: Modificadores
Javascript aceita 3 tipos
i - case insensitive (flexibilizar maiúsculo ou minúsculo)
g - percorre toda string
m - multiline (caso tenha quebra de linha) -->
