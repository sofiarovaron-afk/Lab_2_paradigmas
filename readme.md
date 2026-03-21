Este repositório contém a refatoração de um código base fornecido em aula. O objetivo foi aplicar conceitos de modularização e melhoria de lógica.

Alunos: Anna Heloisy Raymundo Nicolau 
             Heloísa Bragatto Beraldo 
             Rodrigo Gabriel de Araujo Durigan     
             Sofia Tiengo Rovaron

Exercício: Aplicar os conceitos de Abstração Procedural em códigos legados.
Resolver problemas clássicos de programação não estruturada.
Eliminar o alto acoplamento e o uso de estado global (código monolítico).
Aumentar a coesão do sistema.

Análise de Risco: Identificar no código original onde o estado global está exposto. Apontar os riscos de efeitos colaterais indesejados caso o sistema cresça.

#include <stdio.h>

float temp_c = 0.0;

float temp_f = 0.0;

int alarme = 0;

As variáveis acima foram incluídas fora da função main, então são de escopo global. Isso as leva a serem acessíveis por qualquer função do programa e também a serem modificadas por funções que podem ser adicionadas futuramente, causando assim resultados imprevisíveis.

Para a função pura criamos a float calcular_fahrenheit(float temp_c), ela é responsável de converter celsius para fahrenheit. É uma função pura pois só recebe dados, faz o cálculo e retorna o resultado. Não muda nenhuma função fora dela.

Já a função void atualizar_alarme(float temp_c), (int *alarme)é um procedimento responsável por alterar o estado do sistema (nesse caso ativando o alarme) por uma passagem por referência. 

Defesa Arquitetural: Explicar para a turma os ganhos obtidos com a proteção de Escopo, Coesão e Acoplamento.

Com a proteção de escopo as variáveis das temperaturas e do alarme agora estão presas ao corpo da função main, o que nos dá um melhor controle no estado do código. 

Como agora as funções no código foram divididas para cada função, atingimos a alta coesão que resulta em um código mais fácil de entender e de realizar a manutenção caso necessário.

Antes da mudança o acoplamento das funções era alto pois elas dependiam das mesmas variáveis globais, agora com a reestruturação do código os parâmetros fazem a comunicação no programa. O que torna as funções independentes.

