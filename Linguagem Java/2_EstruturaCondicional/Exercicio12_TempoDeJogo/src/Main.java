/* Professor: Nelio
Descrição: Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		 int hora1, hora2, horaTotal;

		    System.out.print("Hora inicial: ");
		    hora1 = sc.nextInt();
		    System.out.print("Hora final: ");
		    hora2 = sc.nextInt();

		    if (hora1 < hora2){

		        horaTotal = hora2 - hora1;

		    } else {

		        horaTotal = (hora2 + 24) - hora1;

		    }

		    System.out.print ("O JOGO DUROU " + horaTotal + " HORA(S)");
		    
		    sc.close();

	}

}
