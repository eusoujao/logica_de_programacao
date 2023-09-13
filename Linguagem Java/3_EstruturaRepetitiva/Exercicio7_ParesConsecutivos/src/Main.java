/* Professor: Nelio
Descrição: O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X
for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X
, se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a
soma de 12+14+16+18+20.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int x, soma;

		System.out.print ("Digite um numero inteiro: ");
	    x = sc.nextInt();

	    while(x != 0){

	        if(x%2 != 0){

	            x = x + 1;

	        };

	        soma = 5 * x + 20;

	        System.out.println ("SOMA = " + soma);

	        System.out.print ("Digite um numero inteiro: ");
	        x = sc.nextInt();

	    }
	    
	    sc.close();

	}

}
