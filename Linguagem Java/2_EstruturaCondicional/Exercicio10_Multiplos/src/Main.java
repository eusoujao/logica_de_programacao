/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		 int numero1, numero2, divisao1, divisao2;

		    System.out.print ("Digite dois numeros inteiros: \n");
		    numero1 = sc.nextInt();
		    numero2 = sc.nextInt();

		    divisao1 = numero1 % numero2;
		    divisao2 = numero2 % numero1;

		    if (divisao1 == 0 || divisao2 == 0){

		    	System.out.print("Sao multiplos");

		    } else {

		    	System.out.print("Nao sao multiplos");

		    }
		    
		    sc.close();

	}

}
