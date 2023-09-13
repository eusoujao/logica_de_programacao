/* Professor: Nelio
Descrição: Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		char escala;
	    double temperatura, convercao;

	    System.out.print ("Voce vai digitar a temperatura em qual escala (C/F)? ");
	    escala = sc.next().charAt(0);

	    if (escala != 'C'){

	    	System.out.print ("Digite a temperatura em Fahrenheit: ");
	        temperatura = sc.nextDouble();
	        convercao = (temperatura - 32) / 1.8;
	        System.out.print ("Temperatura equivalente em Celsius: " + String.format("%.2f" , convercao));

	    } else {

	    	System.out.print ("Digite a temperatura em Celsius: ");
	        temperatura = sc.nextDouble();
	        convercao = temperatura * 1.8 + 32;
	        System.out.print ("Temperatura equivalente em Fahrenheit: " + String.format("%.2f" , convercao));

	    }
	    
	    sc.close();

	}

}
