#include <stdio.h>

int main()
{
    // Nota: al pasar el mouse por encima de cada día del enumerador, CodeBlocks nos indica el valor correspondiente.

    // El siguiente enum es erroneo ya que toma los valores por defecto que comienzan con cero.
    // Asigno cero al Lunes cuando debería ser 1.
    enum DiasErroneos {LunesErroneo, MartesErroneo, MiercolesErroneo, JuevesErroneo, ViernesErroneo, SabadoErroneo, DomingoErroneo};

    // Como debo asignar 1 a Lunes, no puedo usar los valores por defecto y tengo que asignarlos uno por uno.
    enum Dias {Lunes=1, Martes=2, Miercoles=3, Jueves=4, Viernes=5, Sabado=6, Domingo=7};

    // Notar que en vez de declarar dia como una variable del tipo int, lo declaré del tipo enum. También funciona si lo declaraba como int.
    enum Dias dia;

    printf("Introduce el numero de dia de la semana: ");
    scanf("%d",&dia);
    switch(dia){
      case Lunes:
          printf("Lunes");
          break;
      case Martes:
          printf("Martes");
          break;
      case Miercoles:
          printf("Miercoles");
          break;
      case Jueves:
          printf("Jueves");
          break;
      case Viernes:
          printf("Viernes");
          break;
      case Sabado:
          printf("Sabado");
          break;
      case Domingo:
          printf("Domingo");
          break;
      default:
        printf("Error, numero invalido");
    }
    return 0;
}
