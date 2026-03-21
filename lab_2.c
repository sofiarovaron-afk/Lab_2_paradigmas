//Programa original escolhido: Estufa Agrícola (IoT):
#include <stdio.h>
float temp_c = 0.0;
float temp_f = 0.0;
int alarme = 0;


int main() {
temp_c = 38.5; //exposto
temp_f = (temp_c * 9.0 / 5.0) + 32.0;
if (temp_c > 35.0) { alarme = 1; }
printf("F: %.2f | Alarme: %d\n", temp_f, alarme);
return 0;
}

//codigo refatorado e modularizado:
#include <stdio.h>

float calcular_fahrenheit(float temp_c) {
    return (temp_c * 9.0 / 5.0) + 32.0;
}
void atualizar_alarme(float temp_c, int *alarme) {
    if (temp_c > 35.0) {
        *alarme = 1;
    } else {
        *alarme = 0;
    }
}

int main() {

    float temp_c = 38.5;
    float temp_f;
    int alarme = 0;

    temp_f = calcular_fahrenheit(temp_c);
    atualizar_alarme(temp_c, &alarme);

    printf("F: %.2f | Alarme: %d\n", temp_f, alarme);
    return 0;
}
